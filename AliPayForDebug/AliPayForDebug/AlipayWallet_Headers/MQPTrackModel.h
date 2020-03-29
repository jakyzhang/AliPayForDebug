//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MQPPaySession, MQPTrackOrderInfo, MQPTrackTidInfo, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface MQPTrackModel : NSObject <NSCoding>
{
    _Bool _isObserver;
    NSString *_fileName;
    MQPPaySession *_session;
    MQPTrackOrderInfo *_orderInfo;
    MQPTrackTidInfo *_tidInfo;
    NSMutableDictionary *_asyncInfoDict;
    NSString *_logId;
    NSString *_logTime;
    NSString *_logTimeInterval;
    NSString *_exitCode;
    NSString *_orderStr;
    NSString *_appInfo;
    NSString *_sdkInfo;
    NSString *_devInfo;
    NSString *_payResult;
    NSMutableArray *_errorTracks;
    NSMutableArray *_normalTracks;
    NSMutableArray *_spmTracks;
    NSMutableArray *_tplTracks;
    NSMutableArray *_perfTracks;
    NSMutableString *_viTrack;
    NSMutableDictionary *_pageTracks;
}

@property(nonatomic) _Bool isObserver; // @synthesize isObserver=_isObserver;
@property(retain, nonatomic) NSMutableDictionary *pageTracks; // @synthesize pageTracks=_pageTracks;
@property(retain, nonatomic) NSMutableString *viTrack; // @synthesize viTrack=_viTrack;
@property(retain, nonatomic) NSMutableArray *perfTracks; // @synthesize perfTracks=_perfTracks;
@property(retain, nonatomic) NSMutableArray *tplTracks; // @synthesize tplTracks=_tplTracks;
@property(retain, nonatomic) NSMutableArray *spmTracks; // @synthesize spmTracks=_spmTracks;
@property(retain, nonatomic) NSMutableArray *normalTracks; // @synthesize normalTracks=_normalTracks;
@property(retain, nonatomic) NSMutableArray *errorTracks; // @synthesize errorTracks=_errorTracks;
@property(copy, nonatomic) NSString *payResult; // @synthesize payResult=_payResult;
@property(copy, nonatomic) NSString *devInfo; // @synthesize devInfo=_devInfo;
@property(copy, nonatomic) NSString *sdkInfo; // @synthesize sdkInfo=_sdkInfo;
@property(copy, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(copy, nonatomic) NSString *orderStr; // @synthesize orderStr=_orderStr;
@property(copy, nonatomic) NSString *exitCode; // @synthesize exitCode=_exitCode;
@property(copy, nonatomic) NSString *logTimeInterval; // @synthesize logTimeInterval=_logTimeInterval;
@property(copy, nonatomic) NSString *logTime; // @synthesize logTime=_logTime;
@property(copy, nonatomic) NSString *logId; // @synthesize logId=_logId;
@property(retain, nonatomic) NSMutableDictionary *asyncInfoDict; // @synthesize asyncInfoDict=_asyncInfoDict;
@property(retain, nonatomic) MQPTrackTidInfo *tidInfo; // @synthesize tidInfo=_tidInfo;
@property(retain, nonatomic) MQPTrackOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(nonatomic) __weak MQPPaySession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tplTrack;
- (id)perfTrack;
- (id)normalTrack;
- (id)errorTrack;
- (void)paddingTrackInfo;
- (id)fetchDevInfo;
- (void)fetchAsyncInfo;
- (id)fetchTidInfo;
- (id)fetchSdkInfo;
- (id)fetchAppInfo;
- (id)fetchTrackNo;
- (id)storeToLocal;
- (_Bool)hasExpired;
- (id)getTrackLogData;
- (id)description;
- (void)addPerfTrack:(id)arg1;
- (void)addTplTrack:(id)arg1;
- (void)addNormalTrack:(id)arg1;
- (void)addErrorTrack:(id)arg1;
- (void)addResultTrack:(id)arg1;
- (void)onTrackResult:(id)arg1;
- (void)onTrackEnd:(id)arg1;
- (id)onTrackBiz:(id)arg1 andProgress:(id)arg2;
- (id)onTrackWithView:(id)arg1 actType:(id)arg2 actName:(id)arg3 nextView:(id)arg4;
- (void)onTrackRes:(id)arg1;
- (void)onTrackTpl:(id)arg1;
- (void)onTrackPerf:(id)arg1;
- (void)onTrackEvent:(id)arg1;
- (void)onTrackError:(int)arg1 code:(id)arg2 error:(id)arg3;
- (void)onTrackCrashError:(id)arg1 error:(id)arg2;
- (void)onTrackBizError:(id)arg1 error:(id)arg2;
- (void)onTrackNetError:(id)arg1 error:(id)arg2;
- (void)onTrackTpl:(id)arg1 error:(id)arg2;
- (void)onTrackBn:(id)arg1 error:(id)arg2;
- (void)onTrackWarn:(id)arg1 error:(id)arg2;
- (void)onTrackData:(id)arg1 error:(id)arg2;
- (void)setOutTradeLaunchType:(id)arg1;
- (void)becomeActive:(id)arg1;
- (void)doResignActive:(id)arg1;
- (void)dealloc;
- (id)initWithOrderInfo:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initSingleTrackWithBizType:(id)arg1;
- (id)initSingleTrack;
- (id)init;

@end
