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
    // std::cout << "this is CTP_MD_Call  [" << s->inType << "]" << std::endl;
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
    // std::cout << "this is CTP_Trade_Call [" << s->inType << "]" << std::endl;
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
            return trader->insert_order(order);
        }
    }
    break;
    case pb::CTP_REQ_CANCEL_ORDER:
    {
        pb::CancelOrderRequest req;
        if (req.ParseFromArray(s->inData, s->inDataLen))
        {
            ctp_trade_adapter *trader = (ctp_trade_adapter *)s->cppapi;
            return trader->cancel_order(req);
        }
    }
    break;
    default:
        break;
    }
    return 0;
}

int CTP_Trade_PopMessage(CallingSession *s)
{
    return tradeQueue.pop(s);
}

int CTP_MD_PopMessage(CallingSession *s)
{
    return mdQueue.pop(s);
}
