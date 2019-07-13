//
//
//
void copy(ctp::CThostFtdcDisseminationField *dest, CThostFtdcDisseminationField *src)
{
    dest->set_sequenceseries(src->SequenceSeries);
    dest->set_sequenceno(src->SequenceNo);
}

void copy(ctp::CThostFtdcReqUserLoginField *dest, CThostFtdcReqUserLoginField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_password(src->Password);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_macaddress(src->MacAddress);
    dest->set_onetimepassword(src->OneTimePassword);
    dest->set_clientipaddress(src->ClientIPAddress);
    dest->set_loginremark(src->LoginRemark);
    dest->set_clientipport(src->ClientIPPort);
}

void copy(ctp::CThostFtdcRspUserLoginField *dest, CThostFtdcRspUserLoginField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_logintime(src->LoginTime);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_systemname(src->SystemName);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_maxorderref(src->MaxOrderRef);
    dest->set_shfetime(src->SHFETime);
    dest->set_dcetime(src->DCETime);
    dest->set_czcetime(src->CZCETime);
    dest->set_ffextime(src->FFEXTime);
    dest->set_inetime(src->INETime);
}

void copy(ctp::CThostFtdcUserLogoutField *dest, CThostFtdcUserLogoutField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcForceUserLogoutField *dest, CThostFtdcForceUserLogoutField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcReqAuthenticateField *dest, CThostFtdcReqAuthenticateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_authcode(src->AuthCode);
    dest->set_appid(src->AppID);
}

void copy(ctp::CThostFtdcRspAuthenticateField *dest, CThostFtdcRspAuthenticateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_appid(src->AppID);
    dest->set_apptype(src->AppType);
}

void copy(ctp::CThostFtdcAuthenticationInfoField *dest, CThostFtdcAuthenticationInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_authinfo(src->AuthInfo);
    dest->set_isresult(src->IsResult);
    dest->set_appid(src->AppID);
    dest->set_apptype(src->AppType);
}

void copy(ctp::CThostFtdcRspUserLogin2Field *dest, CThostFtdcRspUserLogin2Field *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_logintime(src->LoginTime);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_systemname(src->SystemName);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_maxorderref(src->MaxOrderRef);
    dest->set_shfetime(src->SHFETime);
    dest->set_dcetime(src->DCETime);
    dest->set_czcetime(src->CZCETime);
    dest->set_ffextime(src->FFEXTime);
    dest->set_inetime(src->INETime);
    dest->set_randomstring(src->RandomString);
}

void copy(ctp::CThostFtdcTransferHeaderField *dest, CThostFtdcTransferHeaderField *src)
{
    dest->set_version(src->Version);
    dest->set_tradecode(src->TradeCode);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_tradeserial(src->TradeSerial);
    dest->set_futureid(src->FutureID);
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
    dest->set_operno(src->OperNo);
    dest->set_deviceid(src->DeviceID);
    dest->set_recordnum(src->RecordNum);
    dest->set_sessionid(src->SessionID);
    dest->set_requestid(src->RequestID);
}

void copy(ctp::CThostFtdcTransferBankToFutureReqField *dest, CThostFtdcTransferBankToFutureReqField *src)
{
    dest->set_futureaccount(src->FutureAccount);
    dest->set_futurepwdflag(src->FuturePwdFlag);
    dest->set_futureaccpwd(src->FutureAccPwd);
    dest->set_tradeamt(src->TradeAmt);
    dest->set_custfee(src->CustFee);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferBankToFutureRspField *dest, CThostFtdcTransferBankToFutureRspField *src)
{
    dest->set_retcode(src->RetCode);
    dest->set_retinfo(src->RetInfo);
    dest->set_futureaccount(src->FutureAccount);
    dest->set_tradeamt(src->TradeAmt);
    dest->set_custfee(src->CustFee);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferFutureToBankReqField *dest, CThostFtdcTransferFutureToBankReqField *src)
{
    dest->set_futureaccount(src->FutureAccount);
    dest->set_futurepwdflag(src->FuturePwdFlag);
    dest->set_futureaccpwd(src->FutureAccPwd);
    dest->set_tradeamt(src->TradeAmt);
    dest->set_custfee(src->CustFee);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferFutureToBankRspField *dest, CThostFtdcTransferFutureToBankRspField *src)
{
    dest->set_retcode(src->RetCode);
    dest->set_retinfo(src->RetInfo);
    dest->set_futureaccount(src->FutureAccount);
    dest->set_tradeamt(src->TradeAmt);
    dest->set_custfee(src->CustFee);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferQryBankReqField *dest, CThostFtdcTransferQryBankReqField *src)
{
    dest->set_futureaccount(src->FutureAccount);
    dest->set_futurepwdflag(src->FuturePwdFlag);
    dest->set_futureaccpwd(src->FutureAccPwd);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferQryBankRspField *dest, CThostFtdcTransferQryBankRspField *src)
{
    dest->set_retcode(src->RetCode);
    dest->set_retinfo(src->RetInfo);
    dest->set_futureaccount(src->FutureAccount);
    dest->set_tradeamt(src->TradeAmt);
    dest->set_useamt(src->UseAmt);
    dest->set_fetchamt(src->FetchAmt);
    dest->set_currencycode(src->CurrencyCode);
}

void copy(ctp::CThostFtdcTransferQryDetailReqField *dest, CThostFtdcTransferQryDetailReqField *src)
{
    dest->set_futureaccount(src->FutureAccount);
}

void copy(ctp::CThostFtdcTransferQryDetailRspField *dest, CThostFtdcTransferQryDetailRspField *src)
{
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_tradecode(src->TradeCode);
    dest->set_futureserial(src->FutureSerial);
    dest->set_futureid(src->FutureID);
    dest->set_futureaccount(src->FutureAccount);
    dest->set_bankserial(src->BankSerial);
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
    dest->set_bankaccount(src->BankAccount);
    dest->set_certcode(src->CertCode);
    dest->set_currencycode(src->CurrencyCode);
    dest->set_txamount(src->TxAmount);
    dest->set_flag(src->Flag);
}

void copy(ctp::CThostFtdcRspInfoField *dest, CThostFtdcRspInfoField *src)
{
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcExchangeField *dest, CThostFtdcExchangeField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangename(src->ExchangeName);
    dest->set_exchangeproperty(src->ExchangeProperty);
}

void copy(ctp::CThostFtdcProductField *dest, CThostFtdcProductField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_productname(src->ProductName);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_productclass(src->ProductClass);
    dest->set_volumemultiple(src->VolumeMultiple);
    dest->set_pricetick(src->PriceTick);
    dest->set_maxmarketordervolume(src->MaxMarketOrderVolume);
    dest->set_minmarketordervolume(src->MinMarketOrderVolume);
    dest->set_maxlimitordervolume(src->MaxLimitOrderVolume);
    dest->set_minlimitordervolume(src->MinLimitOrderVolume);
    dest->set_positiontype(src->PositionType);
    dest->set_positiondatetype(src->PositionDateType);
    dest->set_closedealtype(src->CloseDealType);
    dest->set_tradecurrencyid(src->TradeCurrencyID);
    dest->set_mortgagefunduserange(src->MortgageFundUseRange);
    dest->set_exchangeproductid(src->ExchangeProductID);
    dest->set_underlyingmultiple(src->UnderlyingMultiple);
}

void copy(ctp::CThostFtdcInstrumentField *dest, CThostFtdcInstrumentField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_instrumentname(src->InstrumentName);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_productid(src->ProductID);
    dest->set_productclass(src->ProductClass);
    dest->set_deliveryyear(src->DeliveryYear);
    dest->set_deliverymonth(src->DeliveryMonth);
    dest->set_maxmarketordervolume(src->MaxMarketOrderVolume);
    dest->set_minmarketordervolume(src->MinMarketOrderVolume);
    dest->set_maxlimitordervolume(src->MaxLimitOrderVolume);
    dest->set_minlimitordervolume(src->MinLimitOrderVolume);
    dest->set_volumemultiple(src->VolumeMultiple);
    dest->set_pricetick(src->PriceTick);
    dest->set_createdate(src->CreateDate);
    dest->set_opendate(src->OpenDate);
    dest->set_expiredate(src->ExpireDate);
    dest->set_startdelivdate(src->StartDelivDate);
    dest->set_enddelivdate(src->EndDelivDate);
    dest->set_instlifephase(src->InstLifePhase);
    dest->set_istrading(src->IsTrading);
    dest->set_positiontype(src->PositionType);
    dest->set_positiondatetype(src->PositionDateType);
    dest->set_longmarginratio(src->LongMarginRatio);
    dest->set_shortmarginratio(src->ShortMarginRatio);
    dest->set_maxmarginsidealgorithm(src->MaxMarginSideAlgorithm);
    dest->set_underlyinginstrid(src->UnderlyingInstrID);
    dest->set_strikeprice(src->StrikePrice);
    dest->set_optionstype(src->OptionsType);
    dest->set_underlyingmultiple(src->UnderlyingMultiple);
    dest->set_combinationtype(src->CombinationType);
}

void copy(ctp::CThostFtdcBrokerField *dest, CThostFtdcBrokerField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerabbr(src->BrokerAbbr);
    dest->set_brokername(src->BrokerName);
    dest->set_isactive(src->IsActive);
}

void copy(ctp::CThostFtdcTraderField *dest, CThostFtdcTraderField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
    dest->set_participantid(src->ParticipantID);
    dest->set_password(src->Password);
    dest->set_installcount(src->InstallCount);
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcInvestorField *dest, CThostFtdcInvestorField *src)
{
    dest->set_investorid(src->InvestorID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorgroupid(src->InvestorGroupID);
    dest->set_investorname(src->InvestorName);
    dest->set_identifiedcardtype(src->IdentifiedCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_isactive(src->IsActive);
    dest->set_telephone(src->Telephone);
    dest->set_address(src->Address);
    dest->set_opendate(src->OpenDate);
    dest->set_mobile(src->Mobile);
    dest->set_commmodelid(src->CommModelID);
    dest->set_marginmodelid(src->MarginModelID);
}

void copy(ctp::CThostFtdcTradingCodeField *dest, CThostFtdcTradingCodeField *src)
{
    dest->set_investorid(src->InvestorID);
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_clientid(src->ClientID);
    dest->set_isactive(src->IsActive);
    dest->set_clientidtype(src->ClientIDType);
    dest->set_branchid(src->BranchID);
    dest->set_biztype(src->BizType);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcPartBrokerField *dest, CThostFtdcPartBrokerField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_isactive(src->IsActive);
}

void copy(ctp::CThostFtdcSuperUserField *dest, CThostFtdcSuperUserField *src)
{
    dest->set_userid(src->UserID);
    dest->set_username(src->UserName);
    dest->set_password(src->Password);
    dest->set_isactive(src->IsActive);
}

void copy(ctp::CThostFtdcSuperUserFunctionField *dest, CThostFtdcSuperUserFunctionField *src)
{
    dest->set_userid(src->UserID);
    dest->set_functioncode(src->FunctionCode);
}

void copy(ctp::CThostFtdcInvestorGroupField *dest, CThostFtdcInvestorGroupField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorgroupid(src->InvestorGroupID);
    dest->set_investorgroupname(src->InvestorGroupName);
}

void copy(ctp::CThostFtdcTradingAccountField *dest, CThostFtdcTradingAccountField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_premortgage(src->PreMortgage);
    dest->set_precredit(src->PreCredit);
    dest->set_predeposit(src->PreDeposit);
    dest->set_prebalance(src->PreBalance);
    dest->set_premargin(src->PreMargin);
    dest->set_interestbase(src->InterestBase);
    dest->set_interest(src->Interest);
    dest->set_deposit(src->Deposit);
    dest->set_withdraw(src->Withdraw);
    dest->set_frozenmargin(src->FrozenMargin);
    dest->set_frozencash(src->FrozenCash);
    dest->set_frozencommission(src->FrozenCommission);
    dest->set_currmargin(src->CurrMargin);
    dest->set_cashin(src->CashIn);
    dest->set_commission(src->Commission);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_positionprofit(src->PositionProfit);
    dest->set_balance(src->Balance);
    dest->set_available(src->Available);
    dest->set_withdrawquota(src->WithdrawQuota);
    dest->set_reserve(src->Reserve);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_credit(src->Credit);
    dest->set_mortgage(src->Mortgage);
    dest->set_exchangemargin(src->ExchangeMargin);
    dest->set_deliverymargin(src->DeliveryMargin);
    dest->set_exchangedeliverymargin(src->ExchangeDeliveryMargin);
    dest->set_reservebalance(src->ReserveBalance);
    dest->set_currencyid(src->CurrencyID);
    dest->set_prefundmortgagein(src->PreFundMortgageIn);
    dest->set_prefundmortgageout(src->PreFundMortgageOut);
    dest->set_fundmortgagein(src->FundMortgageIn);
    dest->set_fundmortgageout(src->FundMortgageOut);
    dest->set_fundmortgageavailable(src->FundMortgageAvailable);
    dest->set_mortgageablefund(src->MortgageableFund);
    dest->set_specproductmargin(src->SpecProductMargin);
    dest->set_specproductfrozenmargin(src->SpecProductFrozenMargin);
    dest->set_specproductcommission(src->SpecProductCommission);
    dest->set_specproductfrozencommission(src->SpecProductFrozenCommission);
    dest->set_specproductpositionprofit(src->SpecProductPositionProfit);
    dest->set_specproductcloseprofit(src->SpecProductCloseProfit);
    dest->set_specproductpositionprofitbyalg(src->SpecProductPositionProfitByAlg);
    dest->set_specproductexchangemargin(src->SpecProductExchangeMargin);
    dest->set_biztype(src->BizType);
    dest->set_frozenswap(src->FrozenSwap);
    dest->set_remainswap(src->RemainSwap);
}

void copy(ctp::CThostFtdcInvestorPositionField *dest, CThostFtdcInvestorPositionField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_posidirection(src->PosiDirection);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_positiondate(src->PositionDate);
    dest->set_ydposition(src->YdPosition);
    dest->set_position(src->Position);
    dest->set_longfrozen(src->LongFrozen);
    dest->set_shortfrozen(src->ShortFrozen);
    dest->set_longfrozenamount(src->LongFrozenAmount);
    dest->set_shortfrozenamount(src->ShortFrozenAmount);
    dest->set_openvolume(src->OpenVolume);
    dest->set_closevolume(src->CloseVolume);
    dest->set_openamount(src->OpenAmount);
    dest->set_closeamount(src->CloseAmount);
    dest->set_positioncost(src->PositionCost);
    dest->set_premargin(src->PreMargin);
    dest->set_usemargin(src->UseMargin);
    dest->set_frozenmargin(src->FrozenMargin);
    dest->set_frozencash(src->FrozenCash);
    dest->set_frozencommission(src->FrozenCommission);
    dest->set_cashin(src->CashIn);
    dest->set_commission(src->Commission);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_positionprofit(src->PositionProfit);
    dest->set_presettlementprice(src->PreSettlementPrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_opencost(src->OpenCost);
    dest->set_exchangemargin(src->ExchangeMargin);
    dest->set_combposition(src->CombPosition);
    dest->set_comblongfrozen(src->CombLongFrozen);
    dest->set_combshortfrozen(src->CombShortFrozen);
    dest->set_closeprofitbydate(src->CloseProfitByDate);
    dest->set_closeprofitbytrade(src->CloseProfitByTrade);
    dest->set_todayposition(src->TodayPosition);
    dest->set_marginratebymoney(src->MarginRateByMoney);
    dest->set_marginratebyvolume(src->MarginRateByVolume);
    dest->set_strikefrozen(src->StrikeFrozen);
    dest->set_strikefrozenamount(src->StrikeFrozenAmount);
    dest->set_abandonfrozen(src->AbandonFrozen);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ydstrikefrozen(src->YdStrikeFrozen);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_positioncostoffset(src->PositionCostOffset);
}

void copy(ctp::CThostFtdcInstrumentMarginRateField *dest, CThostFtdcInstrumentMarginRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
    dest->set_isrelative(src->IsRelative);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcInstrumentCommissionRateField *dest, CThostFtdcInstrumentCommissionRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_openratiobymoney(src->OpenRatioByMoney);
    dest->set_openratiobyvolume(src->OpenRatioByVolume);
    dest->set_closeratiobymoney(src->CloseRatioByMoney);
    dest->set_closeratiobyvolume(src->CloseRatioByVolume);
    dest->set_closetodayratiobymoney(src->CloseTodayRatioByMoney);
    dest->set_closetodayratiobyvolume(src->CloseTodayRatioByVolume);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_biztype(src->BizType);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcDepthMarketDataField *dest, CThostFtdcDepthMarketDataField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_lastprice(src->LastPrice);
    dest->set_presettlementprice(src->PreSettlementPrice);
    dest->set_precloseprice(src->PreClosePrice);
    dest->set_preopeninterest(src->PreOpenInterest);
    dest->set_openprice(src->OpenPrice);
    dest->set_highestprice(src->HighestPrice);
    dest->set_lowestprice(src->LowestPrice);
    dest->set_volume(src->Volume);
    dest->set_turnover(src->Turnover);
    dest->set_openinterest(src->OpenInterest);
    dest->set_closeprice(src->ClosePrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_upperlimitprice(src->UpperLimitPrice);
    dest->set_lowerlimitprice(src->LowerLimitPrice);
    dest->set_predelta(src->PreDelta);
    dest->set_currdelta(src->CurrDelta);
    dest->set_updatetime(src->UpdateTime);
    dest->set_updatemillisec(src->UpdateMillisec);
    dest->set_bidprice1(src->BidPrice1);
    dest->set_bidvolume1(src->BidVolume1);
    dest->set_askprice1(src->AskPrice1);
    dest->set_askvolume1(src->AskVolume1);
    dest->set_bidprice2(src->BidPrice2);
    dest->set_bidvolume2(src->BidVolume2);
    dest->set_askprice2(src->AskPrice2);
    dest->set_askvolume2(src->AskVolume2);
    dest->set_bidprice3(src->BidPrice3);
    dest->set_bidvolume3(src->BidVolume3);
    dest->set_askprice3(src->AskPrice3);
    dest->set_askvolume3(src->AskVolume3);
    dest->set_bidprice4(src->BidPrice4);
    dest->set_bidvolume4(src->BidVolume4);
    dest->set_askprice4(src->AskPrice4);
    dest->set_askvolume4(src->AskVolume4);
    dest->set_bidprice5(src->BidPrice5);
    dest->set_bidvolume5(src->BidVolume5);
    dest->set_askprice5(src->AskPrice5);
    dest->set_askvolume5(src->AskVolume5);
    dest->set_averageprice(src->AveragePrice);
    dest->set_actionday(src->ActionDay);
}

void copy(ctp::CThostFtdcInstrumentTradingRightField *dest, CThostFtdcInstrumentTradingRightField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_tradingright(src->TradingRight);
}

void copy(ctp::CThostFtdcBrokerUserField *dest, CThostFtdcBrokerUserField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_username(src->UserName);
    dest->set_usertype(src->UserType);
    dest->set_isactive(src->IsActive);
    dest->set_isusingotp(src->IsUsingOTP);
    dest->set_isauthforce(src->IsAuthForce);
}

void copy(ctp::CThostFtdcBrokerUserPasswordField *dest, CThostFtdcBrokerUserPasswordField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_password(src->Password);
    dest->set_lastupdatetime(src->LastUpdateTime);
    dest->set_lastlogintime(src->LastLoginTime);
    dest->set_expiredate(src->ExpireDate);
    dest->set_weakexpiredate(src->WeakExpireDate);
}

void copy(ctp::CThostFtdcBrokerUserFunctionField *dest, CThostFtdcBrokerUserFunctionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_brokerfunctioncode(src->BrokerFunctionCode);
}

void copy(ctp::CThostFtdcTraderOfferField *dest, CThostFtdcTraderOfferField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
    dest->set_participantid(src->ParticipantID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_traderconnectstatus(src->TraderConnectStatus);
    dest->set_connectrequestdate(src->ConnectRequestDate);
    dest->set_connectrequesttime(src->ConnectRequestTime);
    dest->set_lastreportdate(src->LastReportDate);
    dest->set_lastreporttime(src->LastReportTime);
    dest->set_connectdate(src->ConnectDate);
    dest->set_connecttime(src->ConnectTime);
    dest->set_startdate(src->StartDate);
    dest->set_starttime(src->StartTime);
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_maxtradeid(src->MaxTradeID);
    dest->set_maxordermessagereference(src->MaxOrderMessageReference);
}

void copy(ctp::CThostFtdcSettlementInfoField *dest, CThostFtdcSettlementInfoField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_content(src->Content);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcInstrumentMarginRateAdjustField *dest, CThostFtdcInstrumentMarginRateAdjustField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
    dest->set_isrelative(src->IsRelative);
}

void copy(ctp::CThostFtdcExchangeMarginRateField *dest, CThostFtdcExchangeMarginRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcExchangeMarginRateAdjustField *dest, CThostFtdcExchangeMarginRateAdjustField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
    dest->set_exchlongmarginratiobymoney(src->ExchLongMarginRatioByMoney);
    dest->set_exchlongmarginratiobyvolume(src->ExchLongMarginRatioByVolume);
    dest->set_exchshortmarginratiobymoney(src->ExchShortMarginRatioByMoney);
    dest->set_exchshortmarginratiobyvolume(src->ExchShortMarginRatioByVolume);
    dest->set_nolongmarginratiobymoney(src->NoLongMarginRatioByMoney);
    dest->set_nolongmarginratiobyvolume(src->NoLongMarginRatioByVolume);
    dest->set_noshortmarginratiobymoney(src->NoShortMarginRatioByMoney);
    dest->set_noshortmarginratiobyvolume(src->NoShortMarginRatioByVolume);
}

void copy(ctp::CThostFtdcExchangeRateField *dest, CThostFtdcExchangeRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_fromcurrencyid(src->FromCurrencyID);
    dest->set_fromcurrencyunit(src->FromCurrencyUnit);
    dest->set_tocurrencyid(src->ToCurrencyID);
    dest->set_exchangerate(src->ExchangeRate);
}

void copy(ctp::CThostFtdcSettlementRefField *dest, CThostFtdcSettlementRefField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
}

void copy(ctp::CThostFtdcCurrentTimeField *dest, CThostFtdcCurrentTimeField *src)
{
    dest->set_currdate(src->CurrDate);
    dest->set_currtime(src->CurrTime);
    dest->set_currmillisec(src->CurrMillisec);
    dest->set_actionday(src->ActionDay);
}

void copy(ctp::CThostFtdcCommPhaseField *dest, CThostFtdcCommPhaseField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_commphaseno(src->CommPhaseNo);
    dest->set_systemid(src->SystemID);
}

void copy(ctp::CThostFtdcLoginInfoField *dest, CThostFtdcLoginInfoField *src)
{
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_logindate(src->LoginDate);
    dest->set_logintime(src->LoginTime);
    dest->set_ipaddress(src->IPAddress);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_systemname(src->SystemName);
    dest->set_passworddeprecated(src->PasswordDeprecated);
    dest->set_maxorderref(src->MaxOrderRef);
    dest->set_shfetime(src->SHFETime);
    dest->set_dcetime(src->DCETime);
    dest->set_czcetime(src->CZCETime);
    dest->set_ffextime(src->FFEXTime);
    dest->set_macaddress(src->MacAddress);
    dest->set_onetimepassword(src->OneTimePassword);
    dest->set_inetime(src->INETime);
    dest->set_isqrycontrol(src->IsQryControl);
    dest->set_loginremark(src->LoginRemark);
    dest->set_password(src->Password);
}

void copy(ctp::CThostFtdcLogoutAllField *dest, CThostFtdcLogoutAllField *src)
{
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_systemname(src->SystemName);
}

void copy(ctp::CThostFtdcFrontStatusField *dest, CThostFtdcFrontStatusField *src)
{
    dest->set_frontid(src->FrontID);
    dest->set_lastreportdate(src->LastReportDate);
    dest->set_lastreporttime(src->LastReportTime);
    dest->set_isactive(src->IsActive);
}

void copy(ctp::CThostFtdcUserPasswordUpdateField *dest, CThostFtdcUserPasswordUpdateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_oldpassword(src->OldPassword);
    dest->set_newpassword(src->NewPassword);
}

void copy(ctp::CThostFtdcInputOrderField *dest, CThostFtdcInputOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_userforceclose(src->UserForceClose);
    dest->set_isswaporder(src->IsSwapOrder);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcOrderField *dest, CThostFtdcOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_ordersource(src->OrderSource);
    dest->set_orderstatus(src->OrderStatus);
    dest->set_ordertype(src->OrderType);
    dest->set_volumetraded(src->VolumeTraded);
    dest->set_volumetotal(src->VolumeTotal);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_activetime(src->ActiveTime);
    dest->set_suspendtime(src->SuspendTime);
    dest->set_updatetime(src->UpdateTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_activetraderid(src->ActiveTraderID);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_userforceclose(src->UserForceClose);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokerorderseq(src->BrokerOrderSeq);
    dest->set_relativeordersysid(src->RelativeOrderSysID);
    dest->set_zcetotaltradedvolume(src->ZCETotalTradedVolume);
    dest->set_isswaporder(src->IsSwapOrder);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExchangeOrderField *dest, CThostFtdcExchangeOrderField *src)
{
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_ordersource(src->OrderSource);
    dest->set_orderstatus(src->OrderStatus);
    dest->set_ordertype(src->OrderType);
    dest->set_volumetraded(src->VolumeTraded);
    dest->set_volumetotal(src->VolumeTotal);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_activetime(src->ActiveTime);
    dest->set_suspendtime(src->SuspendTime);
    dest->set_updatetime(src->UpdateTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_activetraderid(src->ActiveTraderID);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExchangeOrderInsertErrorField *dest, CThostFtdcExchangeOrderInsertErrorField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcInputOrderActionField *dest, CThostFtdcInputOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_orderref(src->OrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumechange(src->VolumeChange);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcOrderActionField *dest, CThostFtdcOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_orderref(src->OrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumechange(src->VolumeChange);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExchangeOrderActionField *dest, CThostFtdcExchangeOrderActionField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumechange(src->VolumeChange);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExchangeOrderActionErrorField *dest, CThostFtdcExchangeOrderActionErrorField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcExchangeTradeField *dest, CThostFtdcExchangeTradeField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_tradeid(src->TradeID);
    dest->set_direction(src->Direction);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_tradingrole(src->TradingRole);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_price(src->Price);
    dest->set_volume(src->Volume);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_tradetype(src->TradeType);
    dest->set_pricesource(src->PriceSource);
    dest->set_traderid(src->TraderID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_tradesource(src->TradeSource);
}

void copy(ctp::CThostFtdcTradeField *dest, CThostFtdcTradeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_tradeid(src->TradeID);
    dest->set_direction(src->Direction);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_tradingrole(src->TradingRole);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_price(src->Price);
    dest->set_volume(src->Volume);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_tradetype(src->TradeType);
    dest->set_pricesource(src->PriceSource);
    dest->set_traderid(src->TraderID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_brokerorderseq(src->BrokerOrderSeq);
    dest->set_tradesource(src->TradeSource);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcUserSessionField *dest, CThostFtdcUserSessionField *src)
{
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_logindate(src->LoginDate);
    dest->set_logintime(src->LoginTime);
    dest->set_ipaddress(src->IPAddress);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_macaddress(src->MacAddress);
    dest->set_loginremark(src->LoginRemark);
}

void copy(ctp::CThostFtdcQueryMaxOrderVolumeField *dest, CThostFtdcQueryMaxOrderVolumeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_direction(src->Direction);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_maxvolume(src->MaxVolume);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcSettlementInfoConfirmField *dest, CThostFtdcSettlementInfoConfirmField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_confirmdate(src->ConfirmDate);
    dest->set_confirmtime(src->ConfirmTime);
    dest->set_settlementid(src->SettlementID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcSyncDepositField *dest, CThostFtdcSyncDepositField *src)
{
    dest->set_depositseqno(src->DepositSeqNo);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_deposit(src->Deposit);
    dest->set_isforce(src->IsForce);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcSyncFundMortgageField *dest, CThostFtdcSyncFundMortgageField *src)
{
    dest->set_mortgageseqno(src->MortgageSeqNo);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_fromcurrencyid(src->FromCurrencyID);
    dest->set_mortgageamount(src->MortgageAmount);
    dest->set_tocurrencyid(src->ToCurrencyID);
}

void copy(ctp::CThostFtdcBrokerSyncField *dest, CThostFtdcBrokerSyncField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcSyncingInvestorField *dest, CThostFtdcSyncingInvestorField *src)
{
    dest->set_investorid(src->InvestorID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorgroupid(src->InvestorGroupID);
    dest->set_investorname(src->InvestorName);
    dest->set_identifiedcardtype(src->IdentifiedCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_isactive(src->IsActive);
    dest->set_telephone(src->Telephone);
    dest->set_address(src->Address);
    dest->set_opendate(src->OpenDate);
    dest->set_mobile(src->Mobile);
    dest->set_commmodelid(src->CommModelID);
    dest->set_marginmodelid(src->MarginModelID);
}

void copy(ctp::CThostFtdcSyncingTradingCodeField *dest, CThostFtdcSyncingTradingCodeField *src)
{
    dest->set_investorid(src->InvestorID);
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_clientid(src->ClientID);
    dest->set_isactive(src->IsActive);
    dest->set_clientidtype(src->ClientIDType);
}

void copy(ctp::CThostFtdcSyncingInvestorGroupField *dest, CThostFtdcSyncingInvestorGroupField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorgroupid(src->InvestorGroupID);
    dest->set_investorgroupname(src->InvestorGroupName);
}

void copy(ctp::CThostFtdcSyncingTradingAccountField *dest, CThostFtdcSyncingTradingAccountField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_premortgage(src->PreMortgage);
    dest->set_precredit(src->PreCredit);
    dest->set_predeposit(src->PreDeposit);
    dest->set_prebalance(src->PreBalance);
    dest->set_premargin(src->PreMargin);
    dest->set_interestbase(src->InterestBase);
    dest->set_interest(src->Interest);
    dest->set_deposit(src->Deposit);
    dest->set_withdraw(src->Withdraw);
    dest->set_frozenmargin(src->FrozenMargin);
    dest->set_frozencash(src->FrozenCash);
    dest->set_frozencommission(src->FrozenCommission);
    dest->set_currmargin(src->CurrMargin);
    dest->set_cashin(src->CashIn);
    dest->set_commission(src->Commission);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_positionprofit(src->PositionProfit);
    dest->set_balance(src->Balance);
    dest->set_available(src->Available);
    dest->set_withdrawquota(src->WithdrawQuota);
    dest->set_reserve(src->Reserve);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_credit(src->Credit);
    dest->set_mortgage(src->Mortgage);
    dest->set_exchangemargin(src->ExchangeMargin);
    dest->set_deliverymargin(src->DeliveryMargin);
    dest->set_exchangedeliverymargin(src->ExchangeDeliveryMargin);
    dest->set_reservebalance(src->ReserveBalance);
    dest->set_currencyid(src->CurrencyID);
    dest->set_prefundmortgagein(src->PreFundMortgageIn);
    dest->set_prefundmortgageout(src->PreFundMortgageOut);
    dest->set_fundmortgagein(src->FundMortgageIn);
    dest->set_fundmortgageout(src->FundMortgageOut);
    dest->set_fundmortgageavailable(src->FundMortgageAvailable);
    dest->set_mortgageablefund(src->MortgageableFund);
    dest->set_specproductmargin(src->SpecProductMargin);
    dest->set_specproductfrozenmargin(src->SpecProductFrozenMargin);
    dest->set_specproductcommission(src->SpecProductCommission);
    dest->set_specproductfrozencommission(src->SpecProductFrozenCommission);
    dest->set_specproductpositionprofit(src->SpecProductPositionProfit);
    dest->set_specproductcloseprofit(src->SpecProductCloseProfit);
    dest->set_specproductpositionprofitbyalg(src->SpecProductPositionProfitByAlg);
    dest->set_specproductexchangemargin(src->SpecProductExchangeMargin);
    dest->set_frozenswap(src->FrozenSwap);
    dest->set_remainswap(src->RemainSwap);
}

void copy(ctp::CThostFtdcSyncingInvestorPositionField *dest, CThostFtdcSyncingInvestorPositionField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_posidirection(src->PosiDirection);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_positiondate(src->PositionDate);
    dest->set_ydposition(src->YdPosition);
    dest->set_position(src->Position);
    dest->set_longfrozen(src->LongFrozen);
    dest->set_shortfrozen(src->ShortFrozen);
    dest->set_longfrozenamount(src->LongFrozenAmount);
    dest->set_shortfrozenamount(src->ShortFrozenAmount);
    dest->set_openvolume(src->OpenVolume);
    dest->set_closevolume(src->CloseVolume);
    dest->set_openamount(src->OpenAmount);
    dest->set_closeamount(src->CloseAmount);
    dest->set_positioncost(src->PositionCost);
    dest->set_premargin(src->PreMargin);
    dest->set_usemargin(src->UseMargin);
    dest->set_frozenmargin(src->FrozenMargin);
    dest->set_frozencash(src->FrozenCash);
    dest->set_frozencommission(src->FrozenCommission);
    dest->set_cashin(src->CashIn);
    dest->set_commission(src->Commission);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_positionprofit(src->PositionProfit);
    dest->set_presettlementprice(src->PreSettlementPrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_opencost(src->OpenCost);
    dest->set_exchangemargin(src->ExchangeMargin);
    dest->set_combposition(src->CombPosition);
    dest->set_comblongfrozen(src->CombLongFrozen);
    dest->set_combshortfrozen(src->CombShortFrozen);
    dest->set_closeprofitbydate(src->CloseProfitByDate);
    dest->set_closeprofitbytrade(src->CloseProfitByTrade);
    dest->set_todayposition(src->TodayPosition);
    dest->set_marginratebymoney(src->MarginRateByMoney);
    dest->set_marginratebyvolume(src->MarginRateByVolume);
    dest->set_strikefrozen(src->StrikeFrozen);
    dest->set_strikefrozenamount(src->StrikeFrozenAmount);
    dest->set_abandonfrozen(src->AbandonFrozen);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ydstrikefrozen(src->YdStrikeFrozen);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_positioncostoffset(src->PositionCostOffset);
}

void copy(ctp::CThostFtdcSyncingInstrumentMarginRateField *dest, CThostFtdcSyncingInstrumentMarginRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
    dest->set_isrelative(src->IsRelative);
}

void copy(ctp::CThostFtdcSyncingInstrumentCommissionRateField *dest, CThostFtdcSyncingInstrumentCommissionRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_openratiobymoney(src->OpenRatioByMoney);
    dest->set_openratiobyvolume(src->OpenRatioByVolume);
    dest->set_closeratiobymoney(src->CloseRatioByMoney);
    dest->set_closeratiobyvolume(src->CloseRatioByVolume);
    dest->set_closetodayratiobymoney(src->CloseTodayRatioByMoney);
    dest->set_closetodayratiobyvolume(src->CloseTodayRatioByVolume);
}

void copy(ctp::CThostFtdcSyncingInstrumentTradingRightField *dest, CThostFtdcSyncingInstrumentTradingRightField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_tradingright(src->TradingRight);
}

void copy(ctp::CThostFtdcQryOrderField *dest, CThostFtdcQryOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryTradeField *dest, CThostFtdcQryTradeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_tradeid(src->TradeID);
    dest->set_tradetimestart(src->TradeTimeStart);
    dest->set_tradetimeend(src->TradeTimeEnd);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInvestorPositionField *dest, CThostFtdcQryInvestorPositionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryTradingAccountField *dest, CThostFtdcQryTradingAccountField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_biztype(src->BizType);
    dest->set_accountid(src->AccountID);
}

void copy(ctp::CThostFtdcQryInvestorField *dest, CThostFtdcQryInvestorField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcQryTradingCodeField *dest, CThostFtdcQryTradingCodeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_clientid(src->ClientID);
    dest->set_clientidtype(src->ClientIDType);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInvestorGroupField *dest, CThostFtdcQryInvestorGroupField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcQryInstrumentMarginRateField *dest, CThostFtdcQryInstrumentMarginRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInstrumentCommissionRateField *dest, CThostFtdcQryInstrumentCommissionRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInstrumentTradingRightField *dest, CThostFtdcQryInstrumentTradingRightField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcQryBrokerField *dest, CThostFtdcQryBrokerField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcQryTraderField *dest, CThostFtdcQryTraderField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQrySuperUserFunctionField *dest, CThostFtdcQrySuperUserFunctionField *src)
{
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcQryUserSessionField *dest, CThostFtdcQryUserSessionField *src)
{
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcQryPartBrokerField *dest, CThostFtdcQryPartBrokerField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_brokerid(src->BrokerID);
    dest->set_participantid(src->ParticipantID);
}

void copy(ctp::CThostFtdcQryFrontStatusField *dest, CThostFtdcQryFrontStatusField *src)
{
    dest->set_frontid(src->FrontID);
}

void copy(ctp::CThostFtdcQryExchangeOrderField *dest, CThostFtdcQryExchangeOrderField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQryOrderActionField *dest, CThostFtdcQryOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryExchangeOrderActionField *dest, CThostFtdcQryExchangeOrderActionField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQrySuperUserField *dest, CThostFtdcQrySuperUserField *src)
{
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcQryExchangeField *dest, CThostFtdcQryExchangeField *src)
{
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryProductField *dest, CThostFtdcQryProductField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_productclass(src->ProductClass);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryInstrumentField *dest, CThostFtdcQryInstrumentField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_productid(src->ProductID);
}

void copy(ctp::CThostFtdcQryDepthMarketDataField *dest, CThostFtdcQryDepthMarketDataField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryBrokerUserField *dest, CThostFtdcQryBrokerUserField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcQryBrokerUserFunctionField *dest, CThostFtdcQryBrokerUserFunctionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcQryTraderOfferField *dest, CThostFtdcQryTraderOfferField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQrySyncDepositField *dest, CThostFtdcQrySyncDepositField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_depositseqno(src->DepositSeqNo);
}

void copy(ctp::CThostFtdcQrySettlementInfoField *dest, CThostFtdcQrySettlementInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_tradingday(src->TradingDay);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcQryExchangeMarginRateField *dest, CThostFtdcQryExchangeMarginRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryExchangeMarginRateAdjustField *dest, CThostFtdcQryExchangeMarginRateAdjustField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
}

void copy(ctp::CThostFtdcQryExchangeRateField *dest, CThostFtdcQryExchangeRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_fromcurrencyid(src->FromCurrencyID);
    dest->set_tocurrencyid(src->ToCurrencyID);
}

void copy(ctp::CThostFtdcQrySyncFundMortgageField *dest, CThostFtdcQrySyncFundMortgageField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_mortgageseqno(src->MortgageSeqNo);
}

void copy(ctp::CThostFtdcQryHisOrderField *dest, CThostFtdcQryHisOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
}

void copy(ctp::CThostFtdcOptionInstrMiniMarginField *dest, CThostFtdcOptionInstrMiniMarginField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_minmargin(src->MinMargin);
    dest->set_valuemethod(src->ValueMethod);
    dest->set_isrelative(src->IsRelative);
}

void copy(ctp::CThostFtdcOptionInstrMarginAdjustField *dest, CThostFtdcOptionInstrMarginAdjustField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_sshortmarginratiobymoney(src->SShortMarginRatioByMoney);
    dest->set_sshortmarginratiobyvolume(src->SShortMarginRatioByVolume);
    dest->set_hshortmarginratiobymoney(src->HShortMarginRatioByMoney);
    dest->set_hshortmarginratiobyvolume(src->HShortMarginRatioByVolume);
    dest->set_ashortmarginratiobymoney(src->AShortMarginRatioByMoney);
    dest->set_ashortmarginratiobyvolume(src->AShortMarginRatioByVolume);
    dest->set_isrelative(src->IsRelative);
    dest->set_mshortmarginratiobymoney(src->MShortMarginRatioByMoney);
    dest->set_mshortmarginratiobyvolume(src->MShortMarginRatioByVolume);
}

void copy(ctp::CThostFtdcOptionInstrCommRateField *dest, CThostFtdcOptionInstrCommRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_openratiobymoney(src->OpenRatioByMoney);
    dest->set_openratiobyvolume(src->OpenRatioByVolume);
    dest->set_closeratiobymoney(src->CloseRatioByMoney);
    dest->set_closeratiobyvolume(src->CloseRatioByVolume);
    dest->set_closetodayratiobymoney(src->CloseTodayRatioByMoney);
    dest->set_closetodayratiobyvolume(src->CloseTodayRatioByVolume);
    dest->set_strikeratiobymoney(src->StrikeRatioByMoney);
    dest->set_strikeratiobyvolume(src->StrikeRatioByVolume);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcOptionInstrTradeCostField *dest, CThostFtdcOptionInstrTradeCostField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_fixedmargin(src->FixedMargin);
    dest->set_minimargin(src->MiniMargin);
    dest->set_royalty(src->Royalty);
    dest->set_exchfixedmargin(src->ExchFixedMargin);
    dest->set_exchminimargin(src->ExchMiniMargin);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryOptionInstrTradeCostField *dest, CThostFtdcQryOptionInstrTradeCostField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_inputprice(src->InputPrice);
    dest->set_underlyingprice(src->UnderlyingPrice);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryOptionInstrCommRateField *dest, CThostFtdcQryOptionInstrCommRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcIndexPriceField *dest, CThostFtdcIndexPriceField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_closeprice(src->ClosePrice);
}

void copy(ctp::CThostFtdcInputExecOrderField *dest, CThostFtdcInputExecOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_userid(src->UserID);
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actiontype(src->ActionType);
    dest->set_posidirection(src->PosiDirection);
    dest->set_reservepositionflag(src->ReservePositionFlag);
    dest->set_closeflag(src->CloseFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcInputExecOrderActionField *dest, CThostFtdcInputExecOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_execorderactionref(src->ExecOrderActionRef);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExecOrderField *dest, CThostFtdcExecOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_userid(src->UserID);
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actiontype(src->ActionType);
    dest->set_posidirection(src->PosiDirection);
    dest->set_reservepositionflag(src->ReservePositionFlag);
    dest->set_closeflag(src->CloseFlag);
    dest->set_execorderlocalid(src->ExecOrderLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_execresult(src->ExecResult);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokerexecorderseq(src->BrokerExecOrderSeq);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExecOrderActionField *dest, CThostFtdcExecOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_execorderactionref(src->ExecOrderActionRef);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_execorderlocalid(src->ExecOrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_actiontype(src->ActionType);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryExecOrderField *dest, CThostFtdcQryExecOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
}

void copy(ctp::CThostFtdcExchangeExecOrderField *dest, CThostFtdcExchangeExecOrderField *src)
{
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actiontype(src->ActionType);
    dest->set_posidirection(src->PosiDirection);
    dest->set_reservepositionflag(src->ReservePositionFlag);
    dest->set_closeflag(src->CloseFlag);
    dest->set_execorderlocalid(src->ExecOrderLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_execresult(src->ExecResult);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryExchangeExecOrderField *dest, CThostFtdcQryExchangeExecOrderField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQryExecOrderActionField *dest, CThostFtdcQryExecOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcExchangeExecOrderActionField *dest, CThostFtdcExchangeExecOrderActionField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_execorderlocalid(src->ExecOrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_actiontype(src->ActionType);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_volume(src->Volume);
}

void copy(ctp::CThostFtdcQryExchangeExecOrderActionField *dest, CThostFtdcQryExchangeExecOrderActionField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcErrExecOrderField *dest, CThostFtdcErrExecOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_userid(src->UserID);
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actiontype(src->ActionType);
    dest->set_posidirection(src->PosiDirection);
    dest->set_reservepositionflag(src->ReservePositionFlag);
    dest->set_closeflag(src->CloseFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcQryErrExecOrderField *dest, CThostFtdcQryErrExecOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcErrExecOrderActionField *dest, CThostFtdcErrExecOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_execorderactionref(src->ExecOrderActionRef);
    dest->set_execorderref(src->ExecOrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_execordersysid(src->ExecOrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcQryErrExecOrderActionField *dest, CThostFtdcQryErrExecOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcOptionInstrTradingRightField *dest, CThostFtdcOptionInstrTradingRightField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_direction(src->Direction);
    dest->set_tradingright(src->TradingRight);
}

void copy(ctp::CThostFtdcQryOptionInstrTradingRightField *dest, CThostFtdcQryOptionInstrTradingRightField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_direction(src->Direction);
}

void copy(ctp::CThostFtdcInputForQuoteField *dest, CThostFtdcInputForQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_forquoteref(src->ForQuoteRef);
    dest->set_userid(src->UserID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcForQuoteField *dest, CThostFtdcForQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_forquoteref(src->ForQuoteRef);
    dest->set_userid(src->UserID);
    dest->set_forquotelocalid(src->ForQuoteLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_forquotestatus(src->ForQuoteStatus);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokerforqutoseq(src->BrokerForQutoSeq);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryForQuoteField *dest, CThostFtdcQryForQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcExchangeForQuoteField *dest, CThostFtdcExchangeForQuoteField *src)
{
    dest->set_forquotelocalid(src->ForQuoteLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_forquotestatus(src->ForQuoteStatus);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryExchangeForQuoteField *dest, CThostFtdcQryExchangeForQuoteField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcInputQuoteField *dest, CThostFtdcInputQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_quoteref(src->QuoteRef);
    dest->set_userid(src->UserID);
    dest->set_askprice(src->AskPrice);
    dest->set_bidprice(src->BidPrice);
    dest->set_askvolume(src->AskVolume);
    dest->set_bidvolume(src->BidVolume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_askoffsetflag(src->AskOffsetFlag);
    dest->set_bidoffsetflag(src->BidOffsetFlag);
    dest->set_askhedgeflag(src->AskHedgeFlag);
    dest->set_bidhedgeflag(src->BidHedgeFlag);
    dest->set_askorderref(src->AskOrderRef);
    dest->set_bidorderref(src->BidOrderRef);
    dest->set_forquotesysid(src->ForQuoteSysID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcInputQuoteActionField *dest, CThostFtdcInputQuoteActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_quoteactionref(src->QuoteActionRef);
    dest->set_quoteref(src->QuoteRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQuoteField *dest, CThostFtdcQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_quoteref(src->QuoteRef);
    dest->set_userid(src->UserID);
    dest->set_askprice(src->AskPrice);
    dest->set_bidprice(src->BidPrice);
    dest->set_askvolume(src->AskVolume);
    dest->set_bidvolume(src->BidVolume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_askoffsetflag(src->AskOffsetFlag);
    dest->set_bidoffsetflag(src->BidOffsetFlag);
    dest->set_askhedgeflag(src->AskHedgeFlag);
    dest->set_bidhedgeflag(src->BidHedgeFlag);
    dest->set_quotelocalid(src->QuoteLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_quotestatus(src->QuoteStatus);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_askordersysid(src->AskOrderSysID);
    dest->set_bidordersysid(src->BidOrderSysID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokerquoteseq(src->BrokerQuoteSeq);
    dest->set_askorderref(src->AskOrderRef);
    dest->set_bidorderref(src->BidOrderRef);
    dest->set_forquotesysid(src->ForQuoteSysID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQuoteActionField *dest, CThostFtdcQuoteActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_quoteactionref(src->QuoteActionRef);
    dest->set_quoteref(src->QuoteRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_quotelocalid(src->QuoteLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryQuoteField *dest, CThostFtdcQryQuoteField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcExchangeQuoteField *dest, CThostFtdcExchangeQuoteField *src)
{
    dest->set_askprice(src->AskPrice);
    dest->set_bidprice(src->BidPrice);
    dest->set_askvolume(src->AskVolume);
    dest->set_bidvolume(src->BidVolume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_askoffsetflag(src->AskOffsetFlag);
    dest->set_bidoffsetflag(src->BidOffsetFlag);
    dest->set_askhedgeflag(src->AskHedgeFlag);
    dest->set_bidhedgeflag(src->BidHedgeFlag);
    dest->set_quotelocalid(src->QuoteLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_quotestatus(src->QuoteStatus);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_askordersysid(src->AskOrderSysID);
    dest->set_bidordersysid(src->BidOrderSysID);
    dest->set_forquotesysid(src->ForQuoteSysID);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryExchangeQuoteField *dest, CThostFtdcQryExchangeQuoteField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQryQuoteActionField *dest, CThostFtdcQryQuoteActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcExchangeQuoteActionField *dest, CThostFtdcExchangeQuoteActionField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_quotesysid(src->QuoteSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_quotelocalid(src->QuoteLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryExchangeQuoteActionField *dest, CThostFtdcQryExchangeQuoteActionField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcOptionInstrDeltaField *dest, CThostFtdcOptionInstrDeltaField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_delta(src->Delta);
}

void copy(ctp::CThostFtdcForQuoteRspField *dest, CThostFtdcForQuoteRspField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_forquotesysid(src->ForQuoteSysID);
    dest->set_forquotetime(src->ForQuoteTime);
    dest->set_actionday(src->ActionDay);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcStrikeOffsetField *dest, CThostFtdcStrikeOffsetField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_offset(src->Offset);
    dest->set_offsettype(src->OffsetType);
}

void copy(ctp::CThostFtdcQryStrikeOffsetField *dest, CThostFtdcQryStrikeOffsetField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcInputBatchOrderActionField *dest, CThostFtdcInputBatchOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_userid(src->UserID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcBatchOrderActionField *dest, CThostFtdcBatchOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcExchangeBatchOrderActionField *dest, CThostFtdcExchangeBatchOrderActionField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryBatchOrderActionField *dest, CThostFtdcQryBatchOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcCombInstrumentGuardField *dest, CThostFtdcCombInstrumentGuardField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_guarantratio(src->GuarantRatio);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryCombInstrumentGuardField *dest, CThostFtdcQryCombInstrumentGuardField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcInputCombActionField *dest, CThostFtdcInputCombActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_combactionref(src->CombActionRef);
    dest->set_userid(src->UserID);
    dest->set_direction(src->Direction);
    dest->set_volume(src->Volume);
    dest->set_combdirection(src->CombDirection);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcCombActionField *dest, CThostFtdcCombActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_combactionref(src->CombActionRef);
    dest->set_userid(src->UserID);
    dest->set_direction(src->Direction);
    dest->set_volume(src->Volume);
    dest->set_combdirection(src->CombDirection);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_actionstatus(src->ActionStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_comtradeid(src->ComTradeID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryCombActionField *dest, CThostFtdcQryCombActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcExchangeCombActionField *dest, CThostFtdcExchangeCombActionField *src)
{
    dest->set_direction(src->Direction);
    dest->set_volume(src->Volume);
    dest->set_combdirection(src->CombDirection);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_actionstatus(src->ActionStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_comtradeid(src->ComTradeID);
    dest->set_branchid(src->BranchID);
}

void copy(ctp::CThostFtdcQryExchangeCombActionField *dest, CThostFtdcQryExchangeCombActionField *src)
{
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcProductExchRateField *dest, CThostFtdcProductExchRateField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_quotecurrencyid(src->QuoteCurrencyID);
    dest->set_exchangerate(src->ExchangeRate);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryProductExchRateField *dest, CThostFtdcQryProductExchRateField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcQryForQuoteParamField *dest, CThostFtdcQryForQuoteParamField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcForQuoteParamField *dest, CThostFtdcForQuoteParamField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_lastprice(src->LastPrice);
    dest->set_priceinterval(src->PriceInterval);
}

void copy(ctp::CThostFtdcMMOptionInstrCommRateField *dest, CThostFtdcMMOptionInstrCommRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_openratiobymoney(src->OpenRatioByMoney);
    dest->set_openratiobyvolume(src->OpenRatioByVolume);
    dest->set_closeratiobymoney(src->CloseRatioByMoney);
    dest->set_closeratiobyvolume(src->CloseRatioByVolume);
    dest->set_closetodayratiobymoney(src->CloseTodayRatioByMoney);
    dest->set_closetodayratiobyvolume(src->CloseTodayRatioByVolume);
    dest->set_strikeratiobymoney(src->StrikeRatioByMoney);
    dest->set_strikeratiobyvolume(src->StrikeRatioByVolume);
}

void copy(ctp::CThostFtdcQryMMOptionInstrCommRateField *dest, CThostFtdcQryMMOptionInstrCommRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcMMInstrumentCommissionRateField *dest, CThostFtdcMMInstrumentCommissionRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_openratiobymoney(src->OpenRatioByMoney);
    dest->set_openratiobyvolume(src->OpenRatioByVolume);
    dest->set_closeratiobymoney(src->CloseRatioByMoney);
    dest->set_closeratiobyvolume(src->CloseRatioByVolume);
    dest->set_closetodayratiobymoney(src->CloseTodayRatioByMoney);
    dest->set_closetodayratiobyvolume(src->CloseTodayRatioByVolume);
}

void copy(ctp::CThostFtdcQryMMInstrumentCommissionRateField *dest, CThostFtdcQryMMInstrumentCommissionRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcInstrumentOrderCommRateField *dest, CThostFtdcInstrumentOrderCommRateField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_ordercommbyvolume(src->OrderCommByVolume);
    dest->set_orderactioncommbyvolume(src->OrderActionCommByVolume);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInstrumentOrderCommRateField *dest, CThostFtdcQryInstrumentOrderCommRateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcTradeParamField *dest, CThostFtdcTradeParamField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_tradeparamid(src->TradeParamID);
    dest->set_tradeparamvalue(src->TradeParamValue);
    dest->set_memo(src->Memo);
}

void copy(ctp::CThostFtdcInstrumentMarginRateULField *dest, CThostFtdcInstrumentMarginRateULField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_longmarginratiobymoney(src->LongMarginRatioByMoney);
    dest->set_longmarginratiobyvolume(src->LongMarginRatioByVolume);
    dest->set_shortmarginratiobymoney(src->ShortMarginRatioByMoney);
    dest->set_shortmarginratiobyvolume(src->ShortMarginRatioByVolume);
}

void copy(ctp::CThostFtdcFutureLimitPosiParamField *dest, CThostFtdcFutureLimitPosiParamField *src)
{
    dest->set_investorrange(src->InvestorRange);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_productid(src->ProductID);
    dest->set_specopenvolume(src->SpecOpenVolume);
    dest->set_arbiopenvolume(src->ArbiOpenVolume);
    dest->set_openvolume(src->OpenVolume);
}

void copy(ctp::CThostFtdcLoginForbiddenIPField *dest, CThostFtdcLoginForbiddenIPField *src)
{
    dest->set_ipaddress(src->IPAddress);
}

void copy(ctp::CThostFtdcIPListField *dest, CThostFtdcIPListField *src)
{
    dest->set_ipaddress(src->IPAddress);
    dest->set_iswhite(src->IsWhite);
}

void copy(ctp::CThostFtdcInputOptionSelfCloseField *dest, CThostFtdcInputOptionSelfCloseField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_optionselfcloseref(src->OptionSelfCloseRef);
    dest->set_userid(src->UserID);
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_optselfcloseflag(src->OptSelfCloseFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcInputOptionSelfCloseActionField *dest, CThostFtdcInputOptionSelfCloseActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_optionselfcloseactionref(src->OptionSelfCloseActionRef);
    dest->set_optionselfcloseref(src->OptionSelfCloseRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcOptionSelfCloseField *dest, CThostFtdcOptionSelfCloseField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_optionselfcloseref(src->OptionSelfCloseRef);
    dest->set_userid(src->UserID);
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_optselfcloseflag(src->OptSelfCloseFlag);
    dest->set_optionselfcloselocalid(src->OptionSelfCloseLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_execresult(src->ExecResult);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokeroptionselfcloseseq(src->BrokerOptionSelfCloseSeq);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcOptionSelfCloseActionField *dest, CThostFtdcOptionSelfCloseActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_optionselfcloseactionref(src->OptionSelfCloseActionRef);
    dest->set_optionselfcloseref(src->OptionSelfCloseRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_optionselfcloselocalid(src->OptionSelfCloseLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryOptionSelfCloseField *dest, CThostFtdcQryOptionSelfCloseField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_inserttimestart(src->InsertTimeStart);
    dest->set_inserttimeend(src->InsertTimeEnd);
}

void copy(ctp::CThostFtdcExchangeOptionSelfCloseField *dest, CThostFtdcExchangeOptionSelfCloseField *src)
{
    dest->set_volume(src->Volume);
    dest->set_requestid(src->RequestID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_optselfcloseflag(src->OptSelfCloseFlag);
    dest->set_optionselfcloselocalid(src->OptionSelfCloseLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_execresult(src->ExecResult);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryOptionSelfCloseActionField *dest, CThostFtdcQryOptionSelfCloseActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcExchangeOptionSelfCloseActionField *dest, CThostFtdcExchangeOptionSelfCloseActionField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_optionselfclosesysid(src->OptionSelfCloseSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_optionselfcloselocalid(src->OptionSelfCloseLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_branchid(src->BranchID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_optselfcloseflag(src->OptSelfCloseFlag);
}

void copy(ctp::CThostFtdcSyncDelaySwapField *dest, CThostFtdcSyncDelaySwapField *src)
{
    dest->set_delayswapseqno(src->DelaySwapSeqNo);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_fromcurrencyid(src->FromCurrencyID);
    dest->set_fromamount(src->FromAmount);
    dest->set_fromfrozenswap(src->FromFrozenSwap);
    dest->set_fromremainswap(src->FromRemainSwap);
    dest->set_tocurrencyid(src->ToCurrencyID);
    dest->set_toamount(src->ToAmount);
}

void copy(ctp::CThostFtdcQrySyncDelaySwapField *dest, CThostFtdcQrySyncDelaySwapField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_delayswapseqno(src->DelaySwapSeqNo);
}

void copy(ctp::CThostFtdcInvestUnitField *dest, CThostFtdcInvestUnitField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_investorunitname(src->InvestorUnitName);
    dest->set_investorgroupid(src->InvestorGroupID);
    dest->set_commmodelid(src->CommModelID);
    dest->set_marginmodelid(src->MarginModelID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcQryInvestUnitField *dest, CThostFtdcQryInvestUnitField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcSecAgentCheckModeField *dest, CThostFtdcSecAgentCheckModeField *src)
{
    dest->set_investorid(src->InvestorID);
    dest->set_brokerid(src->BrokerID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_brokersecagentid(src->BrokerSecAgentID);
    dest->set_checkselfaccount(src->CheckSelfAccount);
}

void copy(ctp::CThostFtdcSecAgentTradeInfoField *dest, CThostFtdcSecAgentTradeInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_brokersecagentid(src->BrokerSecAgentID);
    dest->set_investorid(src->InvestorID);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcMarketDataField *dest, CThostFtdcMarketDataField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_lastprice(src->LastPrice);
    dest->set_presettlementprice(src->PreSettlementPrice);
    dest->set_precloseprice(src->PreClosePrice);
    dest->set_preopeninterest(src->PreOpenInterest);
    dest->set_openprice(src->OpenPrice);
    dest->set_highestprice(src->HighestPrice);
    dest->set_lowestprice(src->LowestPrice);
    dest->set_volume(src->Volume);
    dest->set_turnover(src->Turnover);
    dest->set_openinterest(src->OpenInterest);
    dest->set_closeprice(src->ClosePrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_upperlimitprice(src->UpperLimitPrice);
    dest->set_lowerlimitprice(src->LowerLimitPrice);
    dest->set_predelta(src->PreDelta);
    dest->set_currdelta(src->CurrDelta);
    dest->set_updatetime(src->UpdateTime);
    dest->set_updatemillisec(src->UpdateMillisec);
    dest->set_actionday(src->ActionDay);
}

void copy(ctp::CThostFtdcMarketDataBaseField *dest, CThostFtdcMarketDataBaseField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_presettlementprice(src->PreSettlementPrice);
    dest->set_precloseprice(src->PreClosePrice);
    dest->set_preopeninterest(src->PreOpenInterest);
    dest->set_predelta(src->PreDelta);
}

void copy(ctp::CThostFtdcMarketDataStaticField *dest, CThostFtdcMarketDataStaticField *src)
{
    dest->set_openprice(src->OpenPrice);
    dest->set_highestprice(src->HighestPrice);
    dest->set_lowestprice(src->LowestPrice);
    dest->set_closeprice(src->ClosePrice);
    dest->set_upperlimitprice(src->UpperLimitPrice);
    dest->set_lowerlimitprice(src->LowerLimitPrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_currdelta(src->CurrDelta);
}

void copy(ctp::CThostFtdcMarketDataLastMatchField *dest, CThostFtdcMarketDataLastMatchField *src)
{
    dest->set_lastprice(src->LastPrice);
    dest->set_volume(src->Volume);
    dest->set_turnover(src->Turnover);
    dest->set_openinterest(src->OpenInterest);
}

void copy(ctp::CThostFtdcMarketDataBestPriceField *dest, CThostFtdcMarketDataBestPriceField *src)
{
    dest->set_bidprice1(src->BidPrice1);
    dest->set_bidvolume1(src->BidVolume1);
    dest->set_askprice1(src->AskPrice1);
    dest->set_askvolume1(src->AskVolume1);
}

void copy(ctp::CThostFtdcMarketDataBid23Field *dest, CThostFtdcMarketDataBid23Field *src)
{
    dest->set_bidprice2(src->BidPrice2);
    dest->set_bidvolume2(src->BidVolume2);
    dest->set_bidprice3(src->BidPrice3);
    dest->set_bidvolume3(src->BidVolume3);
}

void copy(ctp::CThostFtdcMarketDataAsk23Field *dest, CThostFtdcMarketDataAsk23Field *src)
{
    dest->set_askprice2(src->AskPrice2);
    dest->set_askvolume2(src->AskVolume2);
    dest->set_askprice3(src->AskPrice3);
    dest->set_askvolume3(src->AskVolume3);
}

void copy(ctp::CThostFtdcMarketDataBid45Field *dest, CThostFtdcMarketDataBid45Field *src)
{
    dest->set_bidprice4(src->BidPrice4);
    dest->set_bidvolume4(src->BidVolume4);
    dest->set_bidprice5(src->BidPrice5);
    dest->set_bidvolume5(src->BidVolume5);
}

void copy(ctp::CThostFtdcMarketDataAsk45Field *dest, CThostFtdcMarketDataAsk45Field *src)
{
    dest->set_askprice4(src->AskPrice4);
    dest->set_askvolume4(src->AskVolume4);
    dest->set_askprice5(src->AskPrice5);
    dest->set_askvolume5(src->AskVolume5);
}

void copy(ctp::CThostFtdcMarketDataUpdateTimeField *dest, CThostFtdcMarketDataUpdateTimeField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_updatetime(src->UpdateTime);
    dest->set_updatemillisec(src->UpdateMillisec);
    dest->set_actionday(src->ActionDay);
}

void copy(ctp::CThostFtdcMarketDataExchangeField *dest, CThostFtdcMarketDataExchangeField *src)
{
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcSpecificInstrumentField *dest, CThostFtdcSpecificInstrumentField *src)
{
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcInstrumentStatusField *dest, CThostFtdcInstrumentStatusField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_settlementgroupid(src->SettlementGroupID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_instrumentstatus(src->InstrumentStatus);
    dest->set_tradingsegmentsn(src->TradingSegmentSN);
    dest->set_entertime(src->EnterTime);
    dest->set_enterreason(src->EnterReason);
}

void copy(ctp::CThostFtdcQryInstrumentStatusField *dest, CThostFtdcQryInstrumentStatusField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_exchangeinstid(src->ExchangeInstID);
}

void copy(ctp::CThostFtdcInvestorAccountField *dest, CThostFtdcInvestorAccountField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcPositionProfitAlgorithmField *dest, CThostFtdcPositionProfitAlgorithmField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_algorithm(src->Algorithm);
    dest->set_memo(src->Memo);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcDiscountField *dest, CThostFtdcDiscountField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_investorid(src->InvestorID);
    dest->set_discount(src->Discount);
}

void copy(ctp::CThostFtdcQryTransferBankField *dest, CThostFtdcQryTransferBankField *src)
{
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
}

void copy(ctp::CThostFtdcTransferBankField *dest, CThostFtdcTransferBankField *src)
{
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
    dest->set_bankname(src->BankName);
    dest->set_isactive(src->IsActive);
}

void copy(ctp::CThostFtdcQryInvestorPositionDetailField *dest, CThostFtdcQryInvestorPositionDetailField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcInvestorPositionDetailField *dest, CThostFtdcInvestorPositionDetailField *src)
{
    dest->set_instrumentid(src->InstrumentID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_direction(src->Direction);
    dest->set_opendate(src->OpenDate);
    dest->set_tradeid(src->TradeID);
    dest->set_volume(src->Volume);
    dest->set_openprice(src->OpenPrice);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_tradetype(src->TradeType);
    dest->set_combinstrumentid(src->CombInstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_closeprofitbydate(src->CloseProfitByDate);
    dest->set_closeprofitbytrade(src->CloseProfitByTrade);
    dest->set_positionprofitbydate(src->PositionProfitByDate);
    dest->set_positionprofitbytrade(src->PositionProfitByTrade);
    dest->set_margin(src->Margin);
    dest->set_exchmargin(src->ExchMargin);
    dest->set_marginratebymoney(src->MarginRateByMoney);
    dest->set_marginratebyvolume(src->MarginRateByVolume);
    dest->set_lastsettlementprice(src->LastSettlementPrice);
    dest->set_settlementprice(src->SettlementPrice);
    dest->set_closevolume(src->CloseVolume);
    dest->set_closeamount(src->CloseAmount);
    dest->set_timefirstvolume(src->TimeFirstVolume);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcTradingAccountPasswordField *dest, CThostFtdcTradingAccountPasswordField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcMDTraderOfferField *dest, CThostFtdcMDTraderOfferField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_traderid(src->TraderID);
    dest->set_participantid(src->ParticipantID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_traderconnectstatus(src->TraderConnectStatus);
    dest->set_connectrequestdate(src->ConnectRequestDate);
    dest->set_connectrequesttime(src->ConnectRequestTime);
    dest->set_lastreportdate(src->LastReportDate);
    dest->set_lastreporttime(src->LastReportTime);
    dest->set_connectdate(src->ConnectDate);
    dest->set_connecttime(src->ConnectTime);
    dest->set_startdate(src->StartDate);
    dest->set_starttime(src->StartTime);
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_maxtradeid(src->MaxTradeID);
    dest->set_maxordermessagereference(src->MaxOrderMessageReference);
}

void copy(ctp::CThostFtdcQryMDTraderOfferField *dest, CThostFtdcQryMDTraderOfferField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_traderid(src->TraderID);
}

void copy(ctp::CThostFtdcQryNoticeField *dest, CThostFtdcQryNoticeField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcNoticeField *dest, CThostFtdcNoticeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_content(src->Content);
    dest->set_sequencelabel(src->SequenceLabel);
}

void copy(ctp::CThostFtdcUserRightField *dest, CThostFtdcUserRightField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_userrighttype(src->UserRightType);
    dest->set_isforbidden(src->IsForbidden);
}

void copy(ctp::CThostFtdcQrySettlementInfoConfirmField *dest, CThostFtdcQrySettlementInfoConfirmField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcLoadSettlementInfoField *dest, CThostFtdcLoadSettlementInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcBrokerWithdrawAlgorithmField *dest, CThostFtdcBrokerWithdrawAlgorithmField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_withdrawalgorithm(src->WithdrawAlgorithm);
    dest->set_usingratio(src->UsingRatio);
    dest->set_includecloseprofit(src->IncludeCloseProfit);
    dest->set_allwithouttrade(src->AllWithoutTrade);
    dest->set_availincludecloseprofit(src->AvailIncludeCloseProfit);
    dest->set_isbrokeruserevent(src->IsBrokerUserEvent);
    dest->set_currencyid(src->CurrencyID);
    dest->set_fundmortgageratio(src->FundMortgageRatio);
    dest->set_balancealgorithm(src->BalanceAlgorithm);
}

void copy(ctp::CThostFtdcTradingAccountPasswordUpdateV1Field *dest, CThostFtdcTradingAccountPasswordUpdateV1Field *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_oldpassword(src->OldPassword);
    dest->set_newpassword(src->NewPassword);
}

void copy(ctp::CThostFtdcTradingAccountPasswordUpdateField *dest, CThostFtdcTradingAccountPasswordUpdateField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_oldpassword(src->OldPassword);
    dest->set_newpassword(src->NewPassword);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcQryCombinationLegField *dest, CThostFtdcQryCombinationLegField *src)
{
    dest->set_combinstrumentid(src->CombInstrumentID);
    dest->set_legid(src->LegID);
    dest->set_leginstrumentid(src->LegInstrumentID);
}

void copy(ctp::CThostFtdcQrySyncStatusField *dest, CThostFtdcQrySyncStatusField *src)
{
    dest->set_tradingday(src->TradingDay);
}

void copy(ctp::CThostFtdcCombinationLegField *dest, CThostFtdcCombinationLegField *src)
{
    dest->set_combinstrumentid(src->CombInstrumentID);
    dest->set_legid(src->LegID);
    dest->set_leginstrumentid(src->LegInstrumentID);
    dest->set_direction(src->Direction);
    dest->set_legmultiple(src->LegMultiple);
    dest->set_implylevel(src->ImplyLevel);
}

void copy(ctp::CThostFtdcSyncStatusField *dest, CThostFtdcSyncStatusField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_datasyncstatus(src->DataSyncStatus);
}

void copy(ctp::CThostFtdcQryLinkManField *dest, CThostFtdcQryLinkManField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcLinkManField *dest, CThostFtdcLinkManField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_persontype(src->PersonType);
    dest->set_identifiedcardtype(src->IdentifiedCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_personname(src->PersonName);
    dest->set_telephone(src->Telephone);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_priority(src->Priority);
    dest->set_uoazipcode(src->UOAZipCode);
    dest->set_personfullname(src->PersonFullName);
}

void copy(ctp::CThostFtdcQryBrokerUserEventField *dest, CThostFtdcQryBrokerUserEventField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_usereventtype(src->UserEventType);
}

void copy(ctp::CThostFtdcBrokerUserEventField *dest, CThostFtdcBrokerUserEventField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_usereventtype(src->UserEventType);
    dest->set_eventsequenceno(src->EventSequenceNo);
    dest->set_eventdate(src->EventDate);
    dest->set_eventtime(src->EventTime);
    dest->set_usereventinfo(src->UserEventInfo);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcQryContractBankField *dest, CThostFtdcQryContractBankField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
}

void copy(ctp::CThostFtdcContractBankField *dest, CThostFtdcContractBankField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_bankid(src->BankID);
    dest->set_bankbrchid(src->BankBrchID);
    dest->set_bankname(src->BankName);
}

void copy(ctp::CThostFtdcInvestorPositionCombineDetailField *dest, CThostFtdcInvestorPositionCombineDetailField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_opendate(src->OpenDate);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_settlementid(src->SettlementID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_comtradeid(src->ComTradeID);
    dest->set_tradeid(src->TradeID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_direction(src->Direction);
    dest->set_totalamt(src->TotalAmt);
    dest->set_margin(src->Margin);
    dest->set_exchmargin(src->ExchMargin);
    dest->set_marginratebymoney(src->MarginRateByMoney);
    dest->set_marginratebyvolume(src->MarginRateByVolume);
    dest->set_legid(src->LegID);
    dest->set_legmultiple(src->LegMultiple);
    dest->set_combinstrumentid(src->CombInstrumentID);
    dest->set_tradegroupid(src->TradeGroupID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcParkedOrderField *dest, CThostFtdcParkedOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_userforceclose(src->UserForceClose);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_parkedorderid(src->ParkedOrderID);
    dest->set_usertype(src->UserType);
    dest->set_status(src->Status);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_isswaporder(src->IsSwapOrder);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcParkedOrderActionField *dest, CThostFtdcParkedOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_orderref(src->OrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumechange(src->VolumeChange);
    dest->set_userid(src->UserID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_parkedorderactionid(src->ParkedOrderActionID);
    dest->set_usertype(src->UserType);
    dest->set_status(src->Status);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryParkedOrderField *dest, CThostFtdcQryParkedOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryParkedOrderActionField *dest, CThostFtdcQryParkedOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcRemoveParkedOrderField *dest, CThostFtdcRemoveParkedOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_parkedorderid(src->ParkedOrderID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcRemoveParkedOrderActionField *dest, CThostFtdcRemoveParkedOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_parkedorderactionid(src->ParkedOrderActionID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcInvestorWithdrawAlgorithmField *dest, CThostFtdcInvestorWithdrawAlgorithmField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_investorid(src->InvestorID);
    dest->set_usingratio(src->UsingRatio);
    dest->set_currencyid(src->CurrencyID);
    dest->set_fundmortgageratio(src->FundMortgageRatio);
}

void copy(ctp::CThostFtdcQryInvestorPositionCombineDetailField *dest, CThostFtdcQryInvestorPositionCombineDetailField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_combinstrumentid(src->CombInstrumentID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcMarketDataAveragePriceField *dest, CThostFtdcMarketDataAveragePriceField *src)
{
    dest->set_averageprice(src->AveragePrice);
}

void copy(ctp::CThostFtdcVerifyInvestorPasswordField *dest, CThostFtdcVerifyInvestorPasswordField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_password(src->Password);
}

void copy(ctp::CThostFtdcUserIPField *dest, CThostFtdcUserIPField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_ipmask(src->IPMask);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcTradingNoticeInfoField *dest, CThostFtdcTradingNoticeInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_sendtime(src->SendTime);
    dest->set_fieldcontent(src->FieldContent);
    dest->set_sequenceseries(src->SequenceSeries);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcTradingNoticeField *dest, CThostFtdcTradingNoticeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_investorid(src->InvestorID);
    dest->set_sequenceseries(src->SequenceSeries);
    dest->set_userid(src->UserID);
    dest->set_sendtime(src->SendTime);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_fieldcontent(src->FieldContent);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryTradingNoticeField *dest, CThostFtdcQryTradingNoticeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryErrOrderField *dest, CThostFtdcQryErrOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcErrOrderField *dest, CThostFtdcErrOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_userforceclose(src->UserForceClose);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_isswaporder(src->IsSwapOrder);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_clientid(src->ClientID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcErrorConditionalOrderField *dest, CThostFtdcErrorConditionalOrderField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_orderref(src->OrderRef);
    dest->set_userid(src->UserID);
    dest->set_orderpricetype(src->OrderPriceType);
    dest->set_direction(src->Direction);
    dest->set_comboffsetflag(src->CombOffsetFlag);
    dest->set_combhedgeflag(src->CombHedgeFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumetotaloriginal(src->VolumeTotalOriginal);
    dest->set_timecondition(src->TimeCondition);
    dest->set_gtddate(src->GTDDate);
    dest->set_volumecondition(src->VolumeCondition);
    dest->set_minvolume(src->MinVolume);
    dest->set_contingentcondition(src->ContingentCondition);
    dest->set_stopprice(src->StopPrice);
    dest->set_forceclosereason(src->ForceCloseReason);
    dest->set_isautosuspend(src->IsAutoSuspend);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_requestid(src->RequestID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_exchangeinstid(src->ExchangeInstID);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_ordersubmitstatus(src->OrderSubmitStatus);
    dest->set_notifysequence(src->NotifySequence);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_ordersource(src->OrderSource);
    dest->set_orderstatus(src->OrderStatus);
    dest->set_ordertype(src->OrderType);
    dest->set_volumetraded(src->VolumeTraded);
    dest->set_volumetotal(src->VolumeTotal);
    dest->set_insertdate(src->InsertDate);
    dest->set_inserttime(src->InsertTime);
    dest->set_activetime(src->ActiveTime);
    dest->set_suspendtime(src->SuspendTime);
    dest->set_updatetime(src->UpdateTime);
    dest->set_canceltime(src->CancelTime);
    dest->set_activetraderid(src->ActiveTraderID);
    dest->set_clearingpartid(src->ClearingPartID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_userforceclose(src->UserForceClose);
    dest->set_activeuserid(src->ActiveUserID);
    dest->set_brokerorderseq(src->BrokerOrderSeq);
    dest->set_relativeordersysid(src->RelativeOrderSysID);
    dest->set_zcetotaltradedvolume(src->ZCETotalTradedVolume);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_isswaporder(src->IsSwapOrder);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
}

void copy(ctp::CThostFtdcQryErrOrderActionField *dest, CThostFtdcQryErrOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcErrOrderActionField *dest, CThostFtdcErrOrderActionField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_orderactionref(src->OrderActionRef);
    dest->set_orderref(src->OrderRef);
    dest->set_requestid(src->RequestID);
    dest->set_frontid(src->FrontID);
    dest->set_sessionid(src->SessionID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_ordersysid(src->OrderSysID);
    dest->set_actionflag(src->ActionFlag);
    dest->set_limitprice(src->LimitPrice);
    dest->set_volumechange(src->VolumeChange);
    dest->set_actiondate(src->ActionDate);
    dest->set_actiontime(src->ActionTime);
    dest->set_traderid(src->TraderID);
    dest->set_installid(src->InstallID);
    dest->set_orderlocalid(src->OrderLocalID);
    dest->set_actionlocalid(src->ActionLocalID);
    dest->set_participantid(src->ParticipantID);
    dest->set_clientid(src->ClientID);
    dest->set_businessunit(src->BusinessUnit);
    dest->set_orderactionstatus(src->OrderActionStatus);
    dest->set_userid(src->UserID);
    dest->set_statusmsg(src->StatusMsg);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_branchid(src->BranchID);
    dest->set_investunitid(src->InvestUnitID);
    dest->set_ipaddress(src->IPAddress);
    dest->set_macaddress(src->MacAddress);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcQryExchangeSequenceField *dest, CThostFtdcQryExchangeSequenceField *src)
{
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcExchangeSequenceField *dest, CThostFtdcExchangeSequenceField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_marketstatus(src->MarketStatus);
}

void copy(ctp::CThostFtdcQueryMaxOrderVolumeWithPriceField *dest, CThostFtdcQueryMaxOrderVolumeWithPriceField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_direction(src->Direction);
    dest->set_offsetflag(src->OffsetFlag);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_maxvolume(src->MaxVolume);
    dest->set_price(src->Price);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryBrokerTradingParamsField *dest, CThostFtdcQryBrokerTradingParamsField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_accountid(src->AccountID);
}

void copy(ctp::CThostFtdcBrokerTradingParamsField *dest, CThostFtdcBrokerTradingParamsField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_marginpricetype(src->MarginPriceType);
    dest->set_algorithm(src->Algorithm);
    dest->set_availincludecloseprofit(src->AvailIncludeCloseProfit);
    dest->set_currencyid(src->CurrencyID);
    dest->set_optionroyaltypricetype(src->OptionRoyaltyPriceType);
    dest->set_accountid(src->AccountID);
}

void copy(ctp::CThostFtdcQryBrokerTradingAlgosField *dest, CThostFtdcQryBrokerTradingAlgosField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_instrumentid(src->InstrumentID);
}

void copy(ctp::CThostFtdcBrokerTradingAlgosField *dest, CThostFtdcBrokerTradingAlgosField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_handlepositionalgoid(src->HandlePositionAlgoID);
    dest->set_findmarginratealgoid(src->FindMarginRateAlgoID);
    dest->set_handletradingaccountalgoid(src->HandleTradingAccountAlgoID);
}

void copy(ctp::CThostFtdcQueryBrokerDepositField *dest, CThostFtdcQueryBrokerDepositField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcBrokerDepositField *dest, CThostFtdcBrokerDepositField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_participantid(src->ParticipantID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_prebalance(src->PreBalance);
    dest->set_currmargin(src->CurrMargin);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_balance(src->Balance);
    dest->set_deposit(src->Deposit);
    dest->set_withdraw(src->Withdraw);
    dest->set_available(src->Available);
    dest->set_reserve(src->Reserve);
    dest->set_frozenmargin(src->FrozenMargin);
}

void copy(ctp::CThostFtdcQryCFMMCBrokerKeyField *dest, CThostFtdcQryCFMMCBrokerKeyField *src)
{
    dest->set_brokerid(src->BrokerID);
}

void copy(ctp::CThostFtdcCFMMCBrokerKeyField *dest, CThostFtdcCFMMCBrokerKeyField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_participantid(src->ParticipantID);
    dest->set_createdate(src->CreateDate);
    dest->set_createtime(src->CreateTime);
    dest->set_keyid(src->KeyID);
    dest->set_currentkey(src->CurrentKey);
    dest->set_keykind(src->KeyKind);
}

void copy(ctp::CThostFtdcCFMMCTradingAccountKeyField *dest, CThostFtdcCFMMCTradingAccountKeyField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_participantid(src->ParticipantID);
    dest->set_accountid(src->AccountID);
    dest->set_keyid(src->KeyID);
    dest->set_currentkey(src->CurrentKey);
}

void copy(ctp::CThostFtdcQryCFMMCTradingAccountKeyField *dest, CThostFtdcQryCFMMCTradingAccountKeyField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcBrokerUserOTPParamField *dest, CThostFtdcBrokerUserOTPParamField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_otpvendorsid(src->OTPVendorsID);
    dest->set_serialnumber(src->SerialNumber);
    dest->set_authkey(src->AuthKey);
    dest->set_lastdrift(src->LastDrift);
    dest->set_lastsuccess(src->LastSuccess);
    dest->set_otptype(src->OTPType);
}

void copy(ctp::CThostFtdcManualSyncBrokerUserOTPField *dest, CThostFtdcManualSyncBrokerUserOTPField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_otptype(src->OTPType);
    dest->set_firstotp(src->FirstOTP);
    dest->set_secondotp(src->SecondOTP);
}

void copy(ctp::CThostFtdcCommRateModelField *dest, CThostFtdcCommRateModelField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_commmodelid(src->CommModelID);
    dest->set_commmodelname(src->CommModelName);
}

void copy(ctp::CThostFtdcQryCommRateModelField *dest, CThostFtdcQryCommRateModelField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_commmodelid(src->CommModelID);
}

void copy(ctp::CThostFtdcMarginModelField *dest, CThostFtdcMarginModelField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_marginmodelid(src->MarginModelID);
    dest->set_marginmodelname(src->MarginModelName);
}

void copy(ctp::CThostFtdcQryMarginModelField *dest, CThostFtdcQryMarginModelField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_marginmodelid(src->MarginModelID);
}

void copy(ctp::CThostFtdcEWarrantOffsetField *dest, CThostFtdcEWarrantOffsetField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_direction(src->Direction);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_volume(src->Volume);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryEWarrantOffsetField *dest, CThostFtdcQryEWarrantOffsetField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_instrumentid(src->InstrumentID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQryInvestorProductGroupMarginField *dest, CThostFtdcQryInvestorProductGroupMarginField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_productgroupid(src->ProductGroupID);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcInvestorProductGroupMarginField *dest, CThostFtdcInvestorProductGroupMarginField *src)
{
    dest->set_productgroupid(src->ProductGroupID);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_tradingday(src->TradingDay);
    dest->set_settlementid(src->SettlementID);
    dest->set_frozenmargin(src->FrozenMargin);
    dest->set_longfrozenmargin(src->LongFrozenMargin);
    dest->set_shortfrozenmargin(src->ShortFrozenMargin);
    dest->set_usemargin(src->UseMargin);
    dest->set_longusemargin(src->LongUseMargin);
    dest->set_shortusemargin(src->ShortUseMargin);
    dest->set_exchmargin(src->ExchMargin);
    dest->set_longexchmargin(src->LongExchMargin);
    dest->set_shortexchmargin(src->ShortExchMargin);
    dest->set_closeprofit(src->CloseProfit);
    dest->set_frozencommission(src->FrozenCommission);
    dest->set_commission(src->Commission);
    dest->set_frozencash(src->FrozenCash);
    dest->set_cashin(src->CashIn);
    dest->set_positionprofit(src->PositionProfit);
    dest->set_offsetamount(src->OffsetAmount);
    dest->set_longoffsetamount(src->LongOffsetAmount);
    dest->set_shortoffsetamount(src->ShortOffsetAmount);
    dest->set_exchoffsetamount(src->ExchOffsetAmount);
    dest->set_longexchoffsetamount(src->LongExchOffsetAmount);
    dest->set_shortexchoffsetamount(src->ShortExchOffsetAmount);
    dest->set_hedgeflag(src->HedgeFlag);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcQueryCFMMCTradingAccountTokenField *dest, CThostFtdcQueryCFMMCTradingAccountTokenField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_investunitid(src->InvestUnitID);
}

void copy(ctp::CThostFtdcCFMMCTradingAccountTokenField *dest, CThostFtdcCFMMCTradingAccountTokenField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_participantid(src->ParticipantID);
    dest->set_accountid(src->AccountID);
    dest->set_keyid(src->KeyID);
    dest->set_token(src->Token);
}

void copy(ctp::CThostFtdcQryProductGroupField *dest, CThostFtdcQryProductGroupField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_exchangeid(src->ExchangeID);
}

void copy(ctp::CThostFtdcProductGroupField *dest, CThostFtdcProductGroupField *src)
{
    dest->set_productid(src->ProductID);
    dest->set_exchangeid(src->ExchangeID);
    dest->set_productgroupid(src->ProductGroupID);
}

void copy(ctp::CThostFtdcBulletinField *dest, CThostFtdcBulletinField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_tradingday(src->TradingDay);
    dest->set_bulletinid(src->BulletinID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_newstype(src->NewsType);
    dest->set_newsurgency(src->NewsUrgency);
    dest->set_sendtime(src->SendTime);
    dest->set_abstract(src->Abstract);
    dest->set_comefrom(src->ComeFrom);
    dest->set_content(src->Content);
    dest->set_urllink(src->URLLink);
    dest->set_marketid(src->MarketID);
}

void copy(ctp::CThostFtdcQryBulletinField *dest, CThostFtdcQryBulletinField *src)
{
    dest->set_exchangeid(src->ExchangeID);
    dest->set_bulletinid(src->BulletinID);
    dest->set_sequenceno(src->SequenceNo);
    dest->set_newstype(src->NewsType);
    dest->set_newsurgency(src->NewsUrgency);
}

void copy(ctp::CThostFtdcReqOpenAccountField *dest, CThostFtdcReqOpenAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_cashexchangecode(src->CashExchangeCode);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_tid(src->TID);
    dest->set_userid(src->UserID);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcReqCancelAccountField *dest, CThostFtdcReqCancelAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_cashexchangecode(src->CashExchangeCode);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_tid(src->TID);
    dest->set_userid(src->UserID);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcReqChangeAccountField *dest, CThostFtdcReqChangeAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_newbankaccount(src->NewBankAccount);
    dest->set_newbankpassword(src->NewBankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_bankacctype(src->BankAccType);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_tid(src->TID);
    dest->set_digest(src->Digest);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcReqTransferField *dest, CThostFtdcReqTransferField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_futureserial(src->FutureSerial);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_futurefetchamount(src->FutureFetchAmount);
    dest->set_feepayflag(src->FeePayFlag);
    dest->set_custfee(src->CustFee);
    dest->set_brokerfee(src->BrokerFee);
    dest->set_message(src->Message);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_transferstatus(src->TransferStatus);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcRspTransferField *dest, CThostFtdcRspTransferField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_futureserial(src->FutureSerial);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_futurefetchamount(src->FutureFetchAmount);
    dest->set_feepayflag(src->FeePayFlag);
    dest->set_custfee(src->CustFee);
    dest->set_brokerfee(src->BrokerFee);
    dest->set_message(src->Message);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_transferstatus(src->TransferStatus);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcReqRepealField *dest, CThostFtdcReqRepealField *src)
{
    dest->set_repealtimeinterval(src->RepealTimeInterval);
    dest->set_repealedtimes(src->RepealedTimes);
    dest->set_bankrepealflag(src->BankRepealFlag);
    dest->set_brokerrepealflag(src->BrokerRepealFlag);
    dest->set_platerepealserial(src->PlateRepealSerial);
    dest->set_bankrepealserial(src->BankRepealSerial);
    dest->set_futurerepealserial(src->FutureRepealSerial);
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_futureserial(src->FutureSerial);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_futurefetchamount(src->FutureFetchAmount);
    dest->set_feepayflag(src->FeePayFlag);
    dest->set_custfee(src->CustFee);
    dest->set_brokerfee(src->BrokerFee);
    dest->set_message(src->Message);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_transferstatus(src->TransferStatus);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcRspRepealField *dest, CThostFtdcRspRepealField *src)
{
    dest->set_repealtimeinterval(src->RepealTimeInterval);
    dest->set_repealedtimes(src->RepealedTimes);
    dest->set_bankrepealflag(src->BankRepealFlag);
    dest->set_brokerrepealflag(src->BrokerRepealFlag);
    dest->set_platerepealserial(src->PlateRepealSerial);
    dest->set_bankrepealserial(src->BankRepealSerial);
    dest->set_futurerepealserial(src->FutureRepealSerial);
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_futureserial(src->FutureSerial);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_futurefetchamount(src->FutureFetchAmount);
    dest->set_feepayflag(src->FeePayFlag);
    dest->set_custfee(src->CustFee);
    dest->set_brokerfee(src->BrokerFee);
    dest->set_message(src->Message);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_transferstatus(src->TransferStatus);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcReqQueryAccountField *dest, CThostFtdcReqQueryAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_futureserial(src->FutureSerial);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcRspQueryAccountField *dest, CThostFtdcRspQueryAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_futureserial(src->FutureSerial);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_bankuseamount(src->BankUseAmount);
    dest->set_bankfetchamount(src->BankFetchAmount);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcFutureSignIOField *dest, CThostFtdcFutureSignIOField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
}

void copy(ctp::CThostFtdcRspFutureSignInField *dest, CThostFtdcRspFutureSignInField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_pinkey(src->PinKey);
    dest->set_mackey(src->MacKey);
}

void copy(ctp::CThostFtdcReqFutureSignOutField *dest, CThostFtdcReqFutureSignOutField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
}

void copy(ctp::CThostFtdcRspFutureSignOutField *dest, CThostFtdcRspFutureSignOutField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcReqQueryTradeResultBySerialField *dest, CThostFtdcReqQueryTradeResultBySerialField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_reference(src->Reference);
    dest->set_refrenceissuretype(src->RefrenceIssureType);
    dest->set_refrenceissure(src->RefrenceIssure);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_digest(src->Digest);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcRspQueryTradeResultBySerialField *dest, CThostFtdcRspQueryTradeResultBySerialField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_reference(src->Reference);
    dest->set_refrenceissuretype(src->RefrenceIssureType);
    dest->set_refrenceissure(src->RefrenceIssure);
    dest->set_originreturncode(src->OriginReturnCode);
    dest->set_origindescrinfoforreturncode(src->OriginDescrInfoForReturnCode);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_digest(src->Digest);
}

void copy(ctp::CThostFtdcReqDayEndFileReadyField *dest, CThostFtdcReqDayEndFileReadyField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_filebusinesscode(src->FileBusinessCode);
    dest->set_digest(src->Digest);
}

void copy(ctp::CThostFtdcReturnResultField *dest, CThostFtdcReturnResultField *src)
{
    dest->set_returncode(src->ReturnCode);
    dest->set_descrinfoforreturncode(src->DescrInfoForReturnCode);
}

void copy(ctp::CThostFtdcVerifyFuturePasswordField *dest, CThostFtdcVerifyFuturePasswordField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_installid(src->InstallID);
    dest->set_tid(src->TID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcVerifyCustInfoField *dest, CThostFtdcVerifyCustInfoField *src)
{
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcVerifyFuturePasswordAndCustInfoField *dest, CThostFtdcVerifyFuturePasswordAndCustInfoField *src)
{
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_currencyid(src->CurrencyID);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcDepositResultInformField *dest, CThostFtdcDepositResultInformField *src)
{
    dest->set_depositseqno(src->DepositSeqNo);
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
    dest->set_deposit(src->Deposit);
    dest->set_requestid(src->RequestID);
    dest->set_returncode(src->ReturnCode);
    dest->set_descrinfoforreturncode(src->DescrInfoForReturnCode);
}

void copy(ctp::CThostFtdcReqSyncKeyField *dest, CThostFtdcReqSyncKeyField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_message(src->Message);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
}

void copy(ctp::CThostFtdcRspSyncKeyField *dest, CThostFtdcRspSyncKeyField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_message(src->Message);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcNotifyQueryAccountField *dest, CThostFtdcNotifyQueryAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_custtype(src->CustType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_futureserial(src->FutureSerial);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_bankuseamount(src->BankUseAmount);
    dest->set_bankfetchamount(src->BankFetchAmount);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcTransferSerialField *dest, CThostFtdcTransferSerialField *src)
{
    dest->set_plateserial(src->PlateSerial);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradingday(src->TradingDay);
    dest->set_tradetime(src->TradeTime);
    dest->set_tradecode(src->TradeCode);
    dest->set_sessionid(src->SessionID);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_bankacctype(src->BankAccType);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankserial(src->BankSerial);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_futureacctype(src->FutureAccType);
    dest->set_accountid(src->AccountID);
    dest->set_investorid(src->InvestorID);
    dest->set_futureserial(src->FutureSerial);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_currencyid(src->CurrencyID);
    dest->set_tradeamount(src->TradeAmount);
    dest->set_custfee(src->CustFee);
    dest->set_brokerfee(src->BrokerFee);
    dest->set_availabilityflag(src->AvailabilityFlag);
    dest->set_operatorcode(src->OperatorCode);
    dest->set_banknewaccount(src->BankNewAccount);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcQryTransferSerialField *dest, CThostFtdcQryTransferSerialField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_bankid(src->BankID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcNotifyFutureSignInField *dest, CThostFtdcNotifyFutureSignInField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_pinkey(src->PinKey);
    dest->set_mackey(src->MacKey);
}

void copy(ctp::CThostFtdcNotifyFutureSignOutField *dest, CThostFtdcNotifyFutureSignOutField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_digest(src->Digest);
    dest->set_currencyid(src->CurrencyID);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcNotifySyncKeyField *dest, CThostFtdcNotifySyncKeyField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_installid(src->InstallID);
    dest->set_userid(src->UserID);
    dest->set_message(src->Message);
    dest->set_deviceid(src->DeviceID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_operno(src->OperNo);
    dest->set_requestid(src->RequestID);
    dest->set_tid(src->TID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcQryAccountregisterField *dest, CThostFtdcQryAccountregisterField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcAccountregisterField *dest, CThostFtdcAccountregisterField *src)
{
    dest->set_tradeday(src->TradeDay);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_bankaccount(src->BankAccount);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_accountid(src->AccountID);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_customername(src->CustomerName);
    dest->set_currencyid(src->CurrencyID);
    dest->set_openordestroy(src->OpenOrDestroy);
    dest->set_regdate(src->RegDate);
    dest->set_outdate(src->OutDate);
    dest->set_tid(src->TID);
    dest->set_custtype(src->CustType);
    dest->set_bankacctype(src->BankAccType);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcOpenAccountField *dest, CThostFtdcOpenAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_cashexchangecode(src->CashExchangeCode);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_tid(src->TID);
    dest->set_userid(src->UserID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcCancelAccountField *dest, CThostFtdcCancelAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_cashexchangecode(src->CashExchangeCode);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_deviceid(src->DeviceID);
    dest->set_banksecuacctype(src->BankSecuAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_banksecuacc(src->BankSecuAcc);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_operno(src->OperNo);
    dest->set_tid(src->TID);
    dest->set_userid(src->UserID);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcChangeAccountField *dest, CThostFtdcChangeAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_newbankaccount(src->NewBankAccount);
    dest->set_newbankpassword(src->NewBankPassWord);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_bankacctype(src->BankAccType);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_bankpwdflag(src->BankPwdFlag);
    dest->set_secupwdflag(src->SecuPwdFlag);
    dest->set_tid(src->TID);
    dest->set_digest(src->Digest);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
    dest->set_longcustomername(src->LongCustomerName);
}

void copy(ctp::CThostFtdcSecAgentACIDMapField *dest, CThostFtdcSecAgentACIDMapField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
    dest->set_brokersecagentid(src->BrokerSecAgentID);
}

void copy(ctp::CThostFtdcQrySecAgentACIDMapField *dest, CThostFtdcQrySecAgentACIDMapField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_accountid(src->AccountID);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcUserRightsAssignField *dest, CThostFtdcUserRightsAssignField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_dridentityid(src->DRIdentityID);
}

void copy(ctp::CThostFtdcBrokerUserRightAssignField *dest, CThostFtdcBrokerUserRightAssignField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_dridentityid(src->DRIdentityID);
    dest->set_tradeable(src->Tradeable);
}

void copy(ctp::CThostFtdcDRTransferField *dest, CThostFtdcDRTransferField *src)
{
    dest->set_origdridentityid(src->OrigDRIdentityID);
    dest->set_destdridentityid(src->DestDRIdentityID);
    dest->set_origbrokerid(src->OrigBrokerID);
    dest->set_destbrokerid(src->DestBrokerID);
}

void copy(ctp::CThostFtdcFensUserInfoField *dest, CThostFtdcFensUserInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_loginmode(src->LoginMode);
}

void copy(ctp::CThostFtdcCurrTransferIdentityField *dest, CThostFtdcCurrTransferIdentityField *src)
{
    dest->set_identityid(src->IdentityID);
}

void copy(ctp::CThostFtdcLoginForbiddenUserField *dest, CThostFtdcLoginForbiddenUserField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_ipaddress(src->IPAddress);
}

void copy(ctp::CThostFtdcQryLoginForbiddenUserField *dest, CThostFtdcQryLoginForbiddenUserField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcMulticastGroupInfoField *dest, CThostFtdcMulticastGroupInfoField *src)
{
    dest->set_groupip(src->GroupIP);
    dest->set_groupport(src->GroupPort);
    dest->set_sourceip(src->SourceIP);
}

void copy(ctp::CThostFtdcTradingAccountReserveField *dest, CThostFtdcTradingAccountReserveField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_reserve(src->Reserve);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcQryLoginForbiddenIPField *dest, CThostFtdcQryLoginForbiddenIPField *src)
{
    dest->set_ipaddress(src->IPAddress);
}

void copy(ctp::CThostFtdcQryIPListField *dest, CThostFtdcQryIPListField *src)
{
    dest->set_ipaddress(src->IPAddress);
}

void copy(ctp::CThostFtdcQryUserRightsAssignField *dest, CThostFtdcQryUserRightsAssignField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcReserveOpenAccountConfirmField *dest, CThostFtdcReserveOpenAccountConfirmField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_tid(src->TID);
    dest->set_accountid(src->AccountID);
    dest->set_password(src->Password);
    dest->set_bankreserveopenseq(src->BankReserveOpenSeq);
    dest->set_bookdate(src->BookDate);
    dest->set_bookpsw(src->BookPsw);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcReserveOpenAccountField *dest, CThostFtdcReserveOpenAccountField *src)
{
    dest->set_tradecode(src->TradeCode);
    dest->set_bankid(src->BankID);
    dest->set_bankbranchid(src->BankBranchID);
    dest->set_brokerid(src->BrokerID);
    dest->set_brokerbranchid(src->BrokerBranchID);
    dest->set_tradedate(src->TradeDate);
    dest->set_tradetime(src->TradeTime);
    dest->set_bankserial(src->BankSerial);
    dest->set_tradingday(src->TradingDay);
    dest->set_plateserial(src->PlateSerial);
    dest->set_lastfragment(src->LastFragment);
    dest->set_sessionid(src->SessionID);
    dest->set_customername(src->CustomerName);
    dest->set_idcardtype(src->IdCardType);
    dest->set_identifiedcardno(src->IdentifiedCardNo);
    dest->set_gender(src->Gender);
    dest->set_countrycode(src->CountryCode);
    dest->set_custtype(src->CustType);
    dest->set_address(src->Address);
    dest->set_zipcode(src->ZipCode);
    dest->set_telephone(src->Telephone);
    dest->set_mobilephone(src->MobilePhone);
    dest->set_fax(src->Fax);
    dest->set_email(src->EMail);
    dest->set_moneyaccountstatus(src->MoneyAccountStatus);
    dest->set_bankaccount(src->BankAccount);
    dest->set_bankpassword(src->BankPassWord);
    dest->set_installid(src->InstallID);
    dest->set_verifycertnoflag(src->VerifyCertNoFlag);
    dest->set_currencyid(src->CurrencyID);
    dest->set_digest(src->Digest);
    dest->set_bankacctype(src->BankAccType);
    dest->set_brokeridbybank(src->BrokerIDByBank);
    dest->set_tid(src->TID);
    dest->set_reserveopenaccstas(src->ReserveOpenAccStas);
    dest->set_errorid(src->ErrorID);
    dest->set_errormsg(src->ErrorMsg);
}

void copy(ctp::CThostFtdcAccountPropertyField *dest, CThostFtdcAccountPropertyField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_accountid(src->AccountID);
    dest->set_bankid(src->BankID);
    dest->set_bankaccount(src->BankAccount);
    dest->set_openname(src->OpenName);
    dest->set_openbank(src->OpenBank);
    dest->set_isactive(src->IsActive);
    dest->set_accountsourcetype(src->AccountSourceType);
    dest->set_opendate(src->OpenDate);
    dest->set_canceldate(src->CancelDate);
    dest->set_operatorid(src->OperatorID);
    dest->set_operatedate(src->OperateDate);
    dest->set_operatetime(src->OperateTime);
    dest->set_currencyid(src->CurrencyID);
}

void copy(ctp::CThostFtdcQryCurrDRIdentityField *dest, CThostFtdcQryCurrDRIdentityField *src)
{
    dest->set_dridentityid(src->DRIdentityID);
}

void copy(ctp::CThostFtdcCurrDRIdentityField *dest, CThostFtdcCurrDRIdentityField *src)
{
    dest->set_dridentityid(src->DRIdentityID);
}

void copy(ctp::CThostFtdcQrySecAgentCheckModeField *dest, CThostFtdcQrySecAgentCheckModeField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcQrySecAgentTradeInfoField *dest, CThostFtdcQrySecAgentTradeInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_brokersecagentid(src->BrokerSecAgentID);
}

void copy(ctp::CThostFtdcUserSystemInfoField *dest, CThostFtdcUserSystemInfoField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_clientsysteminfolen(src->ClientSystemInfoLen);
    dest->set_clientsysteminfo(src->ClientSystemInfo);
    dest->set_clientpublicip(src->ClientPublicIP);
    dest->set_clientipport(src->ClientIPPort);
    dest->set_clientlogintime(src->ClientLoginTime);
    dest->set_clientappid(src->ClientAppID);
}

void copy(ctp::CThostFtdcReqUserAuthMethodField *dest, CThostFtdcReqUserAuthMethodField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcRspUserAuthMethodField *dest, CThostFtdcRspUserAuthMethodField *src)
{
    dest->set_usableauthmethod(src->UsableAuthMethod);
}

void copy(ctp::CThostFtdcReqGenUserCaptchaField *dest, CThostFtdcReqGenUserCaptchaField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcRspGenUserCaptchaField *dest, CThostFtdcRspGenUserCaptchaField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_captchainfolen(src->CaptchaInfoLen);
    dest->set_captchainfo(src->CaptchaInfo);
}

void copy(ctp::CThostFtdcReqGenUserTextField *dest, CThostFtdcReqGenUserTextField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
}

void copy(ctp::CThostFtdcRspGenUserTextField *dest, CThostFtdcRspGenUserTextField *src)
{
    dest->set_usertextseq(src->UserTextSeq);
}

void copy(ctp::CThostFtdcReqUserLoginWithCaptchaField *dest, CThostFtdcReqUserLoginWithCaptchaField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_password(src->Password);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_macaddress(src->MacAddress);
    dest->set_clientipaddress(src->ClientIPAddress);
    dest->set_loginremark(src->LoginRemark);
    dest->set_captcha(src->Captcha);
    dest->set_clientipport(src->ClientIPPort);
}

void copy(ctp::CThostFtdcReqUserLoginWithTextField *dest, CThostFtdcReqUserLoginWithTextField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_password(src->Password);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_macaddress(src->MacAddress);
    dest->set_clientipaddress(src->ClientIPAddress);
    dest->set_loginremark(src->LoginRemark);
    dest->set_text(src->Text);
    dest->set_clientipport(src->ClientIPPort);
}

void copy(ctp::CThostFtdcReqUserLoginWithOTPField *dest, CThostFtdcReqUserLoginWithOTPField *src)
{
    dest->set_tradingday(src->TradingDay);
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_password(src->Password);
    dest->set_userproductinfo(src->UserProductInfo);
    dest->set_interfaceproductinfo(src->InterfaceProductInfo);
    dest->set_protocolinfo(src->ProtocolInfo);
    dest->set_macaddress(src->MacAddress);
    dest->set_clientipaddress(src->ClientIPAddress);
    dest->set_loginremark(src->LoginRemark);
    dest->set_otppassword(src->OTPPassword);
    dest->set_clientipport(src->ClientIPPort);
}

void copy(ctp::CThostFtdcReqApiHandshakeField *dest, CThostFtdcReqApiHandshakeField *src)
{
    dest->set_cryptokeyversion(src->CryptoKeyVersion);
}

void copy(ctp::CThostFtdcRspApiHandshakeField *dest, CThostFtdcRspApiHandshakeField *src)
{
    dest->set_fronthandshakedatalen(src->FrontHandshakeDataLen);
    dest->set_fronthandshakedata(src->FrontHandshakeData);
    dest->set_isapiauthenabled(src->IsApiAuthEnabled);
}

void copy(ctp::CThostFtdcReqVerifyApiKeyField *dest, CThostFtdcReqVerifyApiKeyField *src)
{
    dest->set_apihandshakedatalen(src->ApiHandshakeDataLen);
    dest->set_apihandshakedata(src->ApiHandshakeData);
}

void copy(ctp::CThostFtdcDepartmentUserField *dest, CThostFtdcDepartmentUserField *src)
{
    dest->set_brokerid(src->BrokerID);
    dest->set_userid(src->UserID);
    dest->set_investorrange(src->InvestorRange);
    dest->set_investorid(src->InvestorID);
}

void copy(ctp::CThostFtdcQueryFreqField *dest, CThostFtdcQueryFreqField *src)
{
    dest->set_queryfreq(src->QueryFreq);
}

void copy(CThostFtdcDisseminationField *dest, ctp::CThostFtdcDisseminationField *src)
{
    dest->SequenceSeries = src->sequenceseries();
    dest->SequenceNo = src->sequenceno();
}

void copy(CThostFtdcReqUserLoginField *dest, ctp::CThostFtdcReqUserLoginField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->OneTimePassword, src->onetimepassword().data(), sizeof(dest->OneTimePassword));
    strncpy(dest->ClientIPAddress, src->clientipaddress().data(), sizeof(dest->ClientIPAddress));
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
    dest->ClientIPPort = src->clientipport();
}

void copy(CThostFtdcRspUserLoginField *dest, ctp::CThostFtdcRspUserLoginField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->LoginTime, src->logintime().data(), sizeof(dest->LoginTime));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->SystemName, src->systemname().data(), sizeof(dest->SystemName));
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->MaxOrderRef, src->maxorderref().data(), sizeof(dest->MaxOrderRef));
    strncpy(dest->SHFETime, src->shfetime().data(), sizeof(dest->SHFETime));
    strncpy(dest->DCETime, src->dcetime().data(), sizeof(dest->DCETime));
    strncpy(dest->CZCETime, src->czcetime().data(), sizeof(dest->CZCETime));
    strncpy(dest->FFEXTime, src->ffextime().data(), sizeof(dest->FFEXTime));
    strncpy(dest->INETime, src->inetime().data(), sizeof(dest->INETime));
}

void copy(CThostFtdcUserLogoutField *dest, ctp::CThostFtdcUserLogoutField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcForceUserLogoutField *dest, ctp::CThostFtdcForceUserLogoutField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcReqAuthenticateField *dest, ctp::CThostFtdcReqAuthenticateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->AuthCode, src->authcode().data(), sizeof(dest->AuthCode));
    strncpy(dest->AppID, src->appid().data(), sizeof(dest->AppID));
}

void copy(CThostFtdcRspAuthenticateField *dest, ctp::CThostFtdcRspAuthenticateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->AppID, src->appid().data(), sizeof(dest->AppID));
    dest->AppType = src->apptype();
}

void copy(CThostFtdcAuthenticationInfoField *dest, ctp::CThostFtdcAuthenticationInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->AuthInfo, src->authinfo().data(), sizeof(dest->AuthInfo));
    dest->IsResult = src->isresult();
    strncpy(dest->AppID, src->appid().data(), sizeof(dest->AppID));
    dest->AppType = src->apptype();
}

void copy(CThostFtdcRspUserLogin2Field *dest, ctp::CThostFtdcRspUserLogin2Field *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->LoginTime, src->logintime().data(), sizeof(dest->LoginTime));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->SystemName, src->systemname().data(), sizeof(dest->SystemName));
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->MaxOrderRef, src->maxorderref().data(), sizeof(dest->MaxOrderRef));
    strncpy(dest->SHFETime, src->shfetime().data(), sizeof(dest->SHFETime));
    strncpy(dest->DCETime, src->dcetime().data(), sizeof(dest->DCETime));
    strncpy(dest->CZCETime, src->czcetime().data(), sizeof(dest->CZCETime));
    strncpy(dest->FFEXTime, src->ffextime().data(), sizeof(dest->FFEXTime));
    strncpy(dest->INETime, src->inetime().data(), sizeof(dest->INETime));
    strncpy(dest->RandomString, src->randomstring().data(), sizeof(dest->RandomString));
}

void copy(CThostFtdcTransferHeaderField *dest, ctp::CThostFtdcTransferHeaderField *src)
{
    strncpy(dest->Version, src->version().data(), sizeof(dest->Version));
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->TradeSerial, src->tradeserial().data(), sizeof(dest->TradeSerial));
    strncpy(dest->FutureID, src->futureid().data(), sizeof(dest->FutureID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->RecordNum, src->recordnum().data(), sizeof(dest->RecordNum));
    dest->SessionID = src->sessionid();
    dest->RequestID = src->requestid();
}

void copy(CThostFtdcTransferBankToFutureReqField *dest, ctp::CThostFtdcTransferBankToFutureReqField *src)
{
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->FuturePwdFlag = src->futurepwdflag();
    strncpy(dest->FutureAccPwd, src->futureaccpwd().data(), sizeof(dest->FutureAccPwd));
    dest->TradeAmt = src->tradeamt();
    dest->CustFee = src->custfee();
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferBankToFutureRspField *dest, ctp::CThostFtdcTransferBankToFutureRspField *src)
{
    strncpy(dest->RetCode, src->retcode().data(), sizeof(dest->RetCode));
    strncpy(dest->RetInfo, src->retinfo().data(), sizeof(dest->RetInfo));
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->TradeAmt = src->tradeamt();
    dest->CustFee = src->custfee();
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferFutureToBankReqField *dest, ctp::CThostFtdcTransferFutureToBankReqField *src)
{
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->FuturePwdFlag = src->futurepwdflag();
    strncpy(dest->FutureAccPwd, src->futureaccpwd().data(), sizeof(dest->FutureAccPwd));
    dest->TradeAmt = src->tradeamt();
    dest->CustFee = src->custfee();
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferFutureToBankRspField *dest, ctp::CThostFtdcTransferFutureToBankRspField *src)
{
    strncpy(dest->RetCode, src->retcode().data(), sizeof(dest->RetCode));
    strncpy(dest->RetInfo, src->retinfo().data(), sizeof(dest->RetInfo));
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->TradeAmt = src->tradeamt();
    dest->CustFee = src->custfee();
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferQryBankReqField *dest, ctp::CThostFtdcTransferQryBankReqField *src)
{
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->FuturePwdFlag = src->futurepwdflag();
    strncpy(dest->FutureAccPwd, src->futureaccpwd().data(), sizeof(dest->FutureAccPwd));
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferQryBankRspField *dest, ctp::CThostFtdcTransferQryBankRspField *src)
{
    strncpy(dest->RetCode, src->retcode().data(), sizeof(dest->RetCode));
    strncpy(dest->RetInfo, src->retinfo().data(), sizeof(dest->RetInfo));
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->TradeAmt = src->tradeamt();
    dest->UseAmt = src->useamt();
    dest->FetchAmt = src->fetchamt();
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
}

void copy(CThostFtdcTransferQryDetailReqField *dest, ctp::CThostFtdcTransferQryDetailReqField *src)
{
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
}

void copy(CThostFtdcTransferQryDetailRspField *dest, ctp::CThostFtdcTransferQryDetailRspField *src)
{
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    dest->FutureSerial = src->futureserial();
    strncpy(dest->FutureID, src->futureid().data(), sizeof(dest->FutureID));
    strncpy(dest->FutureAccount, src->futureaccount().data(), sizeof(dest->FutureAccount));
    dest->BankSerial = src->bankserial();
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->CertCode, src->certcode().data(), sizeof(dest->CertCode));
    strncpy(dest->CurrencyCode, src->currencycode().data(), sizeof(dest->CurrencyCode));
    dest->TxAmount = src->txamount();
    dest->Flag = src->flag();
}

void copy(CThostFtdcRspInfoField *dest, ctp::CThostFtdcRspInfoField *src)
{
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcExchangeField *dest, ctp::CThostFtdcExchangeField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeName, src->exchangename().data(), sizeof(dest->ExchangeName));
    dest->ExchangeProperty = src->exchangeproperty();
}

void copy(CThostFtdcProductField *dest, ctp::CThostFtdcProductField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    strncpy(dest->ProductName, src->productname().data(), sizeof(dest->ProductName));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->ProductClass = src->productclass();
    dest->VolumeMultiple = src->volumemultiple();
    dest->PriceTick = src->pricetick();
    dest->MaxMarketOrderVolume = src->maxmarketordervolume();
    dest->MinMarketOrderVolume = src->minmarketordervolume();
    dest->MaxLimitOrderVolume = src->maxlimitordervolume();
    dest->MinLimitOrderVolume = src->minlimitordervolume();
    dest->PositionType = src->positiontype();
    dest->PositionDateType = src->positiondatetype();
    dest->CloseDealType = src->closedealtype();
    strncpy(dest->TradeCurrencyID, src->tradecurrencyid().data(), sizeof(dest->TradeCurrencyID));
    dest->MortgageFundUseRange = src->mortgagefunduserange();
    strncpy(dest->ExchangeProductID, src->exchangeproductid().data(), sizeof(dest->ExchangeProductID));
    dest->UnderlyingMultiple = src->underlyingmultiple();
}

void copy(CThostFtdcInstrumentField *dest, ctp::CThostFtdcInstrumentField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InstrumentName, src->instrumentname().data(), sizeof(dest->InstrumentName));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    dest->ProductClass = src->productclass();
    dest->DeliveryYear = src->deliveryyear();
    dest->DeliveryMonth = src->deliverymonth();
    dest->MaxMarketOrderVolume = src->maxmarketordervolume();
    dest->MinMarketOrderVolume = src->minmarketordervolume();
    dest->MaxLimitOrderVolume = src->maxlimitordervolume();
    dest->MinLimitOrderVolume = src->minlimitordervolume();
    dest->VolumeMultiple = src->volumemultiple();
    dest->PriceTick = src->pricetick();
    strncpy(dest->CreateDate, src->createdate().data(), sizeof(dest->CreateDate));
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->ExpireDate, src->expiredate().data(), sizeof(dest->ExpireDate));
    strncpy(dest->StartDelivDate, src->startdelivdate().data(), sizeof(dest->StartDelivDate));
    strncpy(dest->EndDelivDate, src->enddelivdate().data(), sizeof(dest->EndDelivDate));
    dest->InstLifePhase = src->instlifephase();
    dest->IsTrading = src->istrading();
    dest->PositionType = src->positiontype();
    dest->PositionDateType = src->positiondatetype();
    dest->LongMarginRatio = src->longmarginratio();
    dest->ShortMarginRatio = src->shortmarginratio();
    dest->MaxMarginSideAlgorithm = src->maxmarginsidealgorithm();
    strncpy(dest->UnderlyingInstrID, src->underlyinginstrid().data(), sizeof(dest->UnderlyingInstrID));
    dest->StrikePrice = src->strikeprice();
    dest->OptionsType = src->optionstype();
    dest->UnderlyingMultiple = src->underlyingmultiple();
    dest->CombinationType = src->combinationtype();
}

void copy(CThostFtdcBrokerField *dest, ctp::CThostFtdcBrokerField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerAbbr, src->brokerabbr().data(), sizeof(dest->BrokerAbbr));
    strncpy(dest->BrokerName, src->brokername().data(), sizeof(dest->BrokerName));
    dest->IsActive = src->isactive();
}

void copy(CThostFtdcTraderField *dest, ctp::CThostFtdcTraderField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallCount = src->installcount();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcInvestorField *dest, ctp::CThostFtdcInvestorField *src)
{
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorGroupID, src->investorgroupid().data(), sizeof(dest->InvestorGroupID));
    strncpy(dest->InvestorName, src->investorname().data(), sizeof(dest->InvestorName));
    dest->IdentifiedCardType = src->identifiedcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->IsActive = src->isactive();
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->Mobile, src->mobile().data(), sizeof(dest->Mobile));
    strncpy(dest->CommModelID, src->commmodelid().data(), sizeof(dest->CommModelID));
    strncpy(dest->MarginModelID, src->marginmodelid().data(), sizeof(dest->MarginModelID));
}

void copy(CThostFtdcTradingCodeField *dest, ctp::CThostFtdcTradingCodeField *src)
{
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    dest->IsActive = src->isactive();
    dest->ClientIDType = src->clientidtype();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    dest->BizType = src->biztype();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcPartBrokerField *dest, ctp::CThostFtdcPartBrokerField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    dest->IsActive = src->isactive();
}

void copy(CThostFtdcSuperUserField *dest, ctp::CThostFtdcSuperUserField *src)
{
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->UserName, src->username().data(), sizeof(dest->UserName));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->IsActive = src->isactive();
}

void copy(CThostFtdcSuperUserFunctionField *dest, ctp::CThostFtdcSuperUserFunctionField *src)
{
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->FunctionCode = src->functioncode();
}

void copy(CThostFtdcInvestorGroupField *dest, ctp::CThostFtdcInvestorGroupField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorGroupID, src->investorgroupid().data(), sizeof(dest->InvestorGroupID));
    strncpy(dest->InvestorGroupName, src->investorgroupname().data(), sizeof(dest->InvestorGroupName));
}

void copy(CThostFtdcTradingAccountField *dest, ctp::CThostFtdcTradingAccountField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->PreMortgage = src->premortgage();
    dest->PreCredit = src->precredit();
    dest->PreDeposit = src->predeposit();
    dest->PreBalance = src->prebalance();
    dest->PreMargin = src->premargin();
    dest->InterestBase = src->interestbase();
    dest->Interest = src->interest();
    dest->Deposit = src->deposit();
    dest->Withdraw = src->withdraw();
    dest->FrozenMargin = src->frozenmargin();
    dest->FrozenCash = src->frozencash();
    dest->FrozenCommission = src->frozencommission();
    dest->CurrMargin = src->currmargin();
    dest->CashIn = src->cashin();
    dest->Commission = src->commission();
    dest->CloseProfit = src->closeprofit();
    dest->PositionProfit = src->positionprofit();
    dest->Balance = src->balance();
    dest->Available = src->available();
    dest->WithdrawQuota = src->withdrawquota();
    dest->Reserve = src->reserve();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->Credit = src->credit();
    dest->Mortgage = src->mortgage();
    dest->ExchangeMargin = src->exchangemargin();
    dest->DeliveryMargin = src->deliverymargin();
    dest->ExchangeDeliveryMargin = src->exchangedeliverymargin();
    dest->ReserveBalance = src->reservebalance();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->PreFundMortgageIn = src->prefundmortgagein();
    dest->PreFundMortgageOut = src->prefundmortgageout();
    dest->FundMortgageIn = src->fundmortgagein();
    dest->FundMortgageOut = src->fundmortgageout();
    dest->FundMortgageAvailable = src->fundmortgageavailable();
    dest->MortgageableFund = src->mortgageablefund();
    dest->SpecProductMargin = src->specproductmargin();
    dest->SpecProductFrozenMargin = src->specproductfrozenmargin();
    dest->SpecProductCommission = src->specproductcommission();
    dest->SpecProductFrozenCommission = src->specproductfrozencommission();
    dest->SpecProductPositionProfit = src->specproductpositionprofit();
    dest->SpecProductCloseProfit = src->specproductcloseprofit();
    dest->SpecProductPositionProfitByAlg = src->specproductpositionprofitbyalg();
    dest->SpecProductExchangeMargin = src->specproductexchangemargin();
    dest->BizType = src->biztype();
    dest->FrozenSwap = src->frozenswap();
    dest->RemainSwap = src->remainswap();
}

void copy(CThostFtdcInvestorPositionField *dest, ctp::CThostFtdcInvestorPositionField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->PosiDirection = src->posidirection();
    dest->HedgeFlag = src->hedgeflag();
    dest->PositionDate = src->positiondate();
    dest->YdPosition = src->ydposition();
    dest->Position = src->position();
    dest->LongFrozen = src->longfrozen();
    dest->ShortFrozen = src->shortfrozen();
    dest->LongFrozenAmount = src->longfrozenamount();
    dest->ShortFrozenAmount = src->shortfrozenamount();
    dest->OpenVolume = src->openvolume();
    dest->CloseVolume = src->closevolume();
    dest->OpenAmount = src->openamount();
    dest->CloseAmount = src->closeamount();
    dest->PositionCost = src->positioncost();
    dest->PreMargin = src->premargin();
    dest->UseMargin = src->usemargin();
    dest->FrozenMargin = src->frozenmargin();
    dest->FrozenCash = src->frozencash();
    dest->FrozenCommission = src->frozencommission();
    dest->CashIn = src->cashin();
    dest->Commission = src->commission();
    dest->CloseProfit = src->closeprofit();
    dest->PositionProfit = src->positionprofit();
    dest->PreSettlementPrice = src->presettlementprice();
    dest->SettlementPrice = src->settlementprice();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->OpenCost = src->opencost();
    dest->ExchangeMargin = src->exchangemargin();
    dest->CombPosition = src->combposition();
    dest->CombLongFrozen = src->comblongfrozen();
    dest->CombShortFrozen = src->combshortfrozen();
    dest->CloseProfitByDate = src->closeprofitbydate();
    dest->CloseProfitByTrade = src->closeprofitbytrade();
    dest->TodayPosition = src->todayposition();
    dest->MarginRateByMoney = src->marginratebymoney();
    dest->MarginRateByVolume = src->marginratebyvolume();
    dest->StrikeFrozen = src->strikefrozen();
    dest->StrikeFrozenAmount = src->strikefrozenamount();
    dest->AbandonFrozen = src->abandonfrozen();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->YdStrikeFrozen = src->ydstrikefrozen();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    dest->PositionCostOffset = src->positioncostoffset();
}

void copy(CThostFtdcInstrumentMarginRateField *dest, ctp::CThostFtdcInstrumentMarginRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
    dest->IsRelative = src->isrelative();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcInstrumentCommissionRateField *dest, ctp::CThostFtdcInstrumentCommissionRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OpenRatioByMoney = src->openratiobymoney();
    dest->OpenRatioByVolume = src->openratiobyvolume();
    dest->CloseRatioByMoney = src->closeratiobymoney();
    dest->CloseRatioByVolume = src->closeratiobyvolume();
    dest->CloseTodayRatioByMoney = src->closetodayratiobymoney();
    dest->CloseTodayRatioByVolume = src->closetodayratiobyvolume();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->BizType = src->biztype();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcDepthMarketDataField *dest, ctp::CThostFtdcDepthMarketDataField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->LastPrice = src->lastprice();
    dest->PreSettlementPrice = src->presettlementprice();
    dest->PreClosePrice = src->precloseprice();
    dest->PreOpenInterest = src->preopeninterest();
    dest->OpenPrice = src->openprice();
    dest->HighestPrice = src->highestprice();
    dest->LowestPrice = src->lowestprice();
    dest->Volume = src->volume();
    dest->Turnover = src->turnover();
    dest->OpenInterest = src->openinterest();
    dest->ClosePrice = src->closeprice();
    dest->SettlementPrice = src->settlementprice();
    dest->UpperLimitPrice = src->upperlimitprice();
    dest->LowerLimitPrice = src->lowerlimitprice();
    dest->PreDelta = src->predelta();
    dest->CurrDelta = src->currdelta();
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    dest->UpdateMillisec = src->updatemillisec();
    dest->BidPrice1 = src->bidprice1();
    dest->BidVolume1 = src->bidvolume1();
    dest->AskPrice1 = src->askprice1();
    dest->AskVolume1 = src->askvolume1();
    dest->BidPrice2 = src->bidprice2();
    dest->BidVolume2 = src->bidvolume2();
    dest->AskPrice2 = src->askprice2();
    dest->AskVolume2 = src->askvolume2();
    dest->BidPrice3 = src->bidprice3();
    dest->BidVolume3 = src->bidvolume3();
    dest->AskPrice3 = src->askprice3();
    dest->AskVolume3 = src->askvolume3();
    dest->BidPrice4 = src->bidprice4();
    dest->BidVolume4 = src->bidvolume4();
    dest->AskPrice4 = src->askprice4();
    dest->AskVolume4 = src->askvolume4();
    dest->BidPrice5 = src->bidprice5();
    dest->BidVolume5 = src->bidvolume5();
    dest->AskPrice5 = src->askprice5();
    dest->AskVolume5 = src->askvolume5();
    dest->AveragePrice = src->averageprice();
    strncpy(dest->ActionDay, src->actionday().data(), sizeof(dest->ActionDay));
}

void copy(CThostFtdcInstrumentTradingRightField *dest, ctp::CThostFtdcInstrumentTradingRightField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->TradingRight = src->tradingright();
}

void copy(CThostFtdcBrokerUserField *dest, ctp::CThostFtdcBrokerUserField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->UserName, src->username().data(), sizeof(dest->UserName));
    dest->UserType = src->usertype();
    dest->IsActive = src->isactive();
    dest->IsUsingOTP = src->isusingotp();
    dest->IsAuthForce = src->isauthforce();
}

void copy(CThostFtdcBrokerUserPasswordField *dest, ctp::CThostFtdcBrokerUserPasswordField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->LastUpdateTime, src->lastupdatetime().data(), sizeof(dest->LastUpdateTime));
    strncpy(dest->LastLoginTime, src->lastlogintime().data(), sizeof(dest->LastLoginTime));
    strncpy(dest->ExpireDate, src->expiredate().data(), sizeof(dest->ExpireDate));
    strncpy(dest->WeakExpireDate, src->weakexpiredate().data(), sizeof(dest->WeakExpireDate));
}

void copy(CThostFtdcBrokerUserFunctionField *dest, ctp::CThostFtdcBrokerUserFunctionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->BrokerFunctionCode = src->brokerfunctioncode();
}

void copy(CThostFtdcTraderOfferField *dest, ctp::CThostFtdcTraderOfferField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    dest->TraderConnectStatus = src->traderconnectstatus();
    strncpy(dest->ConnectRequestDate, src->connectrequestdate().data(), sizeof(dest->ConnectRequestDate));
    strncpy(dest->ConnectRequestTime, src->connectrequesttime().data(), sizeof(dest->ConnectRequestTime));
    strncpy(dest->LastReportDate, src->lastreportdate().data(), sizeof(dest->LastReportDate));
    strncpy(dest->LastReportTime, src->lastreporttime().data(), sizeof(dest->LastReportTime));
    strncpy(dest->ConnectDate, src->connectdate().data(), sizeof(dest->ConnectDate));
    strncpy(dest->ConnectTime, src->connecttime().data(), sizeof(dest->ConnectTime));
    strncpy(dest->StartDate, src->startdate().data(), sizeof(dest->StartDate));
    strncpy(dest->StartTime, src->starttime().data(), sizeof(dest->StartTime));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->MaxTradeID, src->maxtradeid().data(), sizeof(dest->MaxTradeID));
    strncpy(dest->MaxOrderMessageReference, src->maxordermessagereference().data(), sizeof(dest->MaxOrderMessageReference));
}

void copy(CThostFtdcSettlementInfoField *dest, ctp::CThostFtdcSettlementInfoField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->Content, src->content().data(), sizeof(dest->Content));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcInstrumentMarginRateAdjustField *dest, ctp::CThostFtdcInstrumentMarginRateAdjustField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
    dest->IsRelative = src->isrelative();
}

void copy(CThostFtdcExchangeMarginRateField *dest, ctp::CThostFtdcExchangeMarginRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcExchangeMarginRateAdjustField *dest, ctp::CThostFtdcExchangeMarginRateAdjustField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
    dest->ExchLongMarginRatioByMoney = src->exchlongmarginratiobymoney();
    dest->ExchLongMarginRatioByVolume = src->exchlongmarginratiobyvolume();
    dest->ExchShortMarginRatioByMoney = src->exchshortmarginratiobymoney();
    dest->ExchShortMarginRatioByVolume = src->exchshortmarginratiobyvolume();
    dest->NoLongMarginRatioByMoney = src->nolongmarginratiobymoney();
    dest->NoLongMarginRatioByVolume = src->nolongmarginratiobyvolume();
    dest->NoShortMarginRatioByMoney = src->noshortmarginratiobymoney();
    dest->NoShortMarginRatioByVolume = src->noshortmarginratiobyvolume();
}

void copy(CThostFtdcExchangeRateField *dest, ctp::CThostFtdcExchangeRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->FromCurrencyID, src->fromcurrencyid().data(), sizeof(dest->FromCurrencyID));
    dest->FromCurrencyUnit = src->fromcurrencyunit();
    strncpy(dest->ToCurrencyID, src->tocurrencyid().data(), sizeof(dest->ToCurrencyID));
    dest->ExchangeRate = src->exchangerate();
}

void copy(CThostFtdcSettlementRefField *dest, ctp::CThostFtdcSettlementRefField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
}

void copy(CThostFtdcCurrentTimeField *dest, ctp::CThostFtdcCurrentTimeField *src)
{
    strncpy(dest->CurrDate, src->currdate().data(), sizeof(dest->CurrDate));
    strncpy(dest->CurrTime, src->currtime().data(), sizeof(dest->CurrTime));
    dest->CurrMillisec = src->currmillisec();
    strncpy(dest->ActionDay, src->actionday().data(), sizeof(dest->ActionDay));
}

void copy(CThostFtdcCommPhaseField *dest, ctp::CThostFtdcCommPhaseField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->CommPhaseNo = src->commphaseno();
    strncpy(dest->SystemID, src->systemid().data(), sizeof(dest->SystemID));
}

void copy(CThostFtdcLoginInfoField *dest, ctp::CThostFtdcLoginInfoField *src)
{
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->LoginDate, src->logindate().data(), sizeof(dest->LoginDate));
    strncpy(dest->LoginTime, src->logintime().data(), sizeof(dest->LoginTime));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->SystemName, src->systemname().data(), sizeof(dest->SystemName));
    strncpy(dest->PasswordDeprecated, src->passworddeprecated().data(), sizeof(dest->PasswordDeprecated));
    strncpy(dest->MaxOrderRef, src->maxorderref().data(), sizeof(dest->MaxOrderRef));
    strncpy(dest->SHFETime, src->shfetime().data(), sizeof(dest->SHFETime));
    strncpy(dest->DCETime, src->dcetime().data(), sizeof(dest->DCETime));
    strncpy(dest->CZCETime, src->czcetime().data(), sizeof(dest->CZCETime));
    strncpy(dest->FFEXTime, src->ffextime().data(), sizeof(dest->FFEXTime));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->OneTimePassword, src->onetimepassword().data(), sizeof(dest->OneTimePassword));
    strncpy(dest->INETime, src->inetime().data(), sizeof(dest->INETime));
    dest->IsQryControl = src->isqrycontrol();
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
}

void copy(CThostFtdcLogoutAllField *dest, ctp::CThostFtdcLogoutAllField *src)
{
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->SystemName, src->systemname().data(), sizeof(dest->SystemName));
}

void copy(CThostFtdcFrontStatusField *dest, ctp::CThostFtdcFrontStatusField *src)
{
    dest->FrontID = src->frontid();
    strncpy(dest->LastReportDate, src->lastreportdate().data(), sizeof(dest->LastReportDate));
    strncpy(dest->LastReportTime, src->lastreporttime().data(), sizeof(dest->LastReportTime));
    dest->IsActive = src->isactive();
}

void copy(CThostFtdcUserPasswordUpdateField *dest, ctp::CThostFtdcUserPasswordUpdateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->OldPassword, src->oldpassword().data(), sizeof(dest->OldPassword));
    strncpy(dest->NewPassword, src->newpassword().data(), sizeof(dest->NewPassword));
}

void copy(CThostFtdcInputOrderField *dest, ctp::CThostFtdcInputOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    dest->UserForceClose = src->userforceclose();
    dest->IsSwapOrder = src->isswaporder();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcOrderField *dest, ctp::CThostFtdcOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->OrderSource = src->ordersource();
    dest->OrderStatus = src->orderstatus();
    dest->OrderType = src->ordertype();
    dest->VolumeTraded = src->volumetraded();
    dest->VolumeTotal = src->volumetotal();
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->ActiveTime, src->activetime().data(), sizeof(dest->ActiveTime));
    strncpy(dest->SuspendTime, src->suspendtime().data(), sizeof(dest->SuspendTime));
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    strncpy(dest->ActiveTraderID, src->activetraderid().data(), sizeof(dest->ActiveTraderID));
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    dest->UserForceClose = src->userforceclose();
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerOrderSeq = src->brokerorderseq();
    strncpy(dest->RelativeOrderSysID, src->relativeordersysid().data(), sizeof(dest->RelativeOrderSysID));
    dest->ZCETotalTradedVolume = src->zcetotaltradedvolume();
    dest->IsSwapOrder = src->isswaporder();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExchangeOrderField *dest, ctp::CThostFtdcExchangeOrderField *src)
{
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->OrderSource = src->ordersource();
    dest->OrderStatus = src->orderstatus();
    dest->OrderType = src->ordertype();
    dest->VolumeTraded = src->volumetraded();
    dest->VolumeTotal = src->volumetotal();
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->ActiveTime, src->activetime().data(), sizeof(dest->ActiveTime));
    strncpy(dest->SuspendTime, src->suspendtime().data(), sizeof(dest->SuspendTime));
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    strncpy(dest->ActiveTraderID, src->activetraderid().data(), sizeof(dest->ActiveTraderID));
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExchangeOrderInsertErrorField *dest, ctp::CThostFtdcExchangeOrderInsertErrorField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcInputOrderActionField *dest, ctp::CThostFtdcInputOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->ActionFlag = src->actionflag();
    dest->LimitPrice = src->limitprice();
    dest->VolumeChange = src->volumechange();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcOrderActionField *dest, ctp::CThostFtdcOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->ActionFlag = src->actionflag();
    dest->LimitPrice = src->limitprice();
    dest->VolumeChange = src->volumechange();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExchangeOrderActionField *dest, ctp::CThostFtdcExchangeOrderActionField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->ActionFlag = src->actionflag();
    dest->LimitPrice = src->limitprice();
    dest->VolumeChange = src->volumechange();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExchangeOrderActionErrorField *dest, ctp::CThostFtdcExchangeOrderActionErrorField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcExchangeTradeField *dest, ctp::CThostFtdcExchangeTradeField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TradeID, src->tradeid().data(), sizeof(dest->TradeID));
    dest->Direction = src->direction();
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    dest->TradingRole = src->tradingrole();
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->Price = src->price();
    dest->Volume = src->volume();
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    dest->TradeType = src->tradetype();
    dest->PriceSource = src->pricesource();
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->SequenceNo = src->sequenceno();
    dest->TradeSource = src->tradesource();
}

void copy(CThostFtdcTradeField *dest, ctp::CThostFtdcTradeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TradeID, src->tradeid().data(), sizeof(dest->TradeID));
    dest->Direction = src->direction();
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    dest->TradingRole = src->tradingrole();
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->Price = src->price();
    dest->Volume = src->volume();
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    dest->TradeType = src->tradetype();
    dest->PriceSource = src->pricesource();
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->BrokerOrderSeq = src->brokerorderseq();
    dest->TradeSource = src->tradesource();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcUserSessionField *dest, ctp::CThostFtdcUserSessionField *src)
{
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->LoginDate, src->logindate().data(), sizeof(dest->LoginDate));
    strncpy(dest->LoginTime, src->logintime().data(), sizeof(dest->LoginTime));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
}

void copy(CThostFtdcQueryMaxOrderVolumeField *dest, ctp::CThostFtdcQueryMaxOrderVolumeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->Direction = src->direction();
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->MaxVolume = src->maxvolume();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcSettlementInfoConfirmField *dest, ctp::CThostFtdcSettlementInfoConfirmField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ConfirmDate, src->confirmdate().data(), sizeof(dest->ConfirmDate));
    strncpy(dest->ConfirmTime, src->confirmtime().data(), sizeof(dest->ConfirmTime));
    dest->SettlementID = src->settlementid();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcSyncDepositField *dest, ctp::CThostFtdcSyncDepositField *src)
{
    strncpy(dest->DepositSeqNo, src->depositseqno().data(), sizeof(dest->DepositSeqNo));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Deposit = src->deposit();
    dest->IsForce = src->isforce();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcSyncFundMortgageField *dest, ctp::CThostFtdcSyncFundMortgageField *src)
{
    strncpy(dest->MortgageSeqNo, src->mortgageseqno().data(), sizeof(dest->MortgageSeqNo));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->FromCurrencyID, src->fromcurrencyid().data(), sizeof(dest->FromCurrencyID));
    dest->MortgageAmount = src->mortgageamount();
    strncpy(dest->ToCurrencyID, src->tocurrencyid().data(), sizeof(dest->ToCurrencyID));
}

void copy(CThostFtdcBrokerSyncField *dest, ctp::CThostFtdcBrokerSyncField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcSyncingInvestorField *dest, ctp::CThostFtdcSyncingInvestorField *src)
{
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorGroupID, src->investorgroupid().data(), sizeof(dest->InvestorGroupID));
    strncpy(dest->InvestorName, src->investorname().data(), sizeof(dest->InvestorName));
    dest->IdentifiedCardType = src->identifiedcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->IsActive = src->isactive();
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->Mobile, src->mobile().data(), sizeof(dest->Mobile));
    strncpy(dest->CommModelID, src->commmodelid().data(), sizeof(dest->CommModelID));
    strncpy(dest->MarginModelID, src->marginmodelid().data(), sizeof(dest->MarginModelID));
}

void copy(CThostFtdcSyncingTradingCodeField *dest, ctp::CThostFtdcSyncingTradingCodeField *src)
{
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    dest->IsActive = src->isactive();
    dest->ClientIDType = src->clientidtype();
}

void copy(CThostFtdcSyncingInvestorGroupField *dest, ctp::CThostFtdcSyncingInvestorGroupField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorGroupID, src->investorgroupid().data(), sizeof(dest->InvestorGroupID));
    strncpy(dest->InvestorGroupName, src->investorgroupname().data(), sizeof(dest->InvestorGroupName));
}

void copy(CThostFtdcSyncingTradingAccountField *dest, ctp::CThostFtdcSyncingTradingAccountField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->PreMortgage = src->premortgage();
    dest->PreCredit = src->precredit();
    dest->PreDeposit = src->predeposit();
    dest->PreBalance = src->prebalance();
    dest->PreMargin = src->premargin();
    dest->InterestBase = src->interestbase();
    dest->Interest = src->interest();
    dest->Deposit = src->deposit();
    dest->Withdraw = src->withdraw();
    dest->FrozenMargin = src->frozenmargin();
    dest->FrozenCash = src->frozencash();
    dest->FrozenCommission = src->frozencommission();
    dest->CurrMargin = src->currmargin();
    dest->CashIn = src->cashin();
    dest->Commission = src->commission();
    dest->CloseProfit = src->closeprofit();
    dest->PositionProfit = src->positionprofit();
    dest->Balance = src->balance();
    dest->Available = src->available();
    dest->WithdrawQuota = src->withdrawquota();
    dest->Reserve = src->reserve();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->Credit = src->credit();
    dest->Mortgage = src->mortgage();
    dest->ExchangeMargin = src->exchangemargin();
    dest->DeliveryMargin = src->deliverymargin();
    dest->ExchangeDeliveryMargin = src->exchangedeliverymargin();
    dest->ReserveBalance = src->reservebalance();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->PreFundMortgageIn = src->prefundmortgagein();
    dest->PreFundMortgageOut = src->prefundmortgageout();
    dest->FundMortgageIn = src->fundmortgagein();
    dest->FundMortgageOut = src->fundmortgageout();
    dest->FundMortgageAvailable = src->fundmortgageavailable();
    dest->MortgageableFund = src->mortgageablefund();
    dest->SpecProductMargin = src->specproductmargin();
    dest->SpecProductFrozenMargin = src->specproductfrozenmargin();
    dest->SpecProductCommission = src->specproductcommission();
    dest->SpecProductFrozenCommission = src->specproductfrozencommission();
    dest->SpecProductPositionProfit = src->specproductpositionprofit();
    dest->SpecProductCloseProfit = src->specproductcloseprofit();
    dest->SpecProductPositionProfitByAlg = src->specproductpositionprofitbyalg();
    dest->SpecProductExchangeMargin = src->specproductexchangemargin();
    dest->FrozenSwap = src->frozenswap();
    dest->RemainSwap = src->remainswap();
}

void copy(CThostFtdcSyncingInvestorPositionField *dest, ctp::CThostFtdcSyncingInvestorPositionField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->PosiDirection = src->posidirection();
    dest->HedgeFlag = src->hedgeflag();
    dest->PositionDate = src->positiondate();
    dest->YdPosition = src->ydposition();
    dest->Position = src->position();
    dest->LongFrozen = src->longfrozen();
    dest->ShortFrozen = src->shortfrozen();
    dest->LongFrozenAmount = src->longfrozenamount();
    dest->ShortFrozenAmount = src->shortfrozenamount();
    dest->OpenVolume = src->openvolume();
    dest->CloseVolume = src->closevolume();
    dest->OpenAmount = src->openamount();
    dest->CloseAmount = src->closeamount();
    dest->PositionCost = src->positioncost();
    dest->PreMargin = src->premargin();
    dest->UseMargin = src->usemargin();
    dest->FrozenMargin = src->frozenmargin();
    dest->FrozenCash = src->frozencash();
    dest->FrozenCommission = src->frozencommission();
    dest->CashIn = src->cashin();
    dest->Commission = src->commission();
    dest->CloseProfit = src->closeprofit();
    dest->PositionProfit = src->positionprofit();
    dest->PreSettlementPrice = src->presettlementprice();
    dest->SettlementPrice = src->settlementprice();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->OpenCost = src->opencost();
    dest->ExchangeMargin = src->exchangemargin();
    dest->CombPosition = src->combposition();
    dest->CombLongFrozen = src->comblongfrozen();
    dest->CombShortFrozen = src->combshortfrozen();
    dest->CloseProfitByDate = src->closeprofitbydate();
    dest->CloseProfitByTrade = src->closeprofitbytrade();
    dest->TodayPosition = src->todayposition();
    dest->MarginRateByMoney = src->marginratebymoney();
    dest->MarginRateByVolume = src->marginratebyvolume();
    dest->StrikeFrozen = src->strikefrozen();
    dest->StrikeFrozenAmount = src->strikefrozenamount();
    dest->AbandonFrozen = src->abandonfrozen();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->YdStrikeFrozen = src->ydstrikefrozen();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    dest->PositionCostOffset = src->positioncostoffset();
}

void copy(CThostFtdcSyncingInstrumentMarginRateField *dest, ctp::CThostFtdcSyncingInstrumentMarginRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
    dest->IsRelative = src->isrelative();
}

void copy(CThostFtdcSyncingInstrumentCommissionRateField *dest, ctp::CThostFtdcSyncingInstrumentCommissionRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OpenRatioByMoney = src->openratiobymoney();
    dest->OpenRatioByVolume = src->openratiobyvolume();
    dest->CloseRatioByMoney = src->closeratiobymoney();
    dest->CloseRatioByVolume = src->closeratiobyvolume();
    dest->CloseTodayRatioByMoney = src->closetodayratiobymoney();
    dest->CloseTodayRatioByVolume = src->closetodayratiobyvolume();
}

void copy(CThostFtdcSyncingInstrumentTradingRightField *dest, ctp::CThostFtdcSyncingInstrumentTradingRightField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->TradingRight = src->tradingright();
}

void copy(CThostFtdcQryOrderField *dest, ctp::CThostFtdcQryOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryTradeField *dest, ctp::CThostFtdcQryTradeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TradeID, src->tradeid().data(), sizeof(dest->TradeID));
    strncpy(dest->TradeTimeStart, src->tradetimestart().data(), sizeof(dest->TradeTimeStart));
    strncpy(dest->TradeTimeEnd, src->tradetimeend().data(), sizeof(dest->TradeTimeEnd));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInvestorPositionField *dest, ctp::CThostFtdcQryInvestorPositionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryTradingAccountField *dest, ctp::CThostFtdcQryTradingAccountField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->BizType = src->biztype();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
}

void copy(CThostFtdcQryInvestorField *dest, ctp::CThostFtdcQryInvestorField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcQryTradingCodeField *dest, ctp::CThostFtdcQryTradingCodeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    dest->ClientIDType = src->clientidtype();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInvestorGroupField *dest, ctp::CThostFtdcQryInvestorGroupField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcQryInstrumentMarginRateField *dest, ctp::CThostFtdcQryInstrumentMarginRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInstrumentCommissionRateField *dest, ctp::CThostFtdcQryInstrumentCommissionRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInstrumentTradingRightField *dest, ctp::CThostFtdcQryInstrumentTradingRightField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcQryBrokerField *dest, ctp::CThostFtdcQryBrokerField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcQryTraderField *dest, ctp::CThostFtdcQryTraderField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQrySuperUserFunctionField *dest, ctp::CThostFtdcQrySuperUserFunctionField *src)
{
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcQryUserSessionField *dest, ctp::CThostFtdcQryUserSessionField *src)
{
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcQryPartBrokerField *dest, ctp::CThostFtdcQryPartBrokerField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
}

void copy(CThostFtdcQryFrontStatusField *dest, ctp::CThostFtdcQryFrontStatusField *src)
{
    dest->FrontID = src->frontid();
}

void copy(CThostFtdcQryExchangeOrderField *dest, ctp::CThostFtdcQryExchangeOrderField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQryOrderActionField *dest, ctp::CThostFtdcQryOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryExchangeOrderActionField *dest, ctp::CThostFtdcQryExchangeOrderActionField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQrySuperUserField *dest, ctp::CThostFtdcQrySuperUserField *src)
{
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcQryExchangeField *dest, ctp::CThostFtdcQryExchangeField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryProductField *dest, ctp::CThostFtdcQryProductField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    dest->ProductClass = src->productclass();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryInstrumentField *dest, ctp::CThostFtdcQryInstrumentField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
}

void copy(CThostFtdcQryDepthMarketDataField *dest, ctp::CThostFtdcQryDepthMarketDataField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryBrokerUserField *dest, ctp::CThostFtdcQryBrokerUserField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcQryBrokerUserFunctionField *dest, ctp::CThostFtdcQryBrokerUserFunctionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcQryTraderOfferField *dest, ctp::CThostFtdcQryTraderOfferField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQrySyncDepositField *dest, ctp::CThostFtdcQrySyncDepositField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->DepositSeqNo, src->depositseqno().data(), sizeof(dest->DepositSeqNo));
}

void copy(CThostFtdcQrySettlementInfoField *dest, ctp::CThostFtdcQrySettlementInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcQryExchangeMarginRateField *dest, ctp::CThostFtdcQryExchangeMarginRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryExchangeMarginRateAdjustField *dest, ctp::CThostFtdcQryExchangeMarginRateAdjustField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
}

void copy(CThostFtdcQryExchangeRateField *dest, ctp::CThostFtdcQryExchangeRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->FromCurrencyID, src->fromcurrencyid().data(), sizeof(dest->FromCurrencyID));
    strncpy(dest->ToCurrencyID, src->tocurrencyid().data(), sizeof(dest->ToCurrencyID));
}

void copy(CThostFtdcQrySyncFundMortgageField *dest, ctp::CThostFtdcQrySyncFundMortgageField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->MortgageSeqNo, src->mortgageseqno().data(), sizeof(dest->MortgageSeqNo));
}

void copy(CThostFtdcQryHisOrderField *dest, ctp::CThostFtdcQryHisOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
}

void copy(CThostFtdcOptionInstrMiniMarginField *dest, ctp::CThostFtdcOptionInstrMiniMarginField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->MinMargin = src->minmargin();
    dest->ValueMethod = src->valuemethod();
    dest->IsRelative = src->isrelative();
}

void copy(CThostFtdcOptionInstrMarginAdjustField *dest, ctp::CThostFtdcOptionInstrMarginAdjustField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->SShortMarginRatioByMoney = src->sshortmarginratiobymoney();
    dest->SShortMarginRatioByVolume = src->sshortmarginratiobyvolume();
    dest->HShortMarginRatioByMoney = src->hshortmarginratiobymoney();
    dest->HShortMarginRatioByVolume = src->hshortmarginratiobyvolume();
    dest->AShortMarginRatioByMoney = src->ashortmarginratiobymoney();
    dest->AShortMarginRatioByVolume = src->ashortmarginratiobyvolume();
    dest->IsRelative = src->isrelative();
    dest->MShortMarginRatioByMoney = src->mshortmarginratiobymoney();
    dest->MShortMarginRatioByVolume = src->mshortmarginratiobyvolume();
}

void copy(CThostFtdcOptionInstrCommRateField *dest, ctp::CThostFtdcOptionInstrCommRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OpenRatioByMoney = src->openratiobymoney();
    dest->OpenRatioByVolume = src->openratiobyvolume();
    dest->CloseRatioByMoney = src->closeratiobymoney();
    dest->CloseRatioByVolume = src->closeratiobyvolume();
    dest->CloseTodayRatioByMoney = src->closetodayratiobymoney();
    dest->CloseTodayRatioByVolume = src->closetodayratiobyvolume();
    dest->StrikeRatioByMoney = src->strikeratiobymoney();
    dest->StrikeRatioByVolume = src->strikeratiobyvolume();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcOptionInstrTradeCostField *dest, ctp::CThostFtdcOptionInstrTradeCostField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    dest->FixedMargin = src->fixedmargin();
    dest->MiniMargin = src->minimargin();
    dest->Royalty = src->royalty();
    dest->ExchFixedMargin = src->exchfixedmargin();
    dest->ExchMiniMargin = src->exchminimargin();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryOptionInstrTradeCostField *dest, ctp::CThostFtdcQryOptionInstrTradeCostField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    dest->InputPrice = src->inputprice();
    dest->UnderlyingPrice = src->underlyingprice();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryOptionInstrCommRateField *dest, ctp::CThostFtdcQryOptionInstrCommRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcIndexPriceField *dest, ctp::CThostFtdcIndexPriceField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->ClosePrice = src->closeprice();
}

void copy(CThostFtdcInputExecOrderField *dest, ctp::CThostFtdcInputExecOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->ActionType = src->actiontype();
    dest->PosiDirection = src->posidirection();
    dest->ReservePositionFlag = src->reservepositionflag();
    dest->CloseFlag = src->closeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcInputExecOrderActionField *dest, ctp::CThostFtdcInputExecOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->ExecOrderActionRef = src->execorderactionref();
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExecOrderField *dest, ctp::CThostFtdcExecOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->ActionType = src->actiontype();
    dest->PosiDirection = src->posidirection();
    dest->ReservePositionFlag = src->reservepositionflag();
    dest->CloseFlag = src->closeflag();
    strncpy(dest->ExecOrderLocalID, src->execorderlocalid().data(), sizeof(dest->ExecOrderLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->ExecResult = src->execresult();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerExecOrderSeq = src->brokerexecorderseq();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExecOrderActionField *dest, ctp::CThostFtdcExecOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->ExecOrderActionRef = src->execorderactionref();
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->ExecOrderLocalID, src->execorderlocalid().data(), sizeof(dest->ExecOrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->ActionType = src->actiontype();
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryExecOrderField *dest, ctp::CThostFtdcQryExecOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
}

void copy(CThostFtdcExchangeExecOrderField *dest, ctp::CThostFtdcExchangeExecOrderField *src)
{
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->ActionType = src->actiontype();
    dest->PosiDirection = src->posidirection();
    dest->ReservePositionFlag = src->reservepositionflag();
    dest->CloseFlag = src->closeflag();
    strncpy(dest->ExecOrderLocalID, src->execorderlocalid().data(), sizeof(dest->ExecOrderLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->ExecResult = src->execresult();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryExchangeExecOrderField *dest, ctp::CThostFtdcQryExchangeExecOrderField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQryExecOrderActionField *dest, ctp::CThostFtdcQryExecOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcExchangeExecOrderActionField *dest, ctp::CThostFtdcExchangeExecOrderActionField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->ExecOrderLocalID, src->execorderlocalid().data(), sizeof(dest->ExecOrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->ActionType = src->actiontype();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->Volume = src->volume();
}

void copy(CThostFtdcQryExchangeExecOrderActionField *dest, ctp::CThostFtdcQryExchangeExecOrderActionField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcErrExecOrderField *dest, ctp::CThostFtdcErrExecOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->ActionType = src->actiontype();
    dest->PosiDirection = src->posidirection();
    dest->ReservePositionFlag = src->reservepositionflag();
    dest->CloseFlag = src->closeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcQryErrExecOrderField *dest, ctp::CThostFtdcQryErrExecOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcErrExecOrderActionField *dest, ctp::CThostFtdcErrExecOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->ExecOrderActionRef = src->execorderactionref();
    strncpy(dest->ExecOrderRef, src->execorderref().data(), sizeof(dest->ExecOrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExecOrderSysID, src->execordersysid().data(), sizeof(dest->ExecOrderSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcQryErrExecOrderActionField *dest, ctp::CThostFtdcQryErrExecOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcOptionInstrTradingRightField *dest, ctp::CThostFtdcOptionInstrTradingRightField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Direction = src->direction();
    dest->TradingRight = src->tradingright();
}

void copy(CThostFtdcQryOptionInstrTradingRightField *dest, ctp::CThostFtdcQryOptionInstrTradingRightField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->Direction = src->direction();
}

void copy(CThostFtdcInputForQuoteField *dest, ctp::CThostFtdcInputForQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ForQuoteRef, src->forquoteref().data(), sizeof(dest->ForQuoteRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcForQuoteField *dest, ctp::CThostFtdcForQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ForQuoteRef, src->forquoteref().data(), sizeof(dest->ForQuoteRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->ForQuoteLocalID, src->forquotelocalid().data(), sizeof(dest->ForQuoteLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    dest->ForQuoteStatus = src->forquotestatus();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerForQutoSeq = src->brokerforqutoseq();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryForQuoteField *dest, ctp::CThostFtdcQryForQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcExchangeForQuoteField *dest, ctp::CThostFtdcExchangeForQuoteField *src)
{
    strncpy(dest->ForQuoteLocalID, src->forquotelocalid().data(), sizeof(dest->ForQuoteLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    dest->ForQuoteStatus = src->forquotestatus();
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryExchangeForQuoteField *dest, ctp::CThostFtdcQryExchangeForQuoteField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcInputQuoteField *dest, ctp::CThostFtdcInputQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->QuoteRef, src->quoteref().data(), sizeof(dest->QuoteRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->AskPrice = src->askprice();
    dest->BidPrice = src->bidprice();
    dest->AskVolume = src->askvolume();
    dest->BidVolume = src->bidvolume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->AskOffsetFlag = src->askoffsetflag();
    dest->BidOffsetFlag = src->bidoffsetflag();
    dest->AskHedgeFlag = src->askhedgeflag();
    dest->BidHedgeFlag = src->bidhedgeflag();
    strncpy(dest->AskOrderRef, src->askorderref().data(), sizeof(dest->AskOrderRef));
    strncpy(dest->BidOrderRef, src->bidorderref().data(), sizeof(dest->BidOrderRef));
    strncpy(dest->ForQuoteSysID, src->forquotesysid().data(), sizeof(dest->ForQuoteSysID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcInputQuoteActionField *dest, ctp::CThostFtdcInputQuoteActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->QuoteActionRef = src->quoteactionref();
    strncpy(dest->QuoteRef, src->quoteref().data(), sizeof(dest->QuoteRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQuoteField *dest, ctp::CThostFtdcQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->QuoteRef, src->quoteref().data(), sizeof(dest->QuoteRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->AskPrice = src->askprice();
    dest->BidPrice = src->bidprice();
    dest->AskVolume = src->askvolume();
    dest->BidVolume = src->bidvolume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->AskOffsetFlag = src->askoffsetflag();
    dest->BidOffsetFlag = src->bidoffsetflag();
    dest->AskHedgeFlag = src->askhedgeflag();
    dest->BidHedgeFlag = src->bidhedgeflag();
    strncpy(dest->QuoteLocalID, src->quotelocalid().data(), sizeof(dest->QuoteLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->NotifySequence = src->notifysequence();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->QuoteStatus = src->quotestatus();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->AskOrderSysID, src->askordersysid().data(), sizeof(dest->AskOrderSysID));
    strncpy(dest->BidOrderSysID, src->bidordersysid().data(), sizeof(dest->BidOrderSysID));
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerQuoteSeq = src->brokerquoteseq();
    strncpy(dest->AskOrderRef, src->askorderref().data(), sizeof(dest->AskOrderRef));
    strncpy(dest->BidOrderRef, src->bidorderref().data(), sizeof(dest->BidOrderRef));
    strncpy(dest->ForQuoteSysID, src->forquotesysid().data(), sizeof(dest->ForQuoteSysID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQuoteActionField *dest, ctp::CThostFtdcQuoteActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->QuoteActionRef = src->quoteactionref();
    strncpy(dest->QuoteRef, src->quoteref().data(), sizeof(dest->QuoteRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->QuoteLocalID, src->quotelocalid().data(), sizeof(dest->QuoteLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryQuoteField *dest, ctp::CThostFtdcQryQuoteField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcExchangeQuoteField *dest, ctp::CThostFtdcExchangeQuoteField *src)
{
    dest->AskPrice = src->askprice();
    dest->BidPrice = src->bidprice();
    dest->AskVolume = src->askvolume();
    dest->BidVolume = src->bidvolume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->AskOffsetFlag = src->askoffsetflag();
    dest->BidOffsetFlag = src->bidoffsetflag();
    dest->AskHedgeFlag = src->askhedgeflag();
    dest->BidHedgeFlag = src->bidhedgeflag();
    strncpy(dest->QuoteLocalID, src->quotelocalid().data(), sizeof(dest->QuoteLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->NotifySequence = src->notifysequence();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->QuoteStatus = src->quotestatus();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->AskOrderSysID, src->askordersysid().data(), sizeof(dest->AskOrderSysID));
    strncpy(dest->BidOrderSysID, src->bidordersysid().data(), sizeof(dest->BidOrderSysID));
    strncpy(dest->ForQuoteSysID, src->forquotesysid().data(), sizeof(dest->ForQuoteSysID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryExchangeQuoteField *dest, ctp::CThostFtdcQryExchangeQuoteField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQryQuoteActionField *dest, ctp::CThostFtdcQryQuoteActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcExchangeQuoteActionField *dest, ctp::CThostFtdcExchangeQuoteActionField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->QuoteSysID, src->quotesysid().data(), sizeof(dest->QuoteSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->QuoteLocalID, src->quotelocalid().data(), sizeof(dest->QuoteLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryExchangeQuoteActionField *dest, ctp::CThostFtdcQryExchangeQuoteActionField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcOptionInstrDeltaField *dest, ctp::CThostFtdcOptionInstrDeltaField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Delta = src->delta();
}

void copy(CThostFtdcForQuoteRspField *dest, ctp::CThostFtdcForQuoteRspField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ForQuoteSysID, src->forquotesysid().data(), sizeof(dest->ForQuoteSysID));
    strncpy(dest->ForQuoteTime, src->forquotetime().data(), sizeof(dest->ForQuoteTime));
    strncpy(dest->ActionDay, src->actionday().data(), sizeof(dest->ActionDay));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcStrikeOffsetField *dest, ctp::CThostFtdcStrikeOffsetField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Offset = src->offset();
    dest->OffsetType = src->offsettype();
}

void copy(CThostFtdcQryStrikeOffsetField *dest, ctp::CThostFtdcQryStrikeOffsetField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcInputBatchOrderActionField *dest, ctp::CThostFtdcInputBatchOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcBatchOrderActionField *dest, ctp::CThostFtdcBatchOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcExchangeBatchOrderActionField *dest, ctp::CThostFtdcExchangeBatchOrderActionField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryBatchOrderActionField *dest, ctp::CThostFtdcQryBatchOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcCombInstrumentGuardField *dest, ctp::CThostFtdcCombInstrumentGuardField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->GuarantRatio = src->guarantratio();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryCombInstrumentGuardField *dest, ctp::CThostFtdcQryCombInstrumentGuardField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcInputCombActionField *dest, ctp::CThostFtdcInputCombActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->CombActionRef, src->combactionref().data(), sizeof(dest->CombActionRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Direction = src->direction();
    dest->Volume = src->volume();
    dest->CombDirection = src->combdirection();
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcCombActionField *dest, ctp::CThostFtdcCombActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->CombActionRef, src->combactionref().data(), sizeof(dest->CombActionRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Direction = src->direction();
    dest->Volume = src->volume();
    dest->CombDirection = src->combdirection();
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->ActionStatus = src->actionstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->SequenceNo = src->sequenceno();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ComTradeID, src->comtradeid().data(), sizeof(dest->ComTradeID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryCombActionField *dest, ctp::CThostFtdcQryCombActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcExchangeCombActionField *dest, ctp::CThostFtdcExchangeCombActionField *src)
{
    dest->Direction = src->direction();
    dest->Volume = src->volume();
    dest->CombDirection = src->combdirection();
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->ActionStatus = src->actionstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ComTradeID, src->comtradeid().data(), sizeof(dest->ComTradeID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
}

void copy(CThostFtdcQryExchangeCombActionField *dest, ctp::CThostFtdcQryExchangeCombActionField *src)
{
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcProductExchRateField *dest, ctp::CThostFtdcProductExchRateField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    strncpy(dest->QuoteCurrencyID, src->quotecurrencyid().data(), sizeof(dest->QuoteCurrencyID));
    dest->ExchangeRate = src->exchangerate();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryProductExchRateField *dest, ctp::CThostFtdcQryProductExchRateField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcQryForQuoteParamField *dest, ctp::CThostFtdcQryForQuoteParamField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcForQuoteParamField *dest, ctp::CThostFtdcForQuoteParamField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->LastPrice = src->lastprice();
    dest->PriceInterval = src->priceinterval();
}

void copy(CThostFtdcMMOptionInstrCommRateField *dest, ctp::CThostFtdcMMOptionInstrCommRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OpenRatioByMoney = src->openratiobymoney();
    dest->OpenRatioByVolume = src->openratiobyvolume();
    dest->CloseRatioByMoney = src->closeratiobymoney();
    dest->CloseRatioByVolume = src->closeratiobyvolume();
    dest->CloseTodayRatioByMoney = src->closetodayratiobymoney();
    dest->CloseTodayRatioByVolume = src->closetodayratiobyvolume();
    dest->StrikeRatioByMoney = src->strikeratiobymoney();
    dest->StrikeRatioByVolume = src->strikeratiobyvolume();
}

void copy(CThostFtdcQryMMOptionInstrCommRateField *dest, ctp::CThostFtdcQryMMOptionInstrCommRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcMMInstrumentCommissionRateField *dest, ctp::CThostFtdcMMInstrumentCommissionRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OpenRatioByMoney = src->openratiobymoney();
    dest->OpenRatioByVolume = src->openratiobyvolume();
    dest->CloseRatioByMoney = src->closeratiobymoney();
    dest->CloseRatioByVolume = src->closeratiobyvolume();
    dest->CloseTodayRatioByMoney = src->closetodayratiobymoney();
    dest->CloseTodayRatioByVolume = src->closetodayratiobyvolume();
}

void copy(CThostFtdcQryMMInstrumentCommissionRateField *dest, ctp::CThostFtdcQryMMInstrumentCommissionRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcInstrumentOrderCommRateField *dest, ctp::CThostFtdcInstrumentOrderCommRateField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->OrderCommByVolume = src->ordercommbyvolume();
    dest->OrderActionCommByVolume = src->orderactioncommbyvolume();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInstrumentOrderCommRateField *dest, ctp::CThostFtdcQryInstrumentOrderCommRateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcTradeParamField *dest, ctp::CThostFtdcTradeParamField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->TradeParamID = src->tradeparamid();
    strncpy(dest->TradeParamValue, src->tradeparamvalue().data(), sizeof(dest->TradeParamValue));
    strncpy(dest->Memo, src->memo().data(), sizeof(dest->Memo));
}

void copy(CThostFtdcInstrumentMarginRateULField *dest, ctp::CThostFtdcInstrumentMarginRateULField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->LongMarginRatioByMoney = src->longmarginratiobymoney();
    dest->LongMarginRatioByVolume = src->longmarginratiobyvolume();
    dest->ShortMarginRatioByMoney = src->shortmarginratiobymoney();
    dest->ShortMarginRatioByVolume = src->shortmarginratiobyvolume();
}

void copy(CThostFtdcFutureLimitPosiParamField *dest, ctp::CThostFtdcFutureLimitPosiParamField *src)
{
    dest->InvestorRange = src->investorrange();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    dest->SpecOpenVolume = src->specopenvolume();
    dest->ArbiOpenVolume = src->arbiopenvolume();
    dest->OpenVolume = src->openvolume();
}

void copy(CThostFtdcLoginForbiddenIPField *dest, ctp::CThostFtdcLoginForbiddenIPField *src)
{
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
}

void copy(CThostFtdcIPListField *dest, ctp::CThostFtdcIPListField *src)
{
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    dest->IsWhite = src->iswhite();
}

void copy(CThostFtdcInputOptionSelfCloseField *dest, ctp::CThostFtdcInputOptionSelfCloseField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OptionSelfCloseRef, src->optionselfcloseref().data(), sizeof(dest->OptionSelfCloseRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->HedgeFlag = src->hedgeflag();
    dest->OptSelfCloseFlag = src->optselfcloseflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcInputOptionSelfCloseActionField *dest, ctp::CThostFtdcInputOptionSelfCloseActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OptionSelfCloseActionRef = src->optionselfcloseactionref();
    strncpy(dest->OptionSelfCloseRef, src->optionselfcloseref().data(), sizeof(dest->OptionSelfCloseRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcOptionSelfCloseField *dest, ctp::CThostFtdcOptionSelfCloseField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OptionSelfCloseRef, src->optionselfcloseref().data(), sizeof(dest->OptionSelfCloseRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->HedgeFlag = src->hedgeflag();
    dest->OptSelfCloseFlag = src->optselfcloseflag();
    strncpy(dest->OptionSelfCloseLocalID, src->optionselfcloselocalid().data(), sizeof(dest->OptionSelfCloseLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->ExecResult = src->execresult();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerOptionSelfCloseSeq = src->brokeroptionselfcloseseq();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcOptionSelfCloseActionField *dest, ctp::CThostFtdcOptionSelfCloseActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OptionSelfCloseActionRef = src->optionselfcloseactionref();
    strncpy(dest->OptionSelfCloseRef, src->optionselfcloseref().data(), sizeof(dest->OptionSelfCloseRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OptionSelfCloseLocalID, src->optionselfcloselocalid().data(), sizeof(dest->OptionSelfCloseLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryOptionSelfCloseField *dest, ctp::CThostFtdcQryOptionSelfCloseField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    strncpy(dest->InsertTimeStart, src->inserttimestart().data(), sizeof(dest->InsertTimeStart));
    strncpy(dest->InsertTimeEnd, src->inserttimeend().data(), sizeof(dest->InsertTimeEnd));
}

void copy(CThostFtdcExchangeOptionSelfCloseField *dest, ctp::CThostFtdcExchangeOptionSelfCloseField *src)
{
    dest->Volume = src->volume();
    dest->RequestID = src->requestid();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->HedgeFlag = src->hedgeflag();
    dest->OptSelfCloseFlag = src->optselfcloseflag();
    strncpy(dest->OptionSelfCloseLocalID, src->optionselfcloselocalid().data(), sizeof(dest->OptionSelfCloseLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    dest->ExecResult = src->execresult();
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryOptionSelfCloseActionField *dest, ctp::CThostFtdcQryOptionSelfCloseActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcExchangeOptionSelfCloseActionField *dest, ctp::CThostFtdcExchangeOptionSelfCloseActionField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OptionSelfCloseSysID, src->optionselfclosesysid().data(), sizeof(dest->OptionSelfCloseSysID));
    dest->ActionFlag = src->actionflag();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OptionSelfCloseLocalID, src->optionselfcloselocalid().data(), sizeof(dest->OptionSelfCloseLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->OptSelfCloseFlag = src->optselfcloseflag();
}

void copy(CThostFtdcSyncDelaySwapField *dest, ctp::CThostFtdcSyncDelaySwapField *src)
{
    strncpy(dest->DelaySwapSeqNo, src->delayswapseqno().data(), sizeof(dest->DelaySwapSeqNo));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->FromCurrencyID, src->fromcurrencyid().data(), sizeof(dest->FromCurrencyID));
    dest->FromAmount = src->fromamount();
    dest->FromFrozenSwap = src->fromfrozenswap();
    dest->FromRemainSwap = src->fromremainswap();
    strncpy(dest->ToCurrencyID, src->tocurrencyid().data(), sizeof(dest->ToCurrencyID));
    dest->ToAmount = src->toamount();
}

void copy(CThostFtdcQrySyncDelaySwapField *dest, ctp::CThostFtdcQrySyncDelaySwapField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->DelaySwapSeqNo, src->delayswapseqno().data(), sizeof(dest->DelaySwapSeqNo));
}

void copy(CThostFtdcInvestUnitField *dest, ctp::CThostFtdcInvestUnitField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->InvestorUnitName, src->investorunitname().data(), sizeof(dest->InvestorUnitName));
    strncpy(dest->InvestorGroupID, src->investorgroupid().data(), sizeof(dest->InvestorGroupID));
    strncpy(dest->CommModelID, src->commmodelid().data(), sizeof(dest->CommModelID));
    strncpy(dest->MarginModelID, src->marginmodelid().data(), sizeof(dest->MarginModelID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcQryInvestUnitField *dest, ctp::CThostFtdcQryInvestUnitField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcSecAgentCheckModeField *dest, ctp::CThostFtdcSecAgentCheckModeField *src)
{
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->BrokerSecAgentID, src->brokersecagentid().data(), sizeof(dest->BrokerSecAgentID));
    dest->CheckSelfAccount = src->checkselfaccount();
}

void copy(CThostFtdcSecAgentTradeInfoField *dest, ctp::CThostFtdcSecAgentTradeInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerSecAgentID, src->brokersecagentid().data(), sizeof(dest->BrokerSecAgentID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcMarketDataField *dest, ctp::CThostFtdcMarketDataField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    dest->LastPrice = src->lastprice();
    dest->PreSettlementPrice = src->presettlementprice();
    dest->PreClosePrice = src->precloseprice();
    dest->PreOpenInterest = src->preopeninterest();
    dest->OpenPrice = src->openprice();
    dest->HighestPrice = src->highestprice();
    dest->LowestPrice = src->lowestprice();
    dest->Volume = src->volume();
    dest->Turnover = src->turnover();
    dest->OpenInterest = src->openinterest();
    dest->ClosePrice = src->closeprice();
    dest->SettlementPrice = src->settlementprice();
    dest->UpperLimitPrice = src->upperlimitprice();
    dest->LowerLimitPrice = src->lowerlimitprice();
    dest->PreDelta = src->predelta();
    dest->CurrDelta = src->currdelta();
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    dest->UpdateMillisec = src->updatemillisec();
    strncpy(dest->ActionDay, src->actionday().data(), sizeof(dest->ActionDay));
}

void copy(CThostFtdcMarketDataBaseField *dest, ctp::CThostFtdcMarketDataBaseField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PreSettlementPrice = src->presettlementprice();
    dest->PreClosePrice = src->precloseprice();
    dest->PreOpenInterest = src->preopeninterest();
    dest->PreDelta = src->predelta();
}

void copy(CThostFtdcMarketDataStaticField *dest, ctp::CThostFtdcMarketDataStaticField *src)
{
    dest->OpenPrice = src->openprice();
    dest->HighestPrice = src->highestprice();
    dest->LowestPrice = src->lowestprice();
    dest->ClosePrice = src->closeprice();
    dest->UpperLimitPrice = src->upperlimitprice();
    dest->LowerLimitPrice = src->lowerlimitprice();
    dest->SettlementPrice = src->settlementprice();
    dest->CurrDelta = src->currdelta();
}

void copy(CThostFtdcMarketDataLastMatchField *dest, ctp::CThostFtdcMarketDataLastMatchField *src)
{
    dest->LastPrice = src->lastprice();
    dest->Volume = src->volume();
    dest->Turnover = src->turnover();
    dest->OpenInterest = src->openinterest();
}

void copy(CThostFtdcMarketDataBestPriceField *dest, ctp::CThostFtdcMarketDataBestPriceField *src)
{
    dest->BidPrice1 = src->bidprice1();
    dest->BidVolume1 = src->bidvolume1();
    dest->AskPrice1 = src->askprice1();
    dest->AskVolume1 = src->askvolume1();
}

void copy(CThostFtdcMarketDataBid23Field *dest, ctp::CThostFtdcMarketDataBid23Field *src)
{
    dest->BidPrice2 = src->bidprice2();
    dest->BidVolume2 = src->bidvolume2();
    dest->BidPrice3 = src->bidprice3();
    dest->BidVolume3 = src->bidvolume3();
}

void copy(CThostFtdcMarketDataAsk23Field *dest, ctp::CThostFtdcMarketDataAsk23Field *src)
{
    dest->AskPrice2 = src->askprice2();
    dest->AskVolume2 = src->askvolume2();
    dest->AskPrice3 = src->askprice3();
    dest->AskVolume3 = src->askvolume3();
}

void copy(CThostFtdcMarketDataBid45Field *dest, ctp::CThostFtdcMarketDataBid45Field *src)
{
    dest->BidPrice4 = src->bidprice4();
    dest->BidVolume4 = src->bidvolume4();
    dest->BidPrice5 = src->bidprice5();
    dest->BidVolume5 = src->bidvolume5();
}

void copy(CThostFtdcMarketDataAsk45Field *dest, ctp::CThostFtdcMarketDataAsk45Field *src)
{
    dest->AskPrice4 = src->askprice4();
    dest->AskVolume4 = src->askvolume4();
    dest->AskPrice5 = src->askprice5();
    dest->AskVolume5 = src->askvolume5();
}

void copy(CThostFtdcMarketDataUpdateTimeField *dest, ctp::CThostFtdcMarketDataUpdateTimeField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    dest->UpdateMillisec = src->updatemillisec();
    strncpy(dest->ActionDay, src->actionday().data(), sizeof(dest->ActionDay));
}

void copy(CThostFtdcMarketDataExchangeField *dest, ctp::CThostFtdcMarketDataExchangeField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcSpecificInstrumentField *dest, ctp::CThostFtdcSpecificInstrumentField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcInstrumentStatusField *dest, ctp::CThostFtdcInstrumentStatusField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->SettlementGroupID, src->settlementgroupid().data(), sizeof(dest->SettlementGroupID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->InstrumentStatus = src->instrumentstatus();
    dest->TradingSegmentSN = src->tradingsegmentsn();
    strncpy(dest->EnterTime, src->entertime().data(), sizeof(dest->EnterTime));
    dest->EnterReason = src->enterreason();
}

void copy(CThostFtdcQryInstrumentStatusField *dest, ctp::CThostFtdcQryInstrumentStatusField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
}

void copy(CThostFtdcInvestorAccountField *dest, ctp::CThostFtdcInvestorAccountField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcPositionProfitAlgorithmField *dest, ctp::CThostFtdcPositionProfitAlgorithmField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->Algorithm = src->algorithm();
    strncpy(dest->Memo, src->memo().data(), sizeof(dest->Memo));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcDiscountField *dest, ctp::CThostFtdcDiscountField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Discount = src->discount();
}

void copy(CThostFtdcQryTransferBankField *dest, ctp::CThostFtdcQryTransferBankField *src)
{
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
}

void copy(CThostFtdcTransferBankField *dest, ctp::CThostFtdcTransferBankField *src)
{
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
    strncpy(dest->BankName, src->bankname().data(), sizeof(dest->BankName));
    dest->IsActive = src->isactive();
}

void copy(CThostFtdcQryInvestorPositionDetailField *dest, ctp::CThostFtdcQryInvestorPositionDetailField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcInvestorPositionDetailField *dest, ctp::CThostFtdcInvestorPositionDetailField *src)
{
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->HedgeFlag = src->hedgeflag();
    dest->Direction = src->direction();
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->TradeID, src->tradeid().data(), sizeof(dest->TradeID));
    dest->Volume = src->volume();
    dest->OpenPrice = src->openprice();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->TradeType = src->tradetype();
    strncpy(dest->CombInstrumentID, src->combinstrumentid().data(), sizeof(dest->CombInstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->CloseProfitByDate = src->closeprofitbydate();
    dest->CloseProfitByTrade = src->closeprofitbytrade();
    dest->PositionProfitByDate = src->positionprofitbydate();
    dest->PositionProfitByTrade = src->positionprofitbytrade();
    dest->Margin = src->margin();
    dest->ExchMargin = src->exchmargin();
    dest->MarginRateByMoney = src->marginratebymoney();
    dest->MarginRateByVolume = src->marginratebyvolume();
    dest->LastSettlementPrice = src->lastsettlementprice();
    dest->SettlementPrice = src->settlementprice();
    dest->CloseVolume = src->closevolume();
    dest->CloseAmount = src->closeamount();
    dest->TimeFirstVolume = src->timefirstvolume();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcTradingAccountPasswordField *dest, ctp::CThostFtdcTradingAccountPasswordField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcMDTraderOfferField *dest, ctp::CThostFtdcMDTraderOfferField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    dest->TraderConnectStatus = src->traderconnectstatus();
    strncpy(dest->ConnectRequestDate, src->connectrequestdate().data(), sizeof(dest->ConnectRequestDate));
    strncpy(dest->ConnectRequestTime, src->connectrequesttime().data(), sizeof(dest->ConnectRequestTime));
    strncpy(dest->LastReportDate, src->lastreportdate().data(), sizeof(dest->LastReportDate));
    strncpy(dest->LastReportTime, src->lastreporttime().data(), sizeof(dest->LastReportTime));
    strncpy(dest->ConnectDate, src->connectdate().data(), sizeof(dest->ConnectDate));
    strncpy(dest->ConnectTime, src->connecttime().data(), sizeof(dest->ConnectTime));
    strncpy(dest->StartDate, src->startdate().data(), sizeof(dest->StartDate));
    strncpy(dest->StartTime, src->starttime().data(), sizeof(dest->StartTime));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->MaxTradeID, src->maxtradeid().data(), sizeof(dest->MaxTradeID));
    strncpy(dest->MaxOrderMessageReference, src->maxordermessagereference().data(), sizeof(dest->MaxOrderMessageReference));
}

void copy(CThostFtdcQryMDTraderOfferField *dest, ctp::CThostFtdcQryMDTraderOfferField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
}

void copy(CThostFtdcQryNoticeField *dest, ctp::CThostFtdcQryNoticeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcNoticeField *dest, ctp::CThostFtdcNoticeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->Content, src->content().data(), sizeof(dest->Content));
    strncpy(dest->SequenceLabel, src->sequencelabel().data(), sizeof(dest->SequenceLabel));
}

void copy(CThostFtdcUserRightField *dest, ctp::CThostFtdcUserRightField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->UserRightType = src->userrighttype();
    dest->IsForbidden = src->isforbidden();
}

void copy(CThostFtdcQrySettlementInfoConfirmField *dest, ctp::CThostFtdcQrySettlementInfoConfirmField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcLoadSettlementInfoField *dest, ctp::CThostFtdcLoadSettlementInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcBrokerWithdrawAlgorithmField *dest, ctp::CThostFtdcBrokerWithdrawAlgorithmField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->WithdrawAlgorithm = src->withdrawalgorithm();
    dest->UsingRatio = src->usingratio();
    dest->IncludeCloseProfit = src->includecloseprofit();
    dest->AllWithoutTrade = src->allwithouttrade();
    dest->AvailIncludeCloseProfit = src->availincludecloseprofit();
    dest->IsBrokerUserEvent = src->isbrokeruserevent();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->FundMortgageRatio = src->fundmortgageratio();
    dest->BalanceAlgorithm = src->balancealgorithm();
}

void copy(CThostFtdcTradingAccountPasswordUpdateV1Field *dest, ctp::CThostFtdcTradingAccountPasswordUpdateV1Field *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->OldPassword, src->oldpassword().data(), sizeof(dest->OldPassword));
    strncpy(dest->NewPassword, src->newpassword().data(), sizeof(dest->NewPassword));
}

void copy(CThostFtdcTradingAccountPasswordUpdateField *dest, ctp::CThostFtdcTradingAccountPasswordUpdateField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->OldPassword, src->oldpassword().data(), sizeof(dest->OldPassword));
    strncpy(dest->NewPassword, src->newpassword().data(), sizeof(dest->NewPassword));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcQryCombinationLegField *dest, ctp::CThostFtdcQryCombinationLegField *src)
{
    strncpy(dest->CombInstrumentID, src->combinstrumentid().data(), sizeof(dest->CombInstrumentID));
    dest->LegID = src->legid();
    strncpy(dest->LegInstrumentID, src->leginstrumentid().data(), sizeof(dest->LegInstrumentID));
}

void copy(CThostFtdcQrySyncStatusField *dest, ctp::CThostFtdcQrySyncStatusField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
}

void copy(CThostFtdcCombinationLegField *dest, ctp::CThostFtdcCombinationLegField *src)
{
    strncpy(dest->CombInstrumentID, src->combinstrumentid().data(), sizeof(dest->CombInstrumentID));
    dest->LegID = src->legid();
    strncpy(dest->LegInstrumentID, src->leginstrumentid().data(), sizeof(dest->LegInstrumentID));
    dest->Direction = src->direction();
    dest->LegMultiple = src->legmultiple();
    dest->ImplyLevel = src->implylevel();
}

void copy(CThostFtdcSyncStatusField *dest, ctp::CThostFtdcSyncStatusField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->DataSyncStatus = src->datasyncstatus();
}

void copy(CThostFtdcQryLinkManField *dest, ctp::CThostFtdcQryLinkManField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcLinkManField *dest, ctp::CThostFtdcLinkManField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->PersonType = src->persontype();
    dest->IdentifiedCardType = src->identifiedcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    strncpy(dest->PersonName, src->personname().data(), sizeof(dest->PersonName));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    dest->Priority = src->priority();
    strncpy(dest->UOAZipCode, src->uoazipcode().data(), sizeof(dest->UOAZipCode));
    strncpy(dest->PersonFullName, src->personfullname().data(), sizeof(dest->PersonFullName));
}

void copy(CThostFtdcQryBrokerUserEventField *dest, ctp::CThostFtdcQryBrokerUserEventField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->UserEventType = src->usereventtype();
}

void copy(CThostFtdcBrokerUserEventField *dest, ctp::CThostFtdcBrokerUserEventField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->UserEventType = src->usereventtype();
    dest->EventSequenceNo = src->eventsequenceno();
    strncpy(dest->EventDate, src->eventdate().data(), sizeof(dest->EventDate));
    strncpy(dest->EventTime, src->eventtime().data(), sizeof(dest->EventTime));
    strncpy(dest->UserEventInfo, src->usereventinfo().data(), sizeof(dest->UserEventInfo));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcQryContractBankField *dest, ctp::CThostFtdcQryContractBankField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
}

void copy(CThostFtdcContractBankField *dest, ctp::CThostFtdcContractBankField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBrchID, src->bankbrchid().data(), sizeof(dest->BankBrchID));
    strncpy(dest->BankName, src->bankname().data(), sizeof(dest->BankName));
}

void copy(CThostFtdcInvestorPositionCombineDetailField *dest, ctp::CThostFtdcInvestorPositionCombineDetailField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->SettlementID = src->settlementid();
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ComTradeID, src->comtradeid().data(), sizeof(dest->ComTradeID));
    strncpy(dest->TradeID, src->tradeid().data(), sizeof(dest->TradeID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HedgeFlag = src->hedgeflag();
    dest->Direction = src->direction();
    dest->TotalAmt = src->totalamt();
    dest->Margin = src->margin();
    dest->ExchMargin = src->exchmargin();
    dest->MarginRateByMoney = src->marginratebymoney();
    dest->MarginRateByVolume = src->marginratebyvolume();
    dest->LegID = src->legid();
    dest->LegMultiple = src->legmultiple();
    strncpy(dest->CombInstrumentID, src->combinstrumentid().data(), sizeof(dest->CombInstrumentID));
    dest->TradeGroupID = src->tradegroupid();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcParkedOrderField *dest, ctp::CThostFtdcParkedOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    dest->UserForceClose = src->userforceclose();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParkedOrderID, src->parkedorderid().data(), sizeof(dest->ParkedOrderID));
    dest->UserType = src->usertype();
    dest->Status = src->status();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    dest->IsSwapOrder = src->isswaporder();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcParkedOrderActionField *dest, ctp::CThostFtdcParkedOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->ActionFlag = src->actionflag();
    dest->LimitPrice = src->limitprice();
    dest->VolumeChange = src->volumechange();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ParkedOrderActionID, src->parkedorderactionid().data(), sizeof(dest->ParkedOrderActionID));
    dest->UserType = src->usertype();
    dest->Status = src->status();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryParkedOrderField *dest, ctp::CThostFtdcQryParkedOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryParkedOrderActionField *dest, ctp::CThostFtdcQryParkedOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcRemoveParkedOrderField *dest, ctp::CThostFtdcRemoveParkedOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ParkedOrderID, src->parkedorderid().data(), sizeof(dest->ParkedOrderID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcRemoveParkedOrderActionField *dest, ctp::CThostFtdcRemoveParkedOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ParkedOrderActionID, src->parkedorderactionid().data(), sizeof(dest->ParkedOrderActionID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcInvestorWithdrawAlgorithmField *dest, ctp::CThostFtdcInvestorWithdrawAlgorithmField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->UsingRatio = src->usingratio();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->FundMortgageRatio = src->fundmortgageratio();
}

void copy(CThostFtdcQryInvestorPositionCombineDetailField *dest, ctp::CThostFtdcQryInvestorPositionCombineDetailField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->CombInstrumentID, src->combinstrumentid().data(), sizeof(dest->CombInstrumentID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcMarketDataAveragePriceField *dest, ctp::CThostFtdcMarketDataAveragePriceField *src)
{
    dest->AveragePrice = src->averageprice();
}

void copy(CThostFtdcVerifyInvestorPasswordField *dest, ctp::CThostFtdcVerifyInvestorPasswordField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
}

void copy(CThostFtdcUserIPField *dest, ctp::CThostFtdcUserIPField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->IPMask, src->ipmask().data(), sizeof(dest->IPMask));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcTradingNoticeInfoField *dest, ctp::CThostFtdcTradingNoticeInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->SendTime, src->sendtime().data(), sizeof(dest->SendTime));
    strncpy(dest->FieldContent, src->fieldcontent().data(), sizeof(dest->FieldContent));
    dest->SequenceSeries = src->sequenceseries();
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcTradingNoticeField *dest, ctp::CThostFtdcTradingNoticeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->SequenceSeries = src->sequenceseries();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->SendTime, src->sendtime().data(), sizeof(dest->SendTime));
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->FieldContent, src->fieldcontent().data(), sizeof(dest->FieldContent));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryTradingNoticeField *dest, ctp::CThostFtdcQryTradingNoticeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryErrOrderField *dest, ctp::CThostFtdcQryErrOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcErrOrderField *dest, ctp::CThostFtdcErrOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    dest->UserForceClose = src->userforceclose();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    dest->IsSwapOrder = src->isswaporder();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcErrorConditionalOrderField *dest, ctp::CThostFtdcErrorConditionalOrderField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OrderPriceType = src->orderpricetype();
    dest->Direction = src->direction();
    strncpy(dest->CombOffsetFlag, src->comboffsetflag().data(), sizeof(dest->CombOffsetFlag));
    strncpy(dest->CombHedgeFlag, src->combhedgeflag().data(), sizeof(dest->CombHedgeFlag));
    dest->LimitPrice = src->limitprice();
    dest->VolumeTotalOriginal = src->volumetotaloriginal();
    dest->TimeCondition = src->timecondition();
    strncpy(dest->GTDDate, src->gtddate().data(), sizeof(dest->GTDDate));
    dest->VolumeCondition = src->volumecondition();
    dest->MinVolume = src->minvolume();
    dest->ContingentCondition = src->contingentcondition();
    dest->StopPrice = src->stopprice();
    dest->ForceCloseReason = src->forceclosereason();
    dest->IsAutoSuspend = src->isautosuspend();
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->RequestID = src->requestid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->ExchangeInstID, src->exchangeinstid().data(), sizeof(dest->ExchangeInstID));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    dest->OrderSubmitStatus = src->ordersubmitstatus();
    dest->NotifySequence = src->notifysequence();
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->OrderSource = src->ordersource();
    dest->OrderStatus = src->orderstatus();
    dest->OrderType = src->ordertype();
    dest->VolumeTraded = src->volumetraded();
    dest->VolumeTotal = src->volumetotal();
    strncpy(dest->InsertDate, src->insertdate().data(), sizeof(dest->InsertDate));
    strncpy(dest->InsertTime, src->inserttime().data(), sizeof(dest->InsertTime));
    strncpy(dest->ActiveTime, src->activetime().data(), sizeof(dest->ActiveTime));
    strncpy(dest->SuspendTime, src->suspendtime().data(), sizeof(dest->SuspendTime));
    strncpy(dest->UpdateTime, src->updatetime().data(), sizeof(dest->UpdateTime));
    strncpy(dest->CancelTime, src->canceltime().data(), sizeof(dest->CancelTime));
    strncpy(dest->ActiveTraderID, src->activetraderid().data(), sizeof(dest->ActiveTraderID));
    strncpy(dest->ClearingPartID, src->clearingpartid().data(), sizeof(dest->ClearingPartID));
    dest->SequenceNo = src->sequenceno();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    dest->UserForceClose = src->userforceclose();
    strncpy(dest->ActiveUserID, src->activeuserid().data(), sizeof(dest->ActiveUserID));
    dest->BrokerOrderSeq = src->brokerorderseq();
    strncpy(dest->RelativeOrderSysID, src->relativeordersysid().data(), sizeof(dest->RelativeOrderSysID));
    dest->ZCETotalTradedVolume = src->zcetotaltradedvolume();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    dest->IsSwapOrder = src->isswaporder();
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
}

void copy(CThostFtdcQryErrOrderActionField *dest, ctp::CThostFtdcQryErrOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcErrOrderActionField *dest, ctp::CThostFtdcErrOrderActionField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->OrderActionRef = src->orderactionref();
    strncpy(dest->OrderRef, src->orderref().data(), sizeof(dest->OrderRef));
    dest->RequestID = src->requestid();
    dest->FrontID = src->frontid();
    dest->SessionID = src->sessionid();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->OrderSysID, src->ordersysid().data(), sizeof(dest->OrderSysID));
    dest->ActionFlag = src->actionflag();
    dest->LimitPrice = src->limitprice();
    dest->VolumeChange = src->volumechange();
    strncpy(dest->ActionDate, src->actiondate().data(), sizeof(dest->ActionDate));
    strncpy(dest->ActionTime, src->actiontime().data(), sizeof(dest->ActionTime));
    strncpy(dest->TraderID, src->traderid().data(), sizeof(dest->TraderID));
    dest->InstallID = src->installid();
    strncpy(dest->OrderLocalID, src->orderlocalid().data(), sizeof(dest->OrderLocalID));
    strncpy(dest->ActionLocalID, src->actionlocalid().data(), sizeof(dest->ActionLocalID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ClientID, src->clientid().data(), sizeof(dest->ClientID));
    strncpy(dest->BusinessUnit, src->businessunit().data(), sizeof(dest->BusinessUnit));
    dest->OrderActionStatus = src->orderactionstatus();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->StatusMsg, src->statusmsg().data(), sizeof(dest->StatusMsg));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->BranchID, src->branchid().data(), sizeof(dest->BranchID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcQryExchangeSequenceField *dest, ctp::CThostFtdcQryExchangeSequenceField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcExchangeSequenceField *dest, ctp::CThostFtdcExchangeSequenceField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->SequenceNo = src->sequenceno();
    dest->MarketStatus = src->marketstatus();
}

void copy(CThostFtdcQueryMaxOrderVolumeWithPriceField *dest, ctp::CThostFtdcQueryMaxOrderVolumeWithPriceField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->Direction = src->direction();
    dest->OffsetFlag = src->offsetflag();
    dest->HedgeFlag = src->hedgeflag();
    dest->MaxVolume = src->maxvolume();
    dest->Price = src->price();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryBrokerTradingParamsField *dest, ctp::CThostFtdcQryBrokerTradingParamsField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
}

void copy(CThostFtdcBrokerTradingParamsField *dest, ctp::CThostFtdcBrokerTradingParamsField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->MarginPriceType = src->marginpricetype();
    dest->Algorithm = src->algorithm();
    dest->AvailIncludeCloseProfit = src->availincludecloseprofit();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->OptionRoyaltyPriceType = src->optionroyaltypricetype();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
}

void copy(CThostFtdcQryBrokerTradingAlgosField *dest, ctp::CThostFtdcQryBrokerTradingAlgosField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
}

void copy(CThostFtdcBrokerTradingAlgosField *dest, ctp::CThostFtdcBrokerTradingAlgosField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->HandlePositionAlgoID = src->handlepositionalgoid();
    dest->FindMarginRateAlgoID = src->findmarginratealgoid();
    dest->HandleTradingAccountAlgoID = src->handletradingaccountalgoid();
}

void copy(CThostFtdcQueryBrokerDepositField *dest, ctp::CThostFtdcQueryBrokerDepositField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcBrokerDepositField *dest, ctp::CThostFtdcBrokerDepositField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->PreBalance = src->prebalance();
    dest->CurrMargin = src->currmargin();
    dest->CloseProfit = src->closeprofit();
    dest->Balance = src->balance();
    dest->Deposit = src->deposit();
    dest->Withdraw = src->withdraw();
    dest->Available = src->available();
    dest->Reserve = src->reserve();
    dest->FrozenMargin = src->frozenmargin();
}

void copy(CThostFtdcQryCFMMCBrokerKeyField *dest, ctp::CThostFtdcQryCFMMCBrokerKeyField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
}

void copy(CThostFtdcCFMMCBrokerKeyField *dest, ctp::CThostFtdcCFMMCBrokerKeyField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->CreateDate, src->createdate().data(), sizeof(dest->CreateDate));
    strncpy(dest->CreateTime, src->createtime().data(), sizeof(dest->CreateTime));
    dest->KeyID = src->keyid();
    strncpy(dest->CurrentKey, src->currentkey().data(), sizeof(dest->CurrentKey));
    dest->KeyKind = src->keykind();
}

void copy(CThostFtdcCFMMCTradingAccountKeyField *dest, ctp::CThostFtdcCFMMCTradingAccountKeyField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->KeyID = src->keyid();
    strncpy(dest->CurrentKey, src->currentkey().data(), sizeof(dest->CurrentKey));
}

void copy(CThostFtdcQryCFMMCTradingAccountKeyField *dest, ctp::CThostFtdcQryCFMMCTradingAccountKeyField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcBrokerUserOTPParamField *dest, ctp::CThostFtdcBrokerUserOTPParamField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->OTPVendorsID, src->otpvendorsid().data(), sizeof(dest->OTPVendorsID));
    strncpy(dest->SerialNumber, src->serialnumber().data(), sizeof(dest->SerialNumber));
    strncpy(dest->AuthKey, src->authkey().data(), sizeof(dest->AuthKey));
    dest->LastDrift = src->lastdrift();
    dest->LastSuccess = src->lastsuccess();
    dest->OTPType = src->otptype();
}

void copy(CThostFtdcManualSyncBrokerUserOTPField *dest, ctp::CThostFtdcManualSyncBrokerUserOTPField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->OTPType = src->otptype();
    strncpy(dest->FirstOTP, src->firstotp().data(), sizeof(dest->FirstOTP));
    strncpy(dest->SecondOTP, src->secondotp().data(), sizeof(dest->SecondOTP));
}

void copy(CThostFtdcCommRateModelField *dest, ctp::CThostFtdcCommRateModelField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->CommModelID, src->commmodelid().data(), sizeof(dest->CommModelID));
    strncpy(dest->CommModelName, src->commmodelname().data(), sizeof(dest->CommModelName));
}

void copy(CThostFtdcQryCommRateModelField *dest, ctp::CThostFtdcQryCommRateModelField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->CommModelID, src->commmodelid().data(), sizeof(dest->CommModelID));
}

void copy(CThostFtdcMarginModelField *dest, ctp::CThostFtdcMarginModelField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->MarginModelID, src->marginmodelid().data(), sizeof(dest->MarginModelID));
    strncpy(dest->MarginModelName, src->marginmodelname().data(), sizeof(dest->MarginModelName));
}

void copy(CThostFtdcQryMarginModelField *dest, ctp::CThostFtdcQryMarginModelField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->MarginModelID, src->marginmodelid().data(), sizeof(dest->MarginModelID));
}

void copy(CThostFtdcEWarrantOffsetField *dest, ctp::CThostFtdcEWarrantOffsetField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    dest->Direction = src->direction();
    dest->HedgeFlag = src->hedgeflag();
    dest->Volume = src->volume();
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryEWarrantOffsetField *dest, ctp::CThostFtdcQryEWarrantOffsetField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InstrumentID, src->instrumentid().data(), sizeof(dest->InstrumentID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQryInvestorProductGroupMarginField *dest, ctp::CThostFtdcQryInvestorProductGroupMarginField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->ProductGroupID, src->productgroupid().data(), sizeof(dest->ProductGroupID));
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcInvestorProductGroupMarginField *dest, ctp::CThostFtdcInvestorProductGroupMarginField *src)
{
    strncpy(dest->ProductGroupID, src->productgroupid().data(), sizeof(dest->ProductGroupID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->SettlementID = src->settlementid();
    dest->FrozenMargin = src->frozenmargin();
    dest->LongFrozenMargin = src->longfrozenmargin();
    dest->ShortFrozenMargin = src->shortfrozenmargin();
    dest->UseMargin = src->usemargin();
    dest->LongUseMargin = src->longusemargin();
    dest->ShortUseMargin = src->shortusemargin();
    dest->ExchMargin = src->exchmargin();
    dest->LongExchMargin = src->longexchmargin();
    dest->ShortExchMargin = src->shortexchmargin();
    dest->CloseProfit = src->closeprofit();
    dest->FrozenCommission = src->frozencommission();
    dest->Commission = src->commission();
    dest->FrozenCash = src->frozencash();
    dest->CashIn = src->cashin();
    dest->PositionProfit = src->positionprofit();
    dest->OffsetAmount = src->offsetamount();
    dest->LongOffsetAmount = src->longoffsetamount();
    dest->ShortOffsetAmount = src->shortoffsetamount();
    dest->ExchOffsetAmount = src->exchoffsetamount();
    dest->LongExchOffsetAmount = src->longexchoffsetamount();
    dest->ShortExchOffsetAmount = src->shortexchoffsetamount();
    dest->HedgeFlag = src->hedgeflag();
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcQueryCFMMCTradingAccountTokenField *dest, ctp::CThostFtdcQueryCFMMCTradingAccountTokenField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    strncpy(dest->InvestUnitID, src->investunitid().data(), sizeof(dest->InvestUnitID));
}

void copy(CThostFtdcCFMMCTradingAccountTokenField *dest, ctp::CThostFtdcCFMMCTradingAccountTokenField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->ParticipantID, src->participantid().data(), sizeof(dest->ParticipantID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->KeyID = src->keyid();
    strncpy(dest->Token, src->token().data(), sizeof(dest->Token));
}

void copy(CThostFtdcQryProductGroupField *dest, ctp::CThostFtdcQryProductGroupField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
}

void copy(CThostFtdcProductGroupField *dest, ctp::CThostFtdcProductGroupField *src)
{
    strncpy(dest->ProductID, src->productid().data(), sizeof(dest->ProductID));
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->ProductGroupID, src->productgroupid().data(), sizeof(dest->ProductGroupID));
}

void copy(CThostFtdcBulletinField *dest, ctp::CThostFtdcBulletinField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->BulletinID = src->bulletinid();
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->NewsType, src->newstype().data(), sizeof(dest->NewsType));
    dest->NewsUrgency = src->newsurgency();
    strncpy(dest->SendTime, src->sendtime().data(), sizeof(dest->SendTime));
    strncpy(dest->Abstract, src->abstract().data(), sizeof(dest->Abstract));
    strncpy(dest->ComeFrom, src->comefrom().data(), sizeof(dest->ComeFrom));
    strncpy(dest->Content, src->content().data(), sizeof(dest->Content));
    strncpy(dest->URLLink, src->urllink().data(), sizeof(dest->URLLink));
    strncpy(dest->MarketID, src->marketid().data(), sizeof(dest->MarketID));
}

void copy(CThostFtdcQryBulletinField *dest, ctp::CThostFtdcQryBulletinField *src)
{
    strncpy(dest->ExchangeID, src->exchangeid().data(), sizeof(dest->ExchangeID));
    dest->BulletinID = src->bulletinid();
    dest->SequenceNo = src->sequenceno();
    strncpy(dest->NewsType, src->newstype().data(), sizeof(dest->NewsType));
    dest->NewsUrgency = src->newsurgency();
}

void copy(CThostFtdcReqOpenAccountField *dest, ctp::CThostFtdcReqOpenAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->CashExchangeCode = src->cashexchangecode();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->TID = src->tid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcReqCancelAccountField *dest, ctp::CThostFtdcReqCancelAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->CashExchangeCode = src->cashexchangecode();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->TID = src->tid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcReqChangeAccountField *dest, ctp::CThostFtdcReqChangeAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->NewBankAccount, src->newbankaccount().data(), sizeof(dest->NewBankAccount));
    strncpy(dest->NewBankPassWord, src->newbankpassword().data(), sizeof(dest->NewBankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->BankAccType = src->bankacctype();
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    dest->TID = src->tid();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcReqTransferField *dest, ctp::CThostFtdcReqTransferField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->FutureSerial = src->futureserial();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    dest->FutureFetchAmount = src->futurefetchamount();
    dest->FeePayFlag = src->feepayflag();
    dest->CustFee = src->custfee();
    dest->BrokerFee = src->brokerfee();
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->TransferStatus = src->transferstatus();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcRspTransferField *dest, ctp::CThostFtdcRspTransferField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->FutureSerial = src->futureserial();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    dest->FutureFetchAmount = src->futurefetchamount();
    dest->FeePayFlag = src->feepayflag();
    dest->CustFee = src->custfee();
    dest->BrokerFee = src->brokerfee();
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->TransferStatus = src->transferstatus();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcReqRepealField *dest, ctp::CThostFtdcReqRepealField *src)
{
    dest->RepealTimeInterval = src->repealtimeinterval();
    dest->RepealedTimes = src->repealedtimes();
    dest->BankRepealFlag = src->bankrepealflag();
    dest->BrokerRepealFlag = src->brokerrepealflag();
    dest->PlateRepealSerial = src->platerepealserial();
    strncpy(dest->BankRepealSerial, src->bankrepealserial().data(), sizeof(dest->BankRepealSerial));
    dest->FutureRepealSerial = src->futurerepealserial();
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->FutureSerial = src->futureserial();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    dest->FutureFetchAmount = src->futurefetchamount();
    dest->FeePayFlag = src->feepayflag();
    dest->CustFee = src->custfee();
    dest->BrokerFee = src->brokerfee();
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->TransferStatus = src->transferstatus();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcRspRepealField *dest, ctp::CThostFtdcRspRepealField *src)
{
    dest->RepealTimeInterval = src->repealtimeinterval();
    dest->RepealedTimes = src->repealedtimes();
    dest->BankRepealFlag = src->bankrepealflag();
    dest->BrokerRepealFlag = src->brokerrepealflag();
    dest->PlateRepealSerial = src->platerepealserial();
    strncpy(dest->BankRepealSerial, src->bankrepealserial().data(), sizeof(dest->BankRepealSerial));
    dest->FutureRepealSerial = src->futurerepealserial();
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->FutureSerial = src->futureserial();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    dest->FutureFetchAmount = src->futurefetchamount();
    dest->FeePayFlag = src->feepayflag();
    dest->CustFee = src->custfee();
    dest->BrokerFee = src->brokerfee();
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->TransferStatus = src->transferstatus();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcReqQueryAccountField *dest, ctp::CThostFtdcReqQueryAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->FutureSerial = src->futureserial();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcRspQueryAccountField *dest, ctp::CThostFtdcRspQueryAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->FutureSerial = src->futureserial();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->BankUseAmount = src->bankuseamount();
    dest->BankFetchAmount = src->bankfetchamount();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcFutureSignIOField *dest, ctp::CThostFtdcFutureSignIOField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
}

void copy(CThostFtdcRspFutureSignInField *dest, ctp::CThostFtdcRspFutureSignInField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->PinKey, src->pinkey().data(), sizeof(dest->PinKey));
    strncpy(dest->MacKey, src->mackey().data(), sizeof(dest->MacKey));
}

void copy(CThostFtdcReqFutureSignOutField *dest, ctp::CThostFtdcReqFutureSignOutField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
}

void copy(CThostFtdcRspFutureSignOutField *dest, ctp::CThostFtdcRspFutureSignOutField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcReqQueryTradeResultBySerialField *dest, ctp::CThostFtdcReqQueryTradeResultBySerialField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->Reference = src->reference();
    dest->RefrenceIssureType = src->refrenceissuretype();
    strncpy(dest->RefrenceIssure, src->refrenceissure().data(), sizeof(dest->RefrenceIssure));
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcRspQueryTradeResultBySerialField *dest, ctp::CThostFtdcRspQueryTradeResultBySerialField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    dest->Reference = src->reference();
    dest->RefrenceIssureType = src->refrenceissuretype();
    strncpy(dest->RefrenceIssure, src->refrenceissure().data(), sizeof(dest->RefrenceIssure));
    strncpy(dest->OriginReturnCode, src->originreturncode().data(), sizeof(dest->OriginReturnCode));
    strncpy(dest->OriginDescrInfoForReturnCode, src->origindescrinfoforreturncode().data(), sizeof(dest->OriginDescrInfoForReturnCode));
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
}

void copy(CThostFtdcReqDayEndFileReadyField *dest, ctp::CThostFtdcReqDayEndFileReadyField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->FileBusinessCode = src->filebusinesscode();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
}

void copy(CThostFtdcReturnResultField *dest, ctp::CThostFtdcReturnResultField *src)
{
    strncpy(dest->ReturnCode, src->returncode().data(), sizeof(dest->ReturnCode));
    strncpy(dest->DescrInfoForReturnCode, src->descrinfoforreturncode().data(), sizeof(dest->DescrInfoForReturnCode));
}

void copy(CThostFtdcVerifyFuturePasswordField *dest, ctp::CThostFtdcVerifyFuturePasswordField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    dest->InstallID = src->installid();
    dest->TID = src->tid();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcVerifyCustInfoField *dest, ctp::CThostFtdcVerifyCustInfoField *src)
{
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcVerifyFuturePasswordAndCustInfoField *dest, ctp::CThostFtdcVerifyFuturePasswordAndCustInfoField *src)
{
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcDepositResultInformField *dest, ctp::CThostFtdcDepositResultInformField *src)
{
    strncpy(dest->DepositSeqNo, src->depositseqno().data(), sizeof(dest->DepositSeqNo));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->Deposit = src->deposit();
    dest->RequestID = src->requestid();
    strncpy(dest->ReturnCode, src->returncode().data(), sizeof(dest->ReturnCode));
    strncpy(dest->DescrInfoForReturnCode, src->descrinfoforreturncode().data(), sizeof(dest->DescrInfoForReturnCode));
}

void copy(CThostFtdcReqSyncKeyField *dest, ctp::CThostFtdcReqSyncKeyField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
}

void copy(CThostFtdcRspSyncKeyField *dest, ctp::CThostFtdcRspSyncKeyField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcNotifyQueryAccountField *dest, ctp::CThostFtdcNotifyQueryAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->CustType = src->custtype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->FutureSerial = src->futureserial();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->BankUseAmount = src->bankuseamount();
    dest->BankFetchAmount = src->bankfetchamount();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcTransferSerialField *dest, ctp::CThostFtdcTransferSerialField *src)
{
    dest->PlateSerial = src->plateserial();
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    dest->SessionID = src->sessionid();
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    dest->FutureAccType = src->futureacctype();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
    dest->FutureSerial = src->futureserial();
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->TradeAmount = src->tradeamount();
    dest->CustFee = src->custfee();
    dest->BrokerFee = src->brokerfee();
    dest->AvailabilityFlag = src->availabilityflag();
    strncpy(dest->OperatorCode, src->operatorcode().data(), sizeof(dest->OperatorCode));
    strncpy(dest->BankNewAccount, src->banknewaccount().data(), sizeof(dest->BankNewAccount));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcQryTransferSerialField *dest, ctp::CThostFtdcQryTransferSerialField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcNotifyFutureSignInField *dest, ctp::CThostFtdcNotifyFutureSignInField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->PinKey, src->pinkey().data(), sizeof(dest->PinKey));
    strncpy(dest->MacKey, src->mackey().data(), sizeof(dest->MacKey));
}

void copy(CThostFtdcNotifyFutureSignOutField *dest, ctp::CThostFtdcNotifyFutureSignOutField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcNotifySyncKeyField *dest, ctp::CThostFtdcNotifySyncKeyField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    dest->InstallID = src->installid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Message, src->message().data(), sizeof(dest->Message));
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->RequestID = src->requestid();
    dest->TID = src->tid();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcQryAccountregisterField *dest, ctp::CThostFtdcQryAccountregisterField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcAccountregisterField *dest, ctp::CThostFtdcAccountregisterField *src)
{
    strncpy(dest->TradeDay, src->tradeday().data(), sizeof(dest->TradeDay));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->OpenOrDestroy = src->openordestroy();
    strncpy(dest->RegDate, src->regdate().data(), sizeof(dest->RegDate));
    strncpy(dest->OutDate, src->outdate().data(), sizeof(dest->OutDate));
    dest->TID = src->tid();
    dest->CustType = src->custtype();
    dest->BankAccType = src->bankacctype();
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcOpenAccountField *dest, ctp::CThostFtdcOpenAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->CashExchangeCode = src->cashexchangecode();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->TID = src->tid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcCancelAccountField *dest, ctp::CThostFtdcCancelAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    dest->CashExchangeCode = src->cashexchangecode();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->DeviceID, src->deviceid().data(), sizeof(dest->DeviceID));
    dest->BankSecuAccType = src->banksecuacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    strncpy(dest->BankSecuAcc, src->banksecuacc().data(), sizeof(dest->BankSecuAcc));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    strncpy(dest->OperNo, src->operno().data(), sizeof(dest->OperNo));
    dest->TID = src->tid();
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcChangeAccountField *dest, ctp::CThostFtdcChangeAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    strncpy(dest->NewBankAccount, src->newbankaccount().data(), sizeof(dest->NewBankAccount));
    strncpy(dest->NewBankPassWord, src->newbankpassword().data(), sizeof(dest->NewBankPassWord));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    dest->BankAccType = src->bankacctype();
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    dest->BankPwdFlag = src->bankpwdflag();
    dest->SecuPwdFlag = src->secupwdflag();
    dest->TID = src->tid();
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
    strncpy(dest->LongCustomerName, src->longcustomername().data(), sizeof(dest->LongCustomerName));
}

void copy(CThostFtdcSecAgentACIDMapField *dest, ctp::CThostFtdcSecAgentACIDMapField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->BrokerSecAgentID, src->brokersecagentid().data(), sizeof(dest->BrokerSecAgentID));
}

void copy(CThostFtdcQrySecAgentACIDMapField *dest, ctp::CThostFtdcQrySecAgentACIDMapField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcUserRightsAssignField *dest, ctp::CThostFtdcUserRightsAssignField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->DRIdentityID = src->dridentityid();
}

void copy(CThostFtdcBrokerUserRightAssignField *dest, ctp::CThostFtdcBrokerUserRightAssignField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    dest->DRIdentityID = src->dridentityid();
    dest->Tradeable = src->tradeable();
}

void copy(CThostFtdcDRTransferField *dest, ctp::CThostFtdcDRTransferField *src)
{
    dest->OrigDRIdentityID = src->origdridentityid();
    dest->DestDRIdentityID = src->destdridentityid();
    strncpy(dest->OrigBrokerID, src->origbrokerid().data(), sizeof(dest->OrigBrokerID));
    strncpy(dest->DestBrokerID, src->destbrokerid().data(), sizeof(dest->DestBrokerID));
}

void copy(CThostFtdcFensUserInfoField *dest, ctp::CThostFtdcFensUserInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->LoginMode = src->loginmode();
}

void copy(CThostFtdcCurrTransferIdentityField *dest, ctp::CThostFtdcCurrTransferIdentityField *src)
{
    dest->IdentityID = src->identityid();
}

void copy(CThostFtdcLoginForbiddenUserField *dest, ctp::CThostFtdcLoginForbiddenUserField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
}

void copy(CThostFtdcQryLoginForbiddenUserField *dest, ctp::CThostFtdcQryLoginForbiddenUserField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcMulticastGroupInfoField *dest, ctp::CThostFtdcMulticastGroupInfoField *src)
{
    strncpy(dest->GroupIP, src->groupip().data(), sizeof(dest->GroupIP));
    dest->GroupPort = src->groupport();
    strncpy(dest->SourceIP, src->sourceip().data(), sizeof(dest->SourceIP));
}

void copy(CThostFtdcTradingAccountReserveField *dest, ctp::CThostFtdcTradingAccountReserveField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    dest->Reserve = src->reserve();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcQryLoginForbiddenIPField *dest, ctp::CThostFtdcQryLoginForbiddenIPField *src)
{
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
}

void copy(CThostFtdcQryIPListField *dest, ctp::CThostFtdcQryIPListField *src)
{
    strncpy(dest->IPAddress, src->ipaddress().data(), sizeof(dest->IPAddress));
}

void copy(CThostFtdcQryUserRightsAssignField *dest, ctp::CThostFtdcQryUserRightsAssignField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcReserveOpenAccountConfirmField *dest, ctp::CThostFtdcReserveOpenAccountConfirmField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    dest->TID = src->tid();
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->BankReserveOpenSeq, src->bankreserveopenseq().data(), sizeof(dest->BankReserveOpenSeq));
    strncpy(dest->BookDate, src->bookdate().data(), sizeof(dest->BookDate));
    strncpy(dest->BookPsw, src->bookpsw().data(), sizeof(dest->BookPsw));
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcReserveOpenAccountField *dest, ctp::CThostFtdcReserveOpenAccountField *src)
{
    strncpy(dest->TradeCode, src->tradecode().data(), sizeof(dest->TradeCode));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankBranchID, src->bankbranchid().data(), sizeof(dest->BankBranchID));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerBranchID, src->brokerbranchid().data(), sizeof(dest->BrokerBranchID));
    strncpy(dest->TradeDate, src->tradedate().data(), sizeof(dest->TradeDate));
    strncpy(dest->TradeTime, src->tradetime().data(), sizeof(dest->TradeTime));
    strncpy(dest->BankSerial, src->bankserial().data(), sizeof(dest->BankSerial));
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    dest->PlateSerial = src->plateserial();
    dest->LastFragment = src->lastfragment();
    dest->SessionID = src->sessionid();
    strncpy(dest->CustomerName, src->customername().data(), sizeof(dest->CustomerName));
    dest->IdCardType = src->idcardtype();
    strncpy(dest->IdentifiedCardNo, src->identifiedcardno().data(), sizeof(dest->IdentifiedCardNo));
    dest->Gender = src->gender();
    strncpy(dest->CountryCode, src->countrycode().data(), sizeof(dest->CountryCode));
    dest->CustType = src->custtype();
    strncpy(dest->Address, src->address().data(), sizeof(dest->Address));
    strncpy(dest->ZipCode, src->zipcode().data(), sizeof(dest->ZipCode));
    strncpy(dest->Telephone, src->telephone().data(), sizeof(dest->Telephone));
    strncpy(dest->MobilePhone, src->mobilephone().data(), sizeof(dest->MobilePhone));
    strncpy(dest->Fax, src->fax().data(), sizeof(dest->Fax));
    strncpy(dest->EMail, src->email().data(), sizeof(dest->EMail));
    dest->MoneyAccountStatus = src->moneyaccountstatus();
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->BankPassWord, src->bankpassword().data(), sizeof(dest->BankPassWord));
    dest->InstallID = src->installid();
    dest->VerifyCertNoFlag = src->verifycertnoflag();
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
    strncpy(dest->Digest, src->digest().data(), sizeof(dest->Digest));
    dest->BankAccType = src->bankacctype();
    strncpy(dest->BrokerIDByBank, src->brokeridbybank().data(), sizeof(dest->BrokerIDByBank));
    dest->TID = src->tid();
    dest->ReserveOpenAccStas = src->reserveopenaccstas();
    dest->ErrorID = src->errorid();
    strncpy(dest->ErrorMsg, src->errormsg().data(), sizeof(dest->ErrorMsg));
}

void copy(CThostFtdcAccountPropertyField *dest, ctp::CThostFtdcAccountPropertyField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->AccountID, src->accountid().data(), sizeof(dest->AccountID));
    strncpy(dest->BankID, src->bankid().data(), sizeof(dest->BankID));
    strncpy(dest->BankAccount, src->bankaccount().data(), sizeof(dest->BankAccount));
    strncpy(dest->OpenName, src->openname().data(), sizeof(dest->OpenName));
    strncpy(dest->OpenBank, src->openbank().data(), sizeof(dest->OpenBank));
    dest->IsActive = src->isactive();
    dest->AccountSourceType = src->accountsourcetype();
    strncpy(dest->OpenDate, src->opendate().data(), sizeof(dest->OpenDate));
    strncpy(dest->CancelDate, src->canceldate().data(), sizeof(dest->CancelDate));
    strncpy(dest->OperatorID, src->operatorid().data(), sizeof(dest->OperatorID));
    strncpy(dest->OperateDate, src->operatedate().data(), sizeof(dest->OperateDate));
    strncpy(dest->OperateTime, src->operatetime().data(), sizeof(dest->OperateTime));
    strncpy(dest->CurrencyID, src->currencyid().data(), sizeof(dest->CurrencyID));
}

void copy(CThostFtdcQryCurrDRIdentityField *dest, ctp::CThostFtdcQryCurrDRIdentityField *src)
{
    dest->DRIdentityID = src->dridentityid();
}

void copy(CThostFtdcCurrDRIdentityField *dest, ctp::CThostFtdcCurrDRIdentityField *src)
{
    dest->DRIdentityID = src->dridentityid();
}

void copy(CThostFtdcQrySecAgentCheckModeField *dest, ctp::CThostFtdcQrySecAgentCheckModeField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcQrySecAgentTradeInfoField *dest, ctp::CThostFtdcQrySecAgentTradeInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->BrokerSecAgentID, src->brokersecagentid().data(), sizeof(dest->BrokerSecAgentID));
}

void copy(CThostFtdcUserSystemInfoField *dest, ctp::CThostFtdcUserSystemInfoField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->ClientSystemInfoLen = src->clientsysteminfolen();
    strncpy(dest->ClientSystemInfo, src->clientsysteminfo().data(), sizeof(dest->ClientSystemInfo));
    strncpy(dest->ClientPublicIP, src->clientpublicip().data(), sizeof(dest->ClientPublicIP));
    dest->ClientIPPort = src->clientipport();
    strncpy(dest->ClientLoginTime, src->clientlogintime().data(), sizeof(dest->ClientLoginTime));
    strncpy(dest->ClientAppID, src->clientappid().data(), sizeof(dest->ClientAppID));
}

void copy(CThostFtdcReqUserAuthMethodField *dest, ctp::CThostFtdcReqUserAuthMethodField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcRspUserAuthMethodField *dest, ctp::CThostFtdcRspUserAuthMethodField *src)
{
    dest->UsableAuthMethod = src->usableauthmethod();
}

void copy(CThostFtdcReqGenUserCaptchaField *dest, ctp::CThostFtdcReqGenUserCaptchaField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcRspGenUserCaptchaField *dest, ctp::CThostFtdcRspGenUserCaptchaField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->CaptchaInfoLen = src->captchainfolen();
    strncpy(dest->CaptchaInfo, src->captchainfo().data(), sizeof(dest->CaptchaInfo));
}

void copy(CThostFtdcReqGenUserTextField *dest, ctp::CThostFtdcReqGenUserTextField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
}

void copy(CThostFtdcRspGenUserTextField *dest, ctp::CThostFtdcRspGenUserTextField *src)
{
    dest->UserTextSeq = src->usertextseq();
}

void copy(CThostFtdcReqUserLoginWithCaptchaField *dest, ctp::CThostFtdcReqUserLoginWithCaptchaField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ClientIPAddress, src->clientipaddress().data(), sizeof(dest->ClientIPAddress));
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
    strncpy(dest->Captcha, src->captcha().data(), sizeof(dest->Captcha));
    dest->ClientIPPort = src->clientipport();
}

void copy(CThostFtdcReqUserLoginWithTextField *dest, ctp::CThostFtdcReqUserLoginWithTextField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ClientIPAddress, src->clientipaddress().data(), sizeof(dest->ClientIPAddress));
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
    strncpy(dest->Text, src->text().data(), sizeof(dest->Text));
    dest->ClientIPPort = src->clientipport();
}

void copy(CThostFtdcReqUserLoginWithOTPField *dest, ctp::CThostFtdcReqUserLoginWithOTPField *src)
{
    strncpy(dest->TradingDay, src->tradingday().data(), sizeof(dest->TradingDay));
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    strncpy(dest->Password, src->password().data(), sizeof(dest->Password));
    strncpy(dest->UserProductInfo, src->userproductinfo().data(), sizeof(dest->UserProductInfo));
    strncpy(dest->InterfaceProductInfo, src->interfaceproductinfo().data(), sizeof(dest->InterfaceProductInfo));
    strncpy(dest->ProtocolInfo, src->protocolinfo().data(), sizeof(dest->ProtocolInfo));
    strncpy(dest->MacAddress, src->macaddress().data(), sizeof(dest->MacAddress));
    strncpy(dest->ClientIPAddress, src->clientipaddress().data(), sizeof(dest->ClientIPAddress));
    strncpy(dest->LoginRemark, src->loginremark().data(), sizeof(dest->LoginRemark));
    strncpy(dest->OTPPassword, src->otppassword().data(), sizeof(dest->OTPPassword));
    dest->ClientIPPort = src->clientipport();
}

void copy(CThostFtdcReqApiHandshakeField *dest, ctp::CThostFtdcReqApiHandshakeField *src)
{
    strncpy(dest->CryptoKeyVersion, src->cryptokeyversion().data(), sizeof(dest->CryptoKeyVersion));
}

void copy(CThostFtdcRspApiHandshakeField *dest, ctp::CThostFtdcRspApiHandshakeField *src)
{
    dest->FrontHandshakeDataLen = src->fronthandshakedatalen();
    strncpy(dest->FrontHandshakeData, src->fronthandshakedata().data(), sizeof(dest->FrontHandshakeData));
    dest->IsApiAuthEnabled = src->isapiauthenabled();
}

void copy(CThostFtdcReqVerifyApiKeyField *dest, ctp::CThostFtdcReqVerifyApiKeyField *src)
{
    dest->ApiHandshakeDataLen = src->apihandshakedatalen();
    strncpy(dest->ApiHandshakeData, src->apihandshakedata().data(), sizeof(dest->ApiHandshakeData));
}

void copy(CThostFtdcDepartmentUserField *dest, ctp::CThostFtdcDepartmentUserField *src)
{
    strncpy(dest->BrokerID, src->brokerid().data(), sizeof(dest->BrokerID));
    strncpy(dest->UserID, src->userid().data(), sizeof(dest->UserID));
    dest->InvestorRange = src->investorrange();
    strncpy(dest->InvestorID, src->investorid().data(), sizeof(dest->InvestorID));
}

void copy(CThostFtdcQueryFreqField *dest, ctp::CThostFtdcQueryFreqField *src)
{
    dest->QueryFreq = src->queryfreq();
}

void onMessage(CThostFtdcTraderApi *api, uint32_t t, int requestID, const char *data, uint32_t len)
{
    switch (t)
    {
    case ctp::TD_Init:
    {
        api->Init();
    }
    break;
    case ctp::TD_RegisterFront:
    {
        ctp::CThostFtdcReqRegisterFrontField req;
        if (req.ParseFromArray(data, len))
        {
            for (int i = 0; i < req.fronts_size(); i++)
            {
                if (req.fronts(i).length() > 0)
                {
                    api->RegisterFront((char *)req.fronts(i).data());
                }
            }
        }
    }
    break;
    case ctp::TD_ReqAuthenticate:
    {
        ctp::CThostFtdcReqAuthenticateField src;
        CThostFtdcReqAuthenticateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqAuthenticate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserLogin:
    {
        ctp::CThostFtdcReqUserLoginField src;
        CThostFtdcReqUserLoginField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLogin(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserLogout:
    {
        ctp::CThostFtdcUserLogoutField src;
        CThostFtdcUserLogoutField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLogout(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserPasswordUpdate:
    {
        ctp::CThostFtdcUserPasswordUpdateField src;
        CThostFtdcUserPasswordUpdateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserPasswordUpdate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqTradingAccountPasswordUpdate:
    {
        ctp::CThostFtdcTradingAccountPasswordUpdateField src;
        CThostFtdcTradingAccountPasswordUpdateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqTradingAccountPasswordUpdate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserAuthMethod:
    {
        ctp::CThostFtdcReqUserAuthMethodField src;
        CThostFtdcReqUserAuthMethodField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserAuthMethod(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqGenUserCaptcha:
    {
        ctp::CThostFtdcReqGenUserCaptchaField src;
        CThostFtdcReqGenUserCaptchaField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqGenUserCaptcha(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqGenUserText:
    {
        ctp::CThostFtdcReqGenUserTextField src;
        CThostFtdcReqGenUserTextField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqGenUserText(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserLoginWithCaptcha:
    {
        ctp::CThostFtdcReqUserLoginWithCaptchaField src;
        CThostFtdcReqUserLoginWithCaptchaField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLoginWithCaptcha(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserLoginWithText:
    {
        ctp::CThostFtdcReqUserLoginWithTextField src;
        CThostFtdcReqUserLoginWithTextField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLoginWithText(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqUserLoginWithOTP:
    {
        ctp::CThostFtdcReqUserLoginWithOTPField src;
        CThostFtdcReqUserLoginWithOTPField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLoginWithOTP(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqOrderInsert:
    {
        ctp::CThostFtdcInputOrderField src;
        CThostFtdcInputOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqOrderInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqParkedOrderInsert:
    {
        ctp::CThostFtdcParkedOrderField src;
        CThostFtdcParkedOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqParkedOrderInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqParkedOrderAction:
    {
        ctp::CThostFtdcParkedOrderActionField src;
        CThostFtdcParkedOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqParkedOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqOrderAction:
    {
        ctp::CThostFtdcInputOrderActionField src;
        CThostFtdcInputOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQueryMaxOrderVolume:
    {
        ctp::CThostFtdcQueryMaxOrderVolumeField src;
        CThostFtdcQueryMaxOrderVolumeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQueryMaxOrderVolume(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqSettlementInfoConfirm:
    {
        ctp::CThostFtdcSettlementInfoConfirmField src;
        CThostFtdcSettlementInfoConfirmField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqSettlementInfoConfirm(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqRemoveParkedOrder:
    {
        ctp::CThostFtdcRemoveParkedOrderField src;
        CThostFtdcRemoveParkedOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqRemoveParkedOrder(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqRemoveParkedOrderAction:
    {
        ctp::CThostFtdcRemoveParkedOrderActionField src;
        CThostFtdcRemoveParkedOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqRemoveParkedOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqExecOrderInsert:
    {
        ctp::CThostFtdcInputExecOrderField src;
        CThostFtdcInputExecOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqExecOrderInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqExecOrderAction:
    {
        ctp::CThostFtdcInputExecOrderActionField src;
        CThostFtdcInputExecOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqExecOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqForQuoteInsert:
    {
        ctp::CThostFtdcInputForQuoteField src;
        CThostFtdcInputForQuoteField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqForQuoteInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQuoteInsert:
    {
        ctp::CThostFtdcInputQuoteField src;
        CThostFtdcInputQuoteField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQuoteInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQuoteAction:
    {
        ctp::CThostFtdcInputQuoteActionField src;
        CThostFtdcInputQuoteActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQuoteAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqBatchOrderAction:
    {
        ctp::CThostFtdcInputBatchOrderActionField src;
        CThostFtdcInputBatchOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqBatchOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqOptionSelfCloseInsert:
    {
        ctp::CThostFtdcInputOptionSelfCloseField src;
        CThostFtdcInputOptionSelfCloseField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqOptionSelfCloseInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqOptionSelfCloseAction:
    {
        ctp::CThostFtdcInputOptionSelfCloseActionField src;
        CThostFtdcInputOptionSelfCloseActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqOptionSelfCloseAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqCombActionInsert:
    {
        ctp::CThostFtdcInputCombActionField src;
        CThostFtdcInputCombActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqCombActionInsert(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryOrder:
    {
        ctp::CThostFtdcQryOrderField src;
        CThostFtdcQryOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryOrder(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTrade:
    {
        ctp::CThostFtdcQryTradeField src;
        CThostFtdcQryTradeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTrade(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestorPosition:
    {
        ctp::CThostFtdcQryInvestorPositionField src;
        CThostFtdcQryInvestorPositionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestorPosition(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTradingAccount:
    {
        ctp::CThostFtdcQryTradingAccountField src;
        CThostFtdcQryTradingAccountField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTradingAccount(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestor:
    {
        ctp::CThostFtdcQryInvestorField src;
        CThostFtdcQryInvestorField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestor(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTradingCode:
    {
        ctp::CThostFtdcQryTradingCodeField src;
        CThostFtdcQryTradingCodeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTradingCode(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInstrumentMarginRate:
    {
        ctp::CThostFtdcQryInstrumentMarginRateField src;
        CThostFtdcQryInstrumentMarginRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInstrumentMarginRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInstrumentCommissionRate:
    {
        ctp::CThostFtdcQryInstrumentCommissionRateField src;
        CThostFtdcQryInstrumentCommissionRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInstrumentCommissionRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryExchange:
    {
        ctp::CThostFtdcQryExchangeField src;
        CThostFtdcQryExchangeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryExchange(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryProduct:
    {
        ctp::CThostFtdcQryProductField src;
        CThostFtdcQryProductField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryProduct(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInstrument:
    {
        ctp::CThostFtdcQryInstrumentField src;
        CThostFtdcQryInstrumentField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInstrument(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryDepthMarketData:
    {
        ctp::CThostFtdcQryDepthMarketDataField src;
        CThostFtdcQryDepthMarketDataField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryDepthMarketData(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySettlementInfo:
    {
        ctp::CThostFtdcQrySettlementInfoField src;
        CThostFtdcQrySettlementInfoField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySettlementInfo(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTransferBank:
    {
        ctp::CThostFtdcQryTransferBankField src;
        CThostFtdcQryTransferBankField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTransferBank(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestorPositionDetail:
    {
        ctp::CThostFtdcQryInvestorPositionDetailField src;
        CThostFtdcQryInvestorPositionDetailField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestorPositionDetail(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryNotice:
    {
        ctp::CThostFtdcQryNoticeField src;
        CThostFtdcQryNoticeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryNotice(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySettlementInfoConfirm:
    {
        ctp::CThostFtdcQrySettlementInfoConfirmField src;
        CThostFtdcQrySettlementInfoConfirmField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySettlementInfoConfirm(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestorPositionCombineDetail:
    {
        ctp::CThostFtdcQryInvestorPositionCombineDetailField src;
        CThostFtdcQryInvestorPositionCombineDetailField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestorPositionCombineDetail(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryCFMMCTradingAccountKey:
    {
        ctp::CThostFtdcQryCFMMCTradingAccountKeyField src;
        CThostFtdcQryCFMMCTradingAccountKeyField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryCFMMCTradingAccountKey(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryEWarrantOffset:
    {
        ctp::CThostFtdcQryEWarrantOffsetField src;
        CThostFtdcQryEWarrantOffsetField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryEWarrantOffset(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestorProductGroupMargin:
    {
        ctp::CThostFtdcQryInvestorProductGroupMarginField src;
        CThostFtdcQryInvestorProductGroupMarginField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestorProductGroupMargin(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryExchangeMarginRate:
    {
        ctp::CThostFtdcQryExchangeMarginRateField src;
        CThostFtdcQryExchangeMarginRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryExchangeMarginRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryExchangeMarginRateAdjust:
    {
        ctp::CThostFtdcQryExchangeMarginRateAdjustField src;
        CThostFtdcQryExchangeMarginRateAdjustField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryExchangeMarginRateAdjust(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryExchangeRate:
    {
        ctp::CThostFtdcQryExchangeRateField src;
        CThostFtdcQryExchangeRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryExchangeRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySecAgentACIDMap:
    {
        ctp::CThostFtdcQrySecAgentACIDMapField src;
        CThostFtdcQrySecAgentACIDMapField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySecAgentACIDMap(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryProductExchRate:
    {
        ctp::CThostFtdcQryProductExchRateField src;
        CThostFtdcQryProductExchRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryProductExchRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryProductGroup:
    {
        ctp::CThostFtdcQryProductGroupField src;
        CThostFtdcQryProductGroupField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryProductGroup(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryMMInstrumentCommissionRate:
    {
        ctp::CThostFtdcQryMMInstrumentCommissionRateField src;
        CThostFtdcQryMMInstrumentCommissionRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryMMInstrumentCommissionRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryMMOptionInstrCommRate:
    {
        ctp::CThostFtdcQryMMOptionInstrCommRateField src;
        CThostFtdcQryMMOptionInstrCommRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryMMOptionInstrCommRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInstrumentOrderCommRate:
    {
        ctp::CThostFtdcQryInstrumentOrderCommRateField src;
        CThostFtdcQryInstrumentOrderCommRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInstrumentOrderCommRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySecAgentTradingAccount:
    {
        ctp::CThostFtdcQryTradingAccountField src;
        CThostFtdcQryTradingAccountField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySecAgentTradingAccount(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySecAgentCheckMode:
    {
        ctp::CThostFtdcQrySecAgentCheckModeField src;
        CThostFtdcQrySecAgentCheckModeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySecAgentCheckMode(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQrySecAgentTradeInfo:
    {
        ctp::CThostFtdcQrySecAgentTradeInfoField src;
        CThostFtdcQrySecAgentTradeInfoField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQrySecAgentTradeInfo(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryOptionInstrTradeCost:
    {
        ctp::CThostFtdcQryOptionInstrTradeCostField src;
        CThostFtdcQryOptionInstrTradeCostField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryOptionInstrTradeCost(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryOptionInstrCommRate:
    {
        ctp::CThostFtdcQryOptionInstrCommRateField src;
        CThostFtdcQryOptionInstrCommRateField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryOptionInstrCommRate(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryExecOrder:
    {
        ctp::CThostFtdcQryExecOrderField src;
        CThostFtdcQryExecOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryExecOrder(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryForQuote:
    {
        ctp::CThostFtdcQryForQuoteField src;
        CThostFtdcQryForQuoteField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryForQuote(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryQuote:
    {
        ctp::CThostFtdcQryQuoteField src;
        CThostFtdcQryQuoteField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryQuote(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryOptionSelfClose:
    {
        ctp::CThostFtdcQryOptionSelfCloseField src;
        CThostFtdcQryOptionSelfCloseField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryOptionSelfClose(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryInvestUnit:
    {
        ctp::CThostFtdcQryInvestUnitField src;
        CThostFtdcQryInvestUnitField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryInvestUnit(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryCombInstrumentGuard:
    {
        ctp::CThostFtdcQryCombInstrumentGuardField src;
        CThostFtdcQryCombInstrumentGuardField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryCombInstrumentGuard(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryCombAction:
    {
        ctp::CThostFtdcQryCombActionField src;
        CThostFtdcQryCombActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryCombAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTransferSerial:
    {
        ctp::CThostFtdcQryTransferSerialField src;
        CThostFtdcQryTransferSerialField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTransferSerial(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryAccountregister:
    {
        ctp::CThostFtdcQryAccountregisterField src;
        CThostFtdcQryAccountregisterField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryAccountregister(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryContractBank:
    {
        ctp::CThostFtdcQryContractBankField src;
        CThostFtdcQryContractBankField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryContractBank(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryParkedOrder:
    {
        ctp::CThostFtdcQryParkedOrderField src;
        CThostFtdcQryParkedOrderField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryParkedOrder(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryParkedOrderAction:
    {
        ctp::CThostFtdcQryParkedOrderActionField src;
        CThostFtdcQryParkedOrderActionField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryParkedOrderAction(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryTradingNotice:
    {
        ctp::CThostFtdcQryTradingNoticeField src;
        CThostFtdcQryTradingNoticeField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryTradingNotice(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryBrokerTradingParams:
    {
        ctp::CThostFtdcQryBrokerTradingParamsField src;
        CThostFtdcQryBrokerTradingParamsField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryBrokerTradingParams(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQryBrokerTradingAlgos:
    {
        ctp::CThostFtdcQryBrokerTradingAlgosField src;
        CThostFtdcQryBrokerTradingAlgosField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQryBrokerTradingAlgos(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQueryCFMMCTradingAccountToken:
    {
        ctp::CThostFtdcQueryCFMMCTradingAccountTokenField src;
        CThostFtdcQueryCFMMCTradingAccountTokenField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQueryCFMMCTradingAccountToken(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqFromBankToFutureByFuture:
    {
        ctp::CThostFtdcReqTransferField src;
        CThostFtdcReqTransferField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqFromBankToFutureByFuture(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqFromFutureToBankByFuture:
    {
        ctp::CThostFtdcReqTransferField src;
        CThostFtdcReqTransferField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqFromFutureToBankByFuture(&req, requestID);
        }
    }
    break;

    case ctp::TD_ReqQueryBankAccountMoneyByFuture:
    {
        ctp::CThostFtdcReqQueryAccountField src;
        CThostFtdcReqQueryAccountField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqQueryBankAccountMoneyByFuture(&req, requestID);
        }
    }
    break;
    default:
        std::cout << "unsurported message type " << t << std::endl;
    }
}
void onMessage(CThostFtdcMdApi *api, uint32_t t, int requestID, const char *data, uint32_t len)
{
    switch (t)
    {
    case ctp::MD_Init:
    {
        api->Init();
    }
    break;
    case ctp::MD_RegisterFront:
    {
        ctp::CThostFtdcReqRegisterFrontField req;
        if (req.ParseFromArray(data, len))
        {
            for (int i = 0; i < req.fronts_size(); i++)
            {
                if (req.fronts(i).length() > 0)
                {
                    api->RegisterFront((char *)req.fronts(i).data());
                }
            }
        }
    }
    break;
    case ctp::MD_SubscribeMarketData:
    {
        ctp::CThostFtdcReqSubscribeMarketData src;
        if (src.ParseFromArray(data, len))
        {
            char **req = new char *[src.instruments_size()];
            for (int i = 0; i < src.instruments_size(); i++)
            {
                req[i] = (char *)(src.instruments(i).data());
            }
            api->SubscribeMarketData(req, src.instruments_size());
            delete req;
        }
    }
    break;

    case ctp::MD_UnSubscribeMarketData:
    {
        ctp::CThostFtdcReqUnSubscribeMarketData src;
        if (src.ParseFromArray(data, len))
        {
            char **req = new char *[src.instruments_size()];
            for (int i = 0; i < src.instruments_size(); i++)
            {
                req[i] = (char *)(src.instruments(i).data());
            }
            api->UnSubscribeMarketData(req, src.instruments_size());
            delete req;
        }
    }
    break;

    case ctp::MD_SubscribeForQuoteRsp:
    {
        ctp::CThostFtdcReqSubscribeForQuoteRsp src;
        if (src.ParseFromArray(data, len))
        {
            char **req = new char *[src.instruments_size()];
            for (int i = 0; i < src.instruments_size(); i++)
            {
                req[i] = (char *)(src.instruments(i).data());
            }
            api->SubscribeForQuoteRsp(req, src.instruments_size());
            delete req;
        }
    }
    break;

    case ctp::MD_UnSubscribeForQuoteRsp:
    {
        ctp::CThostFtdcReqUnSubscribeForQuoteRsp src;
        if (src.ParseFromArray(data, len))
        {
            char **req = new char *[src.instruments_size()];
            for (int i = 0; i < src.instruments_size(); i++)
            {
                req[i] = (char *)(src.instruments(i).data());
            }
            api->UnSubscribeForQuoteRsp(req, src.instruments_size());
            delete req;
        }
    }
    break;

    case ctp::MD_ReqUserLogin:
    {
        ctp::CThostFtdcReqUserLoginField src;
        CThostFtdcReqUserLoginField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLogin(&req, requestID);
        }
    }
    break;

    case ctp::MD_ReqUserLogout:
    {
        ctp::CThostFtdcUserLogoutField src;
        CThostFtdcUserLogoutField req;
        if (src.ParseFromArray(data, len))
        {
            copy(&req, &src);
            api->ReqUserLogout(&req, requestID);
        }
    }
    break;
    default:
        std::cout << "unsurported message type " << t << std::endl;
    }
}

template <typename T>
class handler;

template <>
class handler<CThostFtdcTraderApi> : public CThostFtdcTraderSpi
{
public:
    virtual void send(ctp::CtpMessageType msgType, std::string *d1, std::string *d2, int nRequestID, bool bIsLast) = 0;
    void OnFrontConnected()
    {
        send(ctp::TD_OnFrontConnected, 0, 0, 0, true);
    };
    void OnFrontDisconnected(int nReason)
    {
        send(ctp::TD_OnFrontDisconnected, 0, 0, 0, true);
    };
    void OnHeartBeatWarning(int nTimeLapse)
    {
        send(ctp::TD_OnHeartBeatWarning, 0, 0, 0, true);
    };
    void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspAuthenticateField p1;
        if (pRspAuthenticateField != NULL)
        {
            copy(&p1, pRspAuthenticateField);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspAuthenticate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspUserLoginField p1;
        if (pRspUserLogin != NULL)
        {
            copy(&p1, pRspUserLogin);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspUserLogin, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcUserLogoutField p1;
        if (pUserLogout != NULL)
        {
            copy(&p1, pUserLogout);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspUserLogout, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcUserPasswordUpdateField p1;
        if (pUserPasswordUpdate != NULL)
        {
            copy(&p1, pUserPasswordUpdate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspUserPasswordUpdate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradingAccountPasswordUpdateField p1;
        if (pTradingAccountPasswordUpdate != NULL)
        {
            copy(&p1, pTradingAccountPasswordUpdate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspTradingAccountPasswordUpdate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspUserAuthMethodField p1;
        if (pRspUserAuthMethod != NULL)
        {
            copy(&p1, pRspUserAuthMethod);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspUserAuthMethod, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspGenUserCaptchaField p1;
        if (pRspGenUserCaptcha != NULL)
        {
            copy(&p1, pRspGenUserCaptcha);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspGenUserCaptcha, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspGenUserTextField p1;
        if (pRspGenUserText != NULL)
        {
            copy(&p1, pRspGenUserText);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspGenUserText, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputOrderField p1;
        if (pInputOrder != NULL)
        {
            copy(&p1, pInputOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspOrderInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcParkedOrderField p1;
        if (pParkedOrder != NULL)
        {
            copy(&p1, pParkedOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspParkedOrderInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcParkedOrderActionField p1;
        if (pParkedOrderAction != NULL)
        {
            copy(&p1, pParkedOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspParkedOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputOrderActionField p1;
        if (pInputOrderAction != NULL)
        {
            copy(&p1, pInputOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcQueryMaxOrderVolumeField p1;
        if (pQueryMaxOrderVolume != NULL)
        {
            copy(&p1, pQueryMaxOrderVolume);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQueryMaxOrderVolume, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSettlementInfoConfirmField p1;
        if (pSettlementInfoConfirm != NULL)
        {
            copy(&p1, pSettlementInfoConfirm);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspSettlementInfoConfirm, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRemoveParkedOrderField p1;
        if (pRemoveParkedOrder != NULL)
        {
            copy(&p1, pRemoveParkedOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspRemoveParkedOrder, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRemoveParkedOrderActionField p1;
        if (pRemoveParkedOrderAction != NULL)
        {
            copy(&p1, pRemoveParkedOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspRemoveParkedOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputExecOrderField p1;
        if (pInputExecOrder != NULL)
        {
            copy(&p1, pInputExecOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspExecOrderInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputExecOrderActionField p1;
        if (pInputExecOrderAction != NULL)
        {
            copy(&p1, pInputExecOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspExecOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputForQuoteField p1;
        if (pInputForQuote != NULL)
        {
            copy(&p1, pInputForQuote);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspForQuoteInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputQuoteField p1;
        if (pInputQuote != NULL)
        {
            copy(&p1, pInputQuote);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQuoteInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputQuoteActionField p1;
        if (pInputQuoteAction != NULL)
        {
            copy(&p1, pInputQuoteAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQuoteAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputBatchOrderActionField p1;
        if (pInputBatchOrderAction != NULL)
        {
            copy(&p1, pInputBatchOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspBatchOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputOptionSelfCloseField p1;
        if (pInputOptionSelfClose != NULL)
        {
            copy(&p1, pInputOptionSelfClose);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspOptionSelfCloseInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputOptionSelfCloseActionField p1;
        if (pInputOptionSelfCloseAction != NULL)
        {
            copy(&p1, pInputOptionSelfCloseAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspOptionSelfCloseAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInputCombActionField p1;
        if (pInputCombAction != NULL)
        {
            copy(&p1, pInputCombAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspCombActionInsert, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcOrderField p1;
        if (pOrder != NULL)
        {
            copy(&p1, pOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryOrder, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradeField p1;
        if (pTrade != NULL)
        {
            copy(&p1, pTrade);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTrade, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestorPositionField p1;
        if (pInvestorPosition != NULL)
        {
            copy(&p1, pInvestorPosition);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestorPosition, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradingAccountField p1;
        if (pTradingAccount != NULL)
        {
            copy(&p1, pTradingAccount);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTradingAccount, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestorField p1;
        if (pInvestor != NULL)
        {
            copy(&p1, pInvestor);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestor, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradingCodeField p1;
        if (pTradingCode != NULL)
        {
            copy(&p1, pTradingCode);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTradingCode, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInstrumentMarginRateField p1;
        if (pInstrumentMarginRate != NULL)
        {
            copy(&p1, pInstrumentMarginRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInstrumentMarginRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInstrumentCommissionRateField p1;
        if (pInstrumentCommissionRate != NULL)
        {
            copy(&p1, pInstrumentCommissionRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInstrumentCommissionRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcExchangeField p1;
        if (pExchange != NULL)
        {
            copy(&p1, pExchange);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryExchange, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcProductField p1;
        if (pProduct != NULL)
        {
            copy(&p1, pProduct);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryProduct, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInstrumentField p1;
        if (pInstrument != NULL)
        {
            copy(&p1, pInstrument);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInstrument, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcDepthMarketDataField p1;
        if (pDepthMarketData != NULL)
        {
            copy(&p1, pDepthMarketData);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryDepthMarketData, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSettlementInfoField p1;
        if (pSettlementInfo != NULL)
        {
            copy(&p1, pSettlementInfo);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySettlementInfo, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTransferBankField p1;
        if (pTransferBank != NULL)
        {
            copy(&p1, pTransferBank);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTransferBank, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestorPositionDetailField p1;
        if (pInvestorPositionDetail != NULL)
        {
            copy(&p1, pInvestorPositionDetail);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestorPositionDetail, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcNoticeField p1;
        if (pNotice != NULL)
        {
            copy(&p1, pNotice);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryNotice, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSettlementInfoConfirmField p1;
        if (pSettlementInfoConfirm != NULL)
        {
            copy(&p1, pSettlementInfoConfirm);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySettlementInfoConfirm, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestorPositionCombineDetailField p1;
        if (pInvestorPositionCombineDetail != NULL)
        {
            copy(&p1, pInvestorPositionCombineDetail);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestorPositionCombineDetail, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcCFMMCTradingAccountKeyField p1;
        if (pCFMMCTradingAccountKey != NULL)
        {
            copy(&p1, pCFMMCTradingAccountKey);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryCFMMCTradingAccountKey, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcEWarrantOffsetField p1;
        if (pEWarrantOffset != NULL)
        {
            copy(&p1, pEWarrantOffset);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryEWarrantOffset, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestorProductGroupMarginField p1;
        if (pInvestorProductGroupMargin != NULL)
        {
            copy(&p1, pInvestorProductGroupMargin);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestorProductGroupMargin, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcExchangeMarginRateField p1;
        if (pExchangeMarginRate != NULL)
        {
            copy(&p1, pExchangeMarginRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryExchangeMarginRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcExchangeMarginRateAdjustField p1;
        if (pExchangeMarginRateAdjust != NULL)
        {
            copy(&p1, pExchangeMarginRateAdjust);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryExchangeMarginRateAdjust, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcExchangeRateField p1;
        if (pExchangeRate != NULL)
        {
            copy(&p1, pExchangeRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryExchangeRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSecAgentACIDMapField p1;
        if (pSecAgentACIDMap != NULL)
        {
            copy(&p1, pSecAgentACIDMap);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySecAgentACIDMap, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcProductExchRateField p1;
        if (pProductExchRate != NULL)
        {
            copy(&p1, pProductExchRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryProductExchRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcProductGroupField p1;
        if (pProductGroup != NULL)
        {
            copy(&p1, pProductGroup);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryProductGroup, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcMMInstrumentCommissionRateField p1;
        if (pMMInstrumentCommissionRate != NULL)
        {
            copy(&p1, pMMInstrumentCommissionRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryMMInstrumentCommissionRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcMMOptionInstrCommRateField p1;
        if (pMMOptionInstrCommRate != NULL)
        {
            copy(&p1, pMMOptionInstrCommRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryMMOptionInstrCommRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInstrumentOrderCommRateField p1;
        if (pInstrumentOrderCommRate != NULL)
        {
            copy(&p1, pInstrumentOrderCommRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInstrumentOrderCommRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradingAccountField p1;
        if (pTradingAccount != NULL)
        {
            copy(&p1, pTradingAccount);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySecAgentTradingAccount, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSecAgentCheckModeField p1;
        if (pSecAgentCheckMode != NULL)
        {
            copy(&p1, pSecAgentCheckMode);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySecAgentCheckMode, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSecAgentTradeInfoField p1;
        if (pSecAgentTradeInfo != NULL)
        {
            copy(&p1, pSecAgentTradeInfo);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQrySecAgentTradeInfo, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcOptionInstrTradeCostField p1;
        if (pOptionInstrTradeCost != NULL)
        {
            copy(&p1, pOptionInstrTradeCost);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryOptionInstrTradeCost, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcOptionInstrCommRateField p1;
        if (pOptionInstrCommRate != NULL)
        {
            copy(&p1, pOptionInstrCommRate);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryOptionInstrCommRate, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcExecOrderField p1;
        if (pExecOrder != NULL)
        {
            copy(&p1, pExecOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryExecOrder, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcForQuoteField p1;
        if (pForQuote != NULL)
        {
            copy(&p1, pForQuote);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryForQuote, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcQuoteField p1;
        if (pQuote != NULL)
        {
            copy(&p1, pQuote);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryQuote, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcOptionSelfCloseField p1;
        if (pOptionSelfClose != NULL)
        {
            copy(&p1, pOptionSelfClose);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryOptionSelfClose, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcInvestUnitField p1;
        if (pInvestUnit != NULL)
        {
            copy(&p1, pInvestUnit);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryInvestUnit, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcCombInstrumentGuardField p1;
        if (pCombInstrumentGuard != NULL)
        {
            copy(&p1, pCombInstrumentGuard);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryCombInstrumentGuard, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcCombActionField p1;
        if (pCombAction != NULL)
        {
            copy(&p1, pCombAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryCombAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTransferSerialField p1;
        if (pTransferSerial != NULL)
        {
            copy(&p1, pTransferSerial);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTransferSerial, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcAccountregisterField p1;
        if (pAccountregister != NULL)
        {
            copy(&p1, pAccountregister);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryAccountregister, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspInfoField p1;
        if (pRspInfo != NULL)
        {
            copy(&p1, pRspInfo);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRspError, &d, 0, nRequestID, bIsLast);
    };
    void OnRtnOrder(CThostFtdcOrderField *pOrder)
    {
        ctp::CThostFtdcOrderField p1;
        if (pOrder != NULL)
        {
            copy(&p1, pOrder);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnOrder, &d, 0, 0, true);
    };
    void OnRtnTrade(CThostFtdcTradeField *pTrade)
    {
        ctp::CThostFtdcTradeField p1;
        if (pTrade != NULL)
        {
            copy(&p1, pTrade);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnTrade, &d, 0, 0, true);
    };
    void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputOrderField p1;
        if (pInputOrder != NULL)
        {
            copy(&p1, pInputOrder);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnOrderInsert, &d, 0, 0, true);
    };
    void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcOrderActionField p1;
        if (pOrderAction != NULL)
        {
            copy(&p1, pOrderAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnOrderAction, &d, 0, 0, true);
    };
    void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus)
    {
        ctp::CThostFtdcInstrumentStatusField p1;
        if (pInstrumentStatus != NULL)
        {
            copy(&p1, pInstrumentStatus);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnInstrumentStatus, &d, 0, 0, true);
    };
    void OnRtnBulletin(CThostFtdcBulletinField *pBulletin)
    {
        ctp::CThostFtdcBulletinField p1;
        if (pBulletin != NULL)
        {
            copy(&p1, pBulletin);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnBulletin, &d, 0, 0, true);
    };
    void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo)
    {
        ctp::CThostFtdcTradingNoticeInfoField p1;
        if (pTradingNoticeInfo != NULL)
        {
            copy(&p1, pTradingNoticeInfo);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnTradingNotice, &d, 0, 0, true);
    };
    void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder)
    {
        ctp::CThostFtdcErrorConditionalOrderField p1;
        if (pErrorConditionalOrder != NULL)
        {
            copy(&p1, pErrorConditionalOrder);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnErrorConditionalOrder, &d, 0, 0, true);
    };
    void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder)
    {
        ctp::CThostFtdcExecOrderField p1;
        if (pExecOrder != NULL)
        {
            copy(&p1, pExecOrder);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnExecOrder, &d, 0, 0, true);
    };
    void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputExecOrderField p1;
        if (pInputExecOrder != NULL)
        {
            copy(&p1, pInputExecOrder);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnExecOrderInsert, &d, 0, 0, true);
    };
    void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcExecOrderActionField p1;
        if (pExecOrderAction != NULL)
        {
            copy(&p1, pExecOrderAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnExecOrderAction, &d, 0, 0, true);
    };
    void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputForQuoteField p1;
        if (pInputForQuote != NULL)
        {
            copy(&p1, pInputForQuote);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnForQuoteInsert, &d, 0, 0, true);
    };
    void OnRtnQuote(CThostFtdcQuoteField *pQuote)
    {
        ctp::CThostFtdcQuoteField p1;
        if (pQuote != NULL)
        {
            copy(&p1, pQuote);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnQuote, &d, 0, 0, true);
    };
    void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputQuoteField p1;
        if (pInputQuote != NULL)
        {
            copy(&p1, pInputQuote);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnQuoteInsert, &d, 0, 0, true);
    };
    void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcQuoteActionField p1;
        if (pQuoteAction != NULL)
        {
            copy(&p1, pQuoteAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnQuoteAction, &d, 0, 0, true);
    };
    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
    {
        ctp::CThostFtdcForQuoteRspField p1;
        if (pForQuoteRsp != NULL)
        {
            copy(&p1, pForQuoteRsp);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnForQuoteRsp, &d, 0, 0, true);
    };
    void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken)
    {
        ctp::CThostFtdcCFMMCTradingAccountTokenField p1;
        if (pCFMMCTradingAccountToken != NULL)
        {
            copy(&p1, pCFMMCTradingAccountToken);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnCFMMCTradingAccountToken, &d, 0, 0, true);
    };
    void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcBatchOrderActionField p1;
        if (pBatchOrderAction != NULL)
        {
            copy(&p1, pBatchOrderAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnBatchOrderAction, &d, 0, 0, true);
    };
    void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose)
    {
        ctp::CThostFtdcOptionSelfCloseField p1;
        if (pOptionSelfClose != NULL)
        {
            copy(&p1, pOptionSelfClose);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnOptionSelfClose, &d, 0, 0, true);
    };
    void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputOptionSelfCloseField p1;
        if (pInputOptionSelfClose != NULL)
        {
            copy(&p1, pInputOptionSelfClose);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnOptionSelfCloseInsert, &d, 0, 0, true);
    };
    void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcOptionSelfCloseActionField p1;
        if (pOptionSelfCloseAction != NULL)
        {
            copy(&p1, pOptionSelfCloseAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnOptionSelfCloseAction, &d, 0, 0, true);
    };
    void OnRtnCombAction(CThostFtdcCombActionField *pCombAction)
    {
        ctp::CThostFtdcCombActionField p1;
        if (pCombAction != NULL)
        {
            copy(&p1, pCombAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnCombAction, &d, 0, 0, true);
    };
    void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcInputCombActionField p1;
        if (pInputCombAction != NULL)
        {
            copy(&p1, pInputCombAction);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnCombActionInsert, &d, 0, 0, true);
    };
    void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcContractBankField p1;
        if (pContractBank != NULL)
        {
            copy(&p1, pContractBank);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryContractBank, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcParkedOrderField p1;
        if (pParkedOrder != NULL)
        {
            copy(&p1, pParkedOrder);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryParkedOrder, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcParkedOrderActionField p1;
        if (pParkedOrderAction != NULL)
        {
            copy(&p1, pParkedOrderAction);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryParkedOrderAction, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcTradingNoticeField p1;
        if (pTradingNotice != NULL)
        {
            copy(&p1, pTradingNotice);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryTradingNotice, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcBrokerTradingParamsField p1;
        if (pBrokerTradingParams != NULL)
        {
            copy(&p1, pBrokerTradingParams);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryBrokerTradingParams, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcBrokerTradingAlgosField p1;
        if (pBrokerTradingAlgos != NULL)
        {
            copy(&p1, pBrokerTradingAlgos);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQryBrokerTradingAlgos, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcQueryCFMMCTradingAccountTokenField p1;
        if (pQueryCFMMCTradingAccountToken != NULL)
        {
            copy(&p1, pQueryCFMMCTradingAccountToken);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQueryCFMMCTradingAccountToken, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer)
    {
        ctp::CThostFtdcRspTransferField p1;
        if (pRspTransfer != NULL)
        {
            copy(&p1, pRspTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnFromBankToFutureByBank, &d, 0, 0, true);
    };
    void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer)
    {
        ctp::CThostFtdcRspTransferField p1;
        if (pRspTransfer != NULL)
        {
            copy(&p1, pRspTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnFromFutureToBankByBank, &d, 0, 0, true);
    };
    void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromBankToFutureByBank, &d, 0, 0, true);
    };
    void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromFutureToBankByBank, &d, 0, 0, true);
    };
    void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer)
    {
        ctp::CThostFtdcRspTransferField p1;
        if (pRspTransfer != NULL)
        {
            copy(&p1, pRspTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnFromBankToFutureByFuture, &d, 0, 0, true);
    };
    void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer)
    {
        ctp::CThostFtdcRspTransferField p1;
        if (pRspTransfer != NULL)
        {
            copy(&p1, pRspTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnFromFutureToBankByFuture, &d, 0, 0, true);
    };
    void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromBankToFutureByFutureManual, &d, 0, 0, true);
    };
    void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromFutureToBankByFutureManual, &d, 0, 0, true);
    };
    void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount)
    {
        ctp::CThostFtdcNotifyQueryAccountField p1;
        if (pNotifyQueryAccount != NULL)
        {
            copy(&p1, pNotifyQueryAccount);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnQueryBankBalanceByFuture, &d, 0, 0, true);
    };
    void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcReqTransferField p1;
        if (pReqTransfer != NULL)
        {
            copy(&p1, pReqTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnBankToFutureByFuture, &d, 0, 0, true);
    };
    void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcReqTransferField p1;
        if (pReqTransfer != NULL)
        {
            copy(&p1, pReqTransfer);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnFutureToBankByFuture, &d, 0, 0, true);
    };
    void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcReqRepealField p1;
        if (pReqRepeal != NULL)
        {
            copy(&p1, pReqRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnRepealBankToFutureByFutureManual, &d, 0, 0, true);
    };
    void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcReqRepealField p1;
        if (pReqRepeal != NULL)
        {
            copy(&p1, pReqRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnRepealFutureToBankByFutureManual, &d, 0, 0, true);
    };
    void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo)
    {
        ctp::CThostFtdcReqQueryAccountField p1;
        if (pReqQueryAccount != NULL)
        {
            copy(&p1, pReqQueryAccount);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnErrRtnQueryBankBalanceByFuture, &d, 0, 0, true);
    };
    void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromBankToFutureByFuture, &d, 0, 0, true);
    };
    void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal)
    {
        ctp::CThostFtdcRspRepealField p1;
        if (pRspRepeal != NULL)
        {
            copy(&p1, pRspRepeal);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnRepealFromFutureToBankByFuture, &d, 0, 0, true);
    };
    void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcReqTransferField p1;
        if (pReqTransfer != NULL)
        {
            copy(&p1, pReqTransfer);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspFromBankToFutureByFuture, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcReqTransferField p1;
        if (pReqTransfer != NULL)
        {
            copy(&p1, pReqTransfer);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspFromFutureToBankByFuture, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcReqQueryAccountField p1;
        if (pReqQueryAccount != NULL)
        {
            copy(&p1, pReqQueryAccount);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::TD_OnRspQueryBankAccountMoneyByFuture, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount)
    {
        ctp::CThostFtdcOpenAccountField p1;
        if (pOpenAccount != NULL)
        {
            copy(&p1, pOpenAccount);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnOpenAccountByBank, &d, 0, 0, true);
    };
    void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount)
    {
        ctp::CThostFtdcCancelAccountField p1;
        if (pCancelAccount != NULL)
        {
            copy(&p1, pCancelAccount);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnCancelAccountByBank, &d, 0, 0, true);
    };
    void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount)
    {
        ctp::CThostFtdcChangeAccountField p1;
        if (pChangeAccount != NULL)
        {
            copy(&p1, pChangeAccount);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::TD_OnRtnChangeAccountByBank, &d, 0, 0, true);
    };
};

template <>
class handler<CThostFtdcMdApi> : public CThostFtdcMdSpi
{
public:
    virtual void send(ctp::CtpMessageType msgType, std::string *d1, std::string *d2, int nRequestID, bool bIsLast) = 0;
    void OnFrontConnected()
    {
        send(ctp::MD_OnFrontConnected, 0, 0, 0, true);
    };
    void OnFrontDisconnected(int nReason)
    {
        send(ctp::MD_OnFrontDisconnected, 0, 0, 0, true);
    };
    void OnHeartBeatWarning(int nTimeLapse)
    {
        send(ctp::MD_OnHeartBeatWarning, 0, 0, 0, true);
    };
    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspUserLoginField p1;
        if (pRspUserLogin != NULL)
        {
            copy(&p1, pRspUserLogin);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspUserLogin, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcUserLogoutField p1;
        if (pUserLogout != NULL)
        {
            copy(&p1, pUserLogout);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspUserLogout, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcRspInfoField p1;
        if (pRspInfo != NULL)
        {
            copy(&p1, pRspInfo);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::MD_OnRspError, &d, 0, nRequestID, bIsLast);
    };
    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSpecificInstrumentField p1;
        if (pSpecificInstrument != NULL)
        {
            copy(&p1, pSpecificInstrument);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspSubMarketData, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSpecificInstrumentField p1;
        if (pSpecificInstrument != NULL)
        {
            copy(&p1, pSpecificInstrument);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspUnSubMarketData, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSpecificInstrumentField p1;
        if (pSpecificInstrument != NULL)
        {
            copy(&p1, pSpecificInstrument);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspSubForQuoteRsp, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
    {
        ctp::CThostFtdcSpecificInstrumentField p1;
        if (pSpecificInstrument != NULL)
        {
            copy(&p1, pSpecificInstrument);
        }
        ctp::CThostFtdcRspInfoField p2;
        if (pRspInfo != NULL)
        {
            copy(&p2, pRspInfo);
        }
        std::string d1 = p1.SerializePartialAsString();
        std::string d2 = p2.SerializePartialAsString();
        send(ctp::MD_OnRspUnSubForQuoteRsp, &d1, &d2, nRequestID, bIsLast);
    };
    void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData)
    {
        ctp::CThostFtdcDepthMarketDataField p1;
        if (pDepthMarketData != NULL)
        {
            copy(&p1, pDepthMarketData);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::MD_OnRtnDepthMarketData, &d, 0, 0, true);
    };
    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp)
    {
        ctp::CThostFtdcForQuoteRspField p1;
        if (pForQuoteRsp != NULL)
        {
            copy(&p1, pForQuoteRsp);
        }
        std::string d = p1.SerializePartialAsString();
        send(ctp::MD_OnRtnForQuoteRsp, &d, 0, 0, true);
    };
};
