//
// ctpmd.cc
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//
// @author Xiaobing
//
// @copyright 2011-2015
//
//

#include "binding/ctpmd.h"
#include <iostream>
#include "pb/market_data.pb.h"
#include "pb/ctp.pb.h"

using namespace std;

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

namespace pb
{
ctpmd::ctpmd(PopupQueue *q, int64_t gospi, const TradingRoute &r)
{
    this->q_ = q;
    this->route_ = r;
    this->gospi_ = gospi;
    api_ = CThostFtdcMdApi::CreateFtdcMdApi();
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

ctpmd::~ctpmd()
{
}

void ctpmd::init()
{
    api_->Init();
}

void ctpmd::login(const TradingAccount &ta)
{
    CThostFtdcReqUserLoginField req_login;
    memset(&req_login, 0, sizeof(req_login));
    strcpy(req_login.UserID, ta.account().data());
    strcpy(req_login.BrokerID, route_.broker_id().data());
    strcpy(req_login.Password, ta.password().data());
    strcpy(req_login.UserProductInfo, "");
    api_->ReqUserLogin(&req_login, ++request_id_);
}

void ctpmd::subscribe(const SymbolList &l)
{
    auto ppInstrumentID = new char *[l.list_size()];
    for (int i = 0; i < l.list_size(); i++)
    {
        ppInstrumentID[i] = (char *)(l.list(i).code().data());
    }
    // std::cout << "SubscribeMarketData " << ppInstrumentID[0] << " " << l.list_size() << std::endl;
    api_->SubscribeMarketData(ppInstrumentID, l.list_size());
    delete ppInstrumentID;
}

void ctpmd::OnFrontDisconnected(int nReason)
{
    // std::cout << "OnFrontDisconnected" << std::endl;
}

void ctpmd::OnFrontConnected()
{
    q_->push(pb::CTP_ON_FRONT_CONNECTED, "", gospi_);
}

void ctpmd::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    CTPRspInfo rsp;
    rsp.set_error_id(pRspInfo->ErrorID);
    rsp.set_error_msg(pRspInfo->ErrorMsg);
    rsp.set_request_id(nRequestID);
    rsp.set_is_last(bIsLast);
    q_->push(pb::CTP_RSP_USER_LOGIN, rsp.SerializePartialAsString(), gospi_);
}

void ctpmd::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
{
    MarketDataSnapshot md;
    md.set_price(pDepthMarketData->LastPrice);
    md.set_position(pDepthMarketData->OpenInterest);
    md.set_volume(pDepthMarketData->Volume);
    md.set_amount(pDepthMarketData->AveragePrice * pDepthMarketData->Volume);
    md.set_time2(pDepthMarketData->UpdateTime);
    md.set_exchange(pDepthMarketData->ExchangeID);
    md.set_trading_day(atoi(pDepthMarketData->TradingDay));
    md.set_action_day(atoi(pDepthMarketData->ActionDay));
    md.set_milliseconds(pDepthMarketData->UpdateMillisec);

    OrderBook ob;
    ob.set_ask(pDepthMarketData->AskPrice1);
    ob.set_ask_volume(pDepthMarketData->AskVolume1);
    ob.set_bid(pDepthMarketData->BidPrice1);
    ob.set_bid_volume(pDepthMarketData->BidVolume1);
    *md.add_order_book_list() = ob;

    md.set_open(pDepthMarketData->OpenPrice);
    md.set_high(pDepthMarketData->HighestPrice);
    md.set_low(pDepthMarketData->LowestPrice);
    md.set_close(pDepthMarketData->ClosePrice);
    md.set_volume(pDepthMarketData->Volume);
    md.set_amount(pDepthMarketData->Turnover);
    md.set_position(pDepthMarketData->OpenInterest);
    md.set_price(pDepthMarketData->LastPrice);
    md.set_pre_close(pDepthMarketData->PreClosePrice);
    md.set_pre_settlement_price(pDepthMarketData->PreSettlementPrice);
    md.set_pre_position(pDepthMarketData->PreOpenInterest);
    md.set_settlement_price(pDepthMarketData->SettlementPrice);
    md.set_upper_limit_price(pDepthMarketData->UpperLimitPrice);
    md.set_lower_limit_price(pDepthMarketData->LowerLimitPrice);
    md.set_pre_delta(pDepthMarketData->PreDelta);
    md.set_delta(pDepthMarketData->CurrDelta);
    md.set_average_price(pDepthMarketData->AveragePrice);
    q_->push(pb::CTP_ON_RTN_DEPTH_MARKET_DATA, md.SerializePartialAsString(), gospi_);
}

void ctpmd::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    // std::cout << "OnRspError " << pRspInfo->ErrorMsg << std::endl;
}

void ctpmd::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    // std::cout << "OnRspSubMarketData " << pRspInfo->ErrorMsg << std::endl;
}

} // namespace pb
