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
    std::cout << "SubscribeMarketData " << ppInstrumentID[0] << " " << l.list_size() << std::endl;
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
    md.mutable_symbol()->set_code(pDepthMarketData->InstrumentID);
    md.set_price(pDepthMarketData->LastPrice);
    std::cout << "OnRtnDepthMarketData " << pDepthMarketData->InstrumentID << " price: " << pDepthMarketData->LastPrice 
		<< " time:" << pDepthMarketData->UpdateTime << std::endl;
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
