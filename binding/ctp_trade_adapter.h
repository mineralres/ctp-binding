//
// ctp_trade_adapter.h
//
//
//
// @author mineralres
//
// @copyright 2011-2015
//
//

#ifndef CTP_TRADE_ADAPTER_HXX_
#define CTP_TRADE_ADAPTER_HXX_

#include "ctp/ThostFtdcTraderApi.h"
#include "pb/common.pb.h"
#include "pb/trading.pb.h"
#include "binding/session.h"
#include "binding/popup_queue.h"
#include "pb/order.pb.h"
#include <mutex>

namespace pb
{
class ctp_trade_adapter : public CThostFtdcTraderSpi
{
public:
	ctp_trade_adapter(PopupQueue *q, int64_t, const TradingRoute &);
	~ctp_trade_adapter();

	CThostFtdcTraderApi *api_;
	PopupQueue *q_;
	int64_t gospi_;
	TradingRoute route_;
	int request_id_;
	std::mutex request_id_lock_;

	void init();
	void login(const TradingAccount &);
	int insert_order(const Order &);
	int cancel_order(const CancelOrderRequest &);

private:
	int incr_request_id();
	void OnFrontConnected();
	void OnFrontDisconnected();
	void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRtnOrder(CThostFtdcOrderField *pOrder);
	void OnRtnTrade(CThostFtdcTradeField *pTrade);
	void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);
	void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo);
	void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);
	void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);
	void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);
	void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);
	void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);
	void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);

	void ReqAuthenticate();
	void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
};
} // namespace pb

#endif // CTP_TRADE_ADAPTER_HXX_
