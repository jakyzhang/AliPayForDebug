//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface NBNetDownloadConfig : NSObject
{
    _Bool _needFreqConnectSwitch;
    _Bool _isServerIpListsLoaded;
    _Bool _isConfigLoaded;
    float _deltaPercentPartlyShow;
    NSString *_mmdpHost;
    NSMutableArray *_mmdpIpList;
    NSMutableDictionary *_timeoutConf;
    long long _MaxMultiTaskNum;
    long long _FileInvalidTime;
    long long _DelayReConnTime;
    long long _ConnIdleTimeout;
    long long _PerTaskMaxTotalRetryN;
    long long _PerTaskMaxLogicRetryN;
    long long _PerFileMaxB;
    long long _AllTaskMaxT;
    long long _AllTaskMaxN;
}

@property(nonatomic) _Bool isConfigLoaded; // @synthesize isConfigLoaded=_isConfigLoaded;
@property(nonatomic) _Bool isServerIpListsLoaded; // @synthesize isServerIpListsLoaded=_isServerIpListsLoaded;
@property(nonatomic) _Bool needFreqConnectSwitch; // @synthesize needFreqConnectSwitch=_needFreqConnectSwitch;
@property(nonatomic) float deltaPercentPartlyShow; // @synthesize deltaPercentPartlyShow=_deltaPercentPartlyShow;
@property(nonatomic) long long AllTaskMaxN; // @synthesize AllTaskMaxN=_AllTaskMaxN;
@property(nonatomic) long long AllTaskMaxT; // @synthesize AllTaskMaxT=_AllTaskMaxT;
@property(nonatomic) long long PerFileMaxB; // @synthesize PerFileMaxB=_PerFileMaxB;
@property(nonatomic) long long PerTaskMaxLogicRetryN; // @synthesize PerTaskMaxLogicRetryN=_PerTaskMaxLogicRetryN;
@property(nonatomic) long long PerTaskMaxTotalRetryN; // @synthesize PerTaskMaxTotalRetryN=_PerTaskMaxTotalRetryN;
@property(nonatomic) long long ConnIdleTimeout; // @synthesize ConnIdleTimeout=_ConnIdleTimeout;
@property(nonatomic) long long DelayReConnTime; // @synthesize DelayReConnTime=_DelayReConnTime;
@property(nonatomic) long long FileInvalidTime; // @synthesize FileInvalidTime=_FileInvalidTime;
@property(nonatomic) long long MaxMultiTaskNum; // @synthesize MaxMultiTaskNum=_MaxMultiTaskNum;
@property(retain, nonatomic) NSMutableDictionary *timeoutConf; // @synthesize timeoutConf=_timeoutConf;
@property(retain, nonatomic) NSMutableArray *mmdpIpList; // @synthesize mmdpIpList=_mmdpIpList;
@property(retain, nonatomic) NSString *mmdpHost; // @synthesize mmdpHost=_mmdpHost;
- (void).cxx_destruct;
- (_Bool)checkFuseWhenAddTask;
- (_Bool)checkFuseWhenDownloadTaskWithRecvedBytes:(long long)arg1 fileSize:(long long)arg2;
- (_Bool)checkFuseWhenDownloadTaskWithLogicRetriedCount:(long long)arg1;
- (_Bool)checkFuseWhenDownloadTaskWithTotalRetriedCount:(long long)arg1;
- (double)maxTaskTimeout;
- (long long)minKeyTaskNum;
- (long long)maxPrivHeadLength;
- (long long)maxHttpHeadLength;
- (long long)maxDownloadFileSize;
- (id)httpUrlPath;
- (long long)getMMDPTimeout:(long long)arg1;
- (id)getMMDPAddr:(long long)arg1;
- (void)freshMMDPConfig:(id)arg1;
- (void)checkAndLoadMDDPConfig;
- (void)freshMMDPServerIpLists:(id)arg1;
- (void)checkAndLoadMMDPServerIpLists;
- (id)init;

@end
