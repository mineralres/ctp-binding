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

using namespace std;
using namespace pb;

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

#define TIME_LIMIT 29190000

namespace pb
{
ctp_trade_adapter::ctp_trade_adapter(PopupQueue *q, int64_t gospi, const TradingRoute &r)
{
	this->q_ = q;
	this->route_ = r;
	this->gospi_ = gospi;
	api_ = CThostFtdcTraderApi::CreateFtdcTraderApi();
	api_->RegisterSpi(this);
	for (int i = 0; i < r.market_data_front_list_size(); i++)
	{
		auto f = r.market_data_front_list(i);
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
	api_->ReqUserLogin(&req, ++request_id_);
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
	req.RequestID = ++request_id_;
	sprintf(req.OrderRef, "%lld", order.id().order_ref());
	sprintf(req.UserID, "%s", order.account().data());
	return api_->ReqOrderInsert(&req, req.RequestID);
}

void ctp_trade_adapter::OnFrontConnected()
{
	q_->push(pb::CTP_ON_FRONT_CONNECTED, "", gospi_);
}

void ctp_trade_adapter::OnFrontDisconnected() {}
void ctp_trade_adapter::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	CTPRspInfo rsp;
	rsp.set_error_id(pRspInfo->ErrorID);
	rsp.set_error_msg(pRspInfo->ErrorMsg);
	rsp.set_request_id(nRequestID);
	rsp.set_is_last(bIsLast);
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
void ctp_trade_adapter::OnRtnOrder(CThostFtdcOrderField *pOrder) {}
void ctp_trade_adapter::OnRtnTrade(CThostFtdcTradeField *pTrade) {}
void ctp_trade_adapter::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {}
void ctp_trade_adapter::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {}
void ctp_trade_adapter::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {}
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

} // namespace pb
