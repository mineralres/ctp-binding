//
// ctp_trade_adapter.cc
// ~~~~~~~~~~~~~~~~~~~~~
//
//
// @author mineralres
//
// @copyright 2011-2015
//
//

#include "binding/ctp_trade_adapter.h"
#include "pb/ctp.pb.h"
#include "pb/trade_report.pb.h"
#include "pb/order.pb.h"

using namespace std;
using namespace pb;

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

#define TIME_LIMIT 29190000

namespace pb
{
void to_trade_report(const CThostFtdcTradeField &s, CTPTradeField &d);
void to_order(const CThostFtdcOrderField &s, CTPOrderField &d);

ctp_trade_adapter::ctp_trade_adapter(PopupQueue *q, int64_t gospi, const TradingRoute &r)
{
	this->q_ = q;
	this->route_ = r;
	this->gospi_ = gospi;
	api_ = CThostFtdcTraderApi::CreateFtdcTraderApi();
	api_->RegisterSpi(this);
	for (int i = 0; i < r.trading_front_list_size(); i++)
	{
		auto f = r.trading_front_list(i);
		if (!f.empty() && f[0] != 0)
		{
			string address = f;
			if (!address.empty() && address[0] != 't')
			{
				address = string("tcp://") + address;
			}
			api_->RegisterFront((char *)address.data());
		}
	}
}

ctp_trade_adapter::~ctp_trade_adapter()
{
}

void ctp_trade_adapter::init()
{
	api_->Init();
}

void ctp_trade_adapter::login(const TradingAccount &ta)
{
	CThostFtdcReqUserLoginField req;
	memset(&req, 0, sizeof(req));
	strcpy(req.UserID, ta.account().c_str());
	strcpy(req.BrokerID, route_.broker_id().c_str());
	strcpy(req.Password, ta.password().c_str());
	strcpy(req.UserProductInfo, "Q7V2 773");
	api_->ReqUserLogin(&req, incr_request_id());
}

int ctp_trade_adapter::insert_order(const Order &order)
{
	CThostFtdcInputOrderField req;
	memset(&req, 0, sizeof(req));
	strncpy(req.BrokerID, route_.broker_id().data(), sizeof(req.BrokerID));
	strncpy(req.InvestorID, order.account().data(), sizeof(req.InvestorID));
	strncpy(req.InstrumentID, order.symbol().code().data(), sizeof(req.InstrumentID));

	req.OrderPriceType = THOST_FTDC_OPT_LimitPrice;
	if (order.limit_price() == 0 || order.price_type() == OPT_MARKET_PRICE)
	{
		req.OrderPriceType = THOST_FTDC_OPT_AnyPrice;
	}
	req.Direction = order.direction() + 48;

	if (order.offset_flag() == OF_OPEN)
	{
		req.CombOffsetFlag[0] = THOST_FTDC_OF_Open;
	}
	else if (order.offset_flag() == OF_CLOSE_TODAY)
	{
		req.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;
	}
	else if (order.offset_flag() == OF_CLOSE_YESTERDAY)
	{
		req.CombOffsetFlag[0] = THOST_FTDC_OF_CloseYesterday;
	}
	else if (order.offset_flag() == OF_CLOSE)
	{
		req.CombOffsetFlag[0] = THOST_FTDC_OF_Close;
	}

	req.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;
	req.LimitPrice = order.limit_price();
	req.VolumeTotalOriginal = static_cast<int>(order.volume());
	req.TimeCondition = THOST_FTDC_TC_GFD;
	req.VolumeCondition = THOST_FTDC_VC_AV;
	req.MinVolume = 1;
	req.ContingentCondition = THOST_FTDC_CC_Immediately;
	req.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
	req.IsAutoSuspend = 0;
	req.UserForceClose = 0;
	req.RequestID = incr_request_id();
	sprintf(req.OrderRef, "%lld", order.id().order_ref());
	sprintf(req.UserID, "%s", order.account().data());
	api_->ReqOrderInsert(&req, req.RequestID);
	return -1;
}

int ctp_trade_adapter::incr_request_id()
{
	std::lock_guard<std::mutex> lk(request_id_lock_);
	return ++request_id_;
}

int ctp_trade_adapter::cancel_order(const CancelOrderRequest &cancel)
{
	CThostFtdcInputOrderActionField req;
	memset(&req, 0, sizeof(req));
	strncpy(req.BrokerID, route_.broker_id().data(), sizeof(req.BrokerID));
	strncpy(req.InvestorID, cancel.account().data(), sizeof(req.InvestorID));
	strncpy(req.UserID, cancel.account().data(), sizeof(req.UserID));
	sprintf(req.OrderRef, "%lld", cancel.order_id().order_ref());
	req.FrontID = cancel.order_id().front_id();
	req.SessionID = cancel.order_id().session_id();
	req.ActionFlag = THOST_FTDC_AF_Delete;
	strncpy(req.InstrumentID, cancel.symbol().code().data(), sizeof(req.InstrumentID));
	req.RequestID = incr_request_id();
	auto ret = api_->ReqOrderAction(&req, req.RequestID);
	std::cout << "CancelOrder " << ret << std::endl;
	return ret;
}

void ctp_trade_adapter::OnFrontConnected()
{
	q_->push(pb::CTP_ON_FRONT_CONNECTED, "", gospi_);
}

void ctp_trade_adapter::OnFrontDisconnected() {}
void ctp_trade_adapter::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	RspTradingAccountLogin rsp;
	rsp.set_error_id(pRspInfo->ErrorID);
	rsp.set_error_msg(pRspInfo->ErrorMsg);
	rsp.set_request_id(nRequestID);
	rsp.set_is_last(bIsLast);
	rsp.set_trading_day(atoi(pRspUserLogin->TradingDay));
	rsp.set_front_id(pRspUserLogin->FrontID);
	rsp.set_session_id(pRspUserLogin->SessionID);
	rsp.set_max_order_ref(pRspUserLogin->MaxOrderRef);
	q_->push(pb::CTP_RSP_USER_LOGIN, rsp.SerializePartialAsString(), gospi_);
}

void ctp_trade_adapter::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}

void ctp_trade_adapter::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
	CTPOrderField rtn;
	to_order(*pOrder, rtn);
	q_->push(pb::CTP_ON_RTN_ORDER, rtn.SerializePartialAsString(), gospi_);
}

void ctp_trade_adapter::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
	CTPTradeField trade;
	to_trade_report(*pTrade, trade);
	q_->push(pb::CTP_ON_RTN_TRADE, trade.SerializePartialAsString(), gospi_);
}

void ctp_trade_adapter::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {}
void ctp_trade_adapter::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
	std::cout << "OnErrRtnOrderAction " << pRspInfo->ErrorID << " " << pRspInfo->ErrorMsg << std::endl;
}

void ctp_trade_adapter::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	std::cout << "OnRspOrderAction " << pRspInfo->ErrorID << " " << pRspInfo->ErrorMsg << std::endl;
}

void ctp_trade_adapter::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {}
void ctp_trade_adapter::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {}

void ctp_trade_adapter::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTPOnRspOrderInsert rsp;
	rsp.set_error_id(pRspInfo->ErrorID);
	rsp.set_error_msg(pRspInfo->ErrorMsg);
	rsp.set_order_ref(pInputOrder->OrderRef);
	q_->push(pb::CTP_ON_RSP_ORDER_INSERT, rsp.SerializePartialAsString(), gospi_);
}

void ctp_trade_adapter::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
void ctp_trade_adapter::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {}
void ctp_trade_adapter::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {}
void ctp_trade_adapter::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {}
void ctp_trade_adapter::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {}

void ctp_trade_adapter::ReqAuthenticate() {}
void ctp_trade_adapter::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}

void to_trade_report(const CThostFtdcTradeField &s, CTPTradeField &d)
{
	d.set_broker_id(s.BrokerID);
	d.set_investor_id(s.InvestorID);
	d.set_instrument_id(s.InstrumentID);
	d.set_order_ref(s.OrderRef);
	d.set_user_id(s.UserID);
	d.set_exchange_id(s.ExchangeID);
	d.set_trade_id(s.TradeID);
	d.set_direction(s.Direction);
	d.set_order_sys_id(s.OrderSysID);
	d.set_participant_id(s.ParticipantID);
	d.set_client_id(s.ClientID);
	d.set_trading_role(s.TradingRole);
	d.set_exchange_inst_id(s.ExchangeInstID);
	d.set_offset_flag(s.OffsetFlag);
	d.set_hedge_flag(s.HedgeFlag);
	d.set_price(s.Price);
	d.set_volume(s.Volume);
	d.set_trade_date(s.TradeDate);
	d.set_trade_time(s.TradeTime);
	d.set_trade_type(s.TradeType);
	d.set_price_source(s.PriceSource);
	d.set_trader_id(s.TraderID);
	d.set_order_local_id(s.OrderLocalID);
	d.set_clearing_part_id(s.ClearingPartID);
	d.set_business_unit(s.BusinessUnit);
	d.set_sequence_no(s.SequenceNo);
	d.set_trading_day(atoi(s.TradingDay));
	d.set_settlement_id(s.SettlementID);
	d.set_broker_order_seq(s.BrokerOrderSeq);
	d.set_trade_source(s.TradeSource);
	d.set_invest_unit_id(s.InvestUnitID);
}

void to_order(const CThostFtdcOrderField &s, CTPOrderField &d)
{
	d.set_broker_id(s.BrokerID);
	d.set_investor_id(s.InvestorID);
	d.set_instrument_id(s.InstrumentID);
	d.set_order_ref(s.OrderRef);
	d.set_user_id(s.UserID);
	d.set_order_price_type(s.OrderPriceType);
	d.set_direction(s.Direction);
	d.set_comb_offset_flag(s.CombOffsetFlag[0]);
	d.set_comb_hedge_flag(s.CombHedgeFlag[0]);
	d.set_limit_price(s.LimitPrice);
	d.set_volume_total_original(s.VolumeTotalOriginal);
	d.set_time_condition(s.TimeCondition);
	d.set_gtd_date(s.GTDDate);
	d.set_volume_condition(s.VolumeCondition);
	d.set_min_volume(s.MinVolume);
	d.set_contingent_condition(s.ContingentCondition);
	d.set_stop_price(s.StopPrice);
	d.set_force_close_reason(s.ForceCloseReason);
	d.set_is_auto_suspend(s.IsAutoSuspend);
	d.set_business_unit(s.BusinessUnit);
	d.set_request_id(s.RequestID);
	d.set_order_local_id(s.OrderLocalID);
	d.set_exchange_id(s.ExchangeID);
	d.set_participant_id(s.ParticipantID);
	d.set_client_id(s.ClientID);
	d.set_exchange_inst_id(s.ExchangeInstID);
	d.set_trader_id(s.TraderID);
	d.set_install_id(s.InstallID);
	d.set_order_submit_status(s.OrderSubmitStatus);
	d.set_notify_sequence(s.NotifySequence);
	d.set_trading_day(atoi(s.TradingDay));
	d.set_settlement_id(s.SettlementID);
	d.set_order_sys_id(s.OrderSysID);
	d.set_order_source(s.OrderSource);
	d.set_order_status(s.OrderStatus);
	d.set_order_type(s.OrderType);
	d.set_volume_traded(s.VolumeTraded);
	d.set_volume_total(s.VolumeTotal);
	d.set_insert_date(s.InsertDate);
	d.set_insert_time(s.InsertTime);
	d.set_active_time(s.ActiveTime);
	d.set_suspend_time(s.SuspendTime);
	d.set_update_time(s.UpdateTime);
	d.set_cancel_time(s.CancelTime);
	d.set_active_trader_id(s.ActiveTraderID);
	d.set_clearing_part_id(s.ClearingPartID);
	d.set_sequence_no(s.SequenceNo);
	d.set_front_id(s.FrontID);
	d.set_session_id(s.SessionID);
	d.set_user_product_info(s.UserProductInfo);
	d.set_status_msg(s.StatusMsg);
	d.set_user_force_close(s.UserForceClose);
	d.set_active_user_id(s.ActiveUserID);
	d.set_broker_order_seq(s.BrokerOrderSeq);
	d.set_relative_order_sys_id(s.RelativeOrderSysID);
	d.set_zce_total_traded_volume(s.ZCETotalTradedVolume);
	d.set_is_swap_order(s.IsSwapOrder);
	d.set_branch_id(s.BranchID);
	d.set_invest_unit_id(s.InvestUnitID);
	d.set_account_id(s.AccountID);
	d.set_currency_id(s.CurrencyID);
	d.set_ip_address(s.IPAddress);
	d.set_mac_address(s.MacAddress);
}

} // namespace pb
