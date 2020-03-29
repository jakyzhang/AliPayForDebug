//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSString, OnsiteBarcodeOtpInfo;
@protocol OSPCashierChannelDelegate;

@interface PollingQueryEngine : NSObject
{
    _Bool _canQuery;
    long long _timeount;
    long long _queryCount;
    double _startQueryTime;
    double _intervalTime;
    _Bool _isRuning;
    _Bool _isStop;
    _Bool _useOriginal;
    _Bool _isQuerying;
    OnsiteBarcodeOtpInfo *_queryParam;
    NSString *_queryChannelIndex;
    NSString *_payChannelSessionId;
    id <OSPCashierChannelDelegate> _cashierChannelDelegate;
    DTRpcAsyncCaller *_caller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(nonatomic) __weak id <OSPCashierChannelDelegate> cashierChannelDelegate; // @synthesize cashierChannelDelegate=_cashierChannelDelegate;
@property(retain, nonatomic) NSString *payChannelSessionId; // @synthesize payChannelSessionId=_payChannelSessionId;
@property(nonatomic) _Bool isQuerying; // @synthesize isQuerying=_isQuerying;
@property(nonatomic) _Bool useOriginal; // @synthesize useOriginal=_useOriginal;
@property(retain, nonatomic) NSString *queryChannelIndex; // @synthesize queryChannelIndex=_queryChannelIndex;
@property(retain, nonatomic) OnsiteBarcodeOtpInfo *queryParam; // @synthesize queryParam=_queryParam;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
- (void).cxx_destruct;
- (void)dealloc;
- (id)GetCurUserID;
- (void)StopQuery;
- (void)runInMainThread:(id)arg1;
- (id)convertPayResultToDict:(id)arg1;
- (void)DoStartQueryWithParam:(id)arg1;
- (void)initQueryEngineConfig;
- (void)StartQueryWithParam:(id)arg1 channelIndex:(id)arg2 timeout:(long long)arg3;
- (id)init;

@end
