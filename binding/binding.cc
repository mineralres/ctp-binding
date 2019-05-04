// (C) Copyright xiaobing 2020.8
//
// xiaobingpang@qq.com
//
//
// This file was created by xiaobing.
//

#include "binding/binding.h"
#include <string>
#include "ext/include/windows/pb/binding.pb.h"
#include "binding/ctpmd.h"
#include "pb/common.pb.h"
#include "binding/ctp_trade_adapter.h"

using namespace pb;

int CTP_MD_Call(CallingSession *s)
{
    std::cout << "this is CTP_MD_Call  [" << s->inType << "]" << std::endl;
    switch (s->inType)
    {
    case pb::CTP_CREATE_API:
    {
        // 创建行情接口
        TradingRoute r;
        if (r.ParseFromArray(s->inData, s->inDataLen))
        {
            s->cppapi = new ctpmd(&mdQueue, s->gospi, r);
        }
    }
    break;
    case pb::CTP_REQ_CALL_INIT:
    {
        ((ctpmd *)s->cppapi)->init();
    }
    break;
    case pb::CTP_REQ_USER_LOGIN:
    {
        // 登陆
        pb::TradingAccount ta;
        if (ta.ParseFromArray(s->inData, s->inDataLen))
        {
            ((ctpmd *)s->cppapi)->login(ta);
        }
    }
    break;
    case pb::CTP_REQ_SUBSCRIBE_MARKET_DATA:
    {
        // 订阅
        pb::SymbolList l;
        if (l.ParseFromArray(s->inData, s->inDataLen))
        {
            ((ctpmd *)s->cppapi)->subscribe(l);
        }
    }
    break;
    default:
        break;
    }
    return 0;
}

int CTP_Trade_Call(CallingSession *s)
{
    std::cout << "this is CTP_Trade_Call [" << s->inType << "]" << std::endl;
    switch (s->inType)
    {
    case pb::CTP_CREATE_API:
    {
        // 创建行情接口
        TradingRoute r;
        if (r.ParseFromArray(s->inData, s->inDataLen))
        {
            s->cppapi = new ctp_trade_adapter(&tradeQueue, s->gospi, r);
        }
    }
    break;
    case pb::CTP_REQ_CALL_INIT:
    {
        ((ctp_trade_adapter *)s->cppapi)->init();
    }
    break;
    case pb::CTP_REQ_USER_LOGIN:
    {
        // 登陆
        pb::TradingAccount ta;
        if (ta.ParseFromArray(s->inData, s->inDataLen))
        {
            ((ctp_trade_adapter *)s->cppapi)->login(ta);
        }
    }
    break;
    case pb::CTP_REQ_INSERT_ORDER:
    {
        pb::Order order;
        if (order.ParseFromArray(s->inData, s->inDataLen))
        {
            ctp_trade_adapter *trader = (ctp_trade_adapter *)s->cppapi;
            try
            {
                trader->insert_order(order);
            }
            catch (std::exception &e)
            {
                order.set_comment(e.what());
                order.set_status(pb::OS_CANCELED);
                order.set_volume_canceled(order.volume());
                // auto *spi = (tdspi *)s->cppspi;
                // spi->slot_on_rtn_order(order);
            }
        }
    }
    break;
    default:
        break;
    }
    return 0;

    /*
    switch (s->inType)
    {
    case pb::CTP_REQ_CANCEL_ORDER:
    {
        pb::cancel_order_request req;
        if (req.ParseFromArray(s->inData, s->inDataLen))
        {
            usp_trade_adapter *trader = (usp_trade_adapter *)s->cppapi;
            trader->cancel_order(req);
        }
    }
    break;
    case pb::CTP_QUERY_TRADING_ACCOUNT:
    {
        usp_trade_adapter *trader = (usp_trade_adapter *)s->cppapi;
        trader->query_summary();
    }
    break;
    case pb::CTP_QUERY_POSITION_DETAIL:
    {
        usp_trade_adapter *trader = (usp_trade_adapter *)s->cppapi;
        trader->query_position_detail();
    }
    break;
    case pb::CTP_QUERY_COMMISSION_RATE:
    {
        pb::symbol sym;
        if (sym.ParseFromArray(s->inData, s->inDataLen))
        {
            usp_trade_adapter *trader = (usp_trade_adapter *)s->cppapi;
            trader->query_commission_rate(sym);
        }
    }
    break;
    case pb::CTP_QUERY_MARGIN_RATE:
    {
        pb::symbol sym;
        if (sym.ParseFromArray(s->inData, s->inDataLen))
        {
            usp_trade_adapter *trader = (usp_trade_adapter *)s->cppapi;
            trader->query_margin_rate(sym);
        }
    }
    break;
    }
*/
    return 0;
}

/*
// 登陆响应
void tdspi::slot_on_rsp_user_login(const exta_buffer &eb)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_RSP_USER_LOGIN;
    msg.data = eb.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 委托响应
void tdspi::slot_on_rtn_order(const pb::order &od)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_RTN_ORDER;
    msg.data = od.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 成交响应
void tdspi::slot_on_rtn_trade(const pb::TradeReport &rtn)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_RTN_TRADE;
    msg.data = rtn.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 撤单错误响应
void tdspi::slot_on_rtn_cancel_order(const pb::on_rtn_cancel_order_packet &rtn)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_RTN_CANCEL_ORDER;
    msg.data = rtn.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 转帐通知
void tdspi::slot_on_rtn_transfer_money_record(const pb::money_transfer_record &rtn)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_RTN_MTR;
    msg.data = rtn.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 连接上了
void tdspi::slot_on_disconnected(const account_id &id, const std::string &reason, int company)
{
    pb::ExtaDisconnected rtn;
    *rtn.mutable_id() = id;
    rtn.set_comment(reason);
    rtn.set_company(company);

    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_DISCONNECTED;
    msg.data = rtn.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

void tdspi::slot_on_rsp_query_summary(const pb::settlement_account_summary &summary)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_RSP_QUERY_TRADING_ACCOUNT;
    msg.data = summary.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 查询持仓
void tdspi::slot_on_rsp_query_position_detail(const std::vector<pb::close_trade_record> &rsp)
{
    pb::CloseTradeRecordList list;
    for (int i = 0; i < rsp.size(); i++)
    {
        *list.add_list() = rsp[i];
    }
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_RSP_QUERY_POSITION_DETAIL;
    msg.data = list.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 查询手续费
void tdspi::slot_on_rsp_query_commission_rate(const pb::CommissionRate &cr)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_RSP_QUERY_COMMISSION_RATE;
    msg.data = cr.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

// 查询保证金率
void tdspi::slot_on_rsp_query_margin_rate(const pb::MarginRate &mr)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_RSP_QUERY_MARGIN_RATE;
    msg.data = mr.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

void tdspi::slot_on_log(const std::string &str)
{
    PopupMessage msg;
    msg.apiType = 0;
    msg.type = pb::CTP_ON_LOG;
    msg.data = str;
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}
*/

int CTP_Trade_PopMessage(CallingSession *s)
{
    // std::cout << "this is CTP_TradeQueue_PopMessage" << std::endl;
    return tradeQueue.pop(s);
}

int CTP_MD_PopMessage(CallingSession *s)
{
    // std::cout << "this is CTP_MD_Queue_PopMessage" << std::endl;
    return mdQueue.pop(s);
}

/*
void mdspi::slot_on_rsp_user_login(const std::string &err, const account_id &id)
{
    PopupMessage msg;
    msg.apiType = 1;
    msg.type = pb::CTP_MD_USER_LOGIN;
    msg.data = err;
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}

void mdspi::slot_on_rtn_mds_l2(const MarketDataSnapshot &rtn)
{
    PopupMessage msg;
    msg.apiType = 1;
    msg.type = pb::CTP_MD_ON_RTN_MDS;
    msg.data = rtn.SerializePartialAsString();
    msg.gospi = gospi_;
    std::lock_guard<std::mutex> lk(muBufferQueue);
    bufferQueue.push_back(msg);
    cvBufferQueue.notify_one();
}
*/