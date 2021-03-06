//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class AFWStockInfoModel, AFWStockMarketTrendShare, NSString, QEngineStockModel;

@interface LSMarketTrendInfoModel : FMLBaseModel
{
    _Bool _dataProcessorFail;
    QEngineStockModel *_qEngineStockModel;
    AFWStockInfoModel *_stockInfo;
    AFWStockMarketTrendShare *_trendShare;
    NSString *_marketType;
    NSString *_marketTrendDetailActionURL;
    NSString *_stockCode;
    NSString *_stockType;
}

@property(nonatomic) _Bool dataProcessorFail; // @synthesize dataProcessorFail=_dataProcessorFail;
@property(copy, nonatomic) NSString *stockType; // @synthesize stockType=_stockType;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *marketTrendDetailActionURL; // @synthesize marketTrendDetailActionURL=_marketTrendDetailActionURL;
@property(copy, nonatomic) NSString *marketType; // @synthesize marketType=_marketType;
@property(retain, nonatomic) AFWStockMarketTrendShare *trendShare; // @synthesize trendShare=_trendShare;
@property(retain, nonatomic) AFWStockInfoModel *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(retain, nonatomic) QEngineStockModel *qEngineStockModel; // @synthesize qEngineStockModel=_qEngineStockModel;
- (void).cxx_destruct;

@end

