//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFWFinChartCaseRPCManager : NSObject
{
}

+ (id)fetchKLineSignalDataWithStockInfo:(id)arg1 endDate:(id)arg2 kLineType:(id)arg3 recoveredType:(long long)arg4 onFinish:(CDUnknownBlockType)arg5;
+ (id)storeidWithSymbol:(id)arg1 recover:(long long)arg2 period:(id)arg3;
+ (id)fetchCurrentStockStockTrendsWithStockCode:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (id)fetchFiveDayStockTrendsWithStockInfo:(id)arg1 allData:(_Bool)arg2 onFinish:(CDUnknownBlockType)arg3;
+ (id)fetchIndicatorWithStockInfo:(id)arg1 endDate:(id)arg2 indicatorName:(id)arg3 recoveredType:(long long)arg4 kLineType:(id)arg5 params:(id)arg6 onFinish:(CDUnknownBlockType)arg7;
+ (id)fetchKLineDataWithStockInfo:(id)arg1 endDate:(id)arg2 kLineType:(id)arg3 recoveredType:(long long)arg4 onFinish:(CDUnknownBlockType)arg5;
+ (id)fetchKLineDataAndIndicatorWithStockInfo:(id)arg1 indicatorName:(id)arg2 params:(id)arg3 endDate:(id)arg4 kLineType:(id)arg5 recoveredType:(long long)arg6 requestType:(int)arg7 onFinish:(CDUnknownBlockType)arg8;

@end

