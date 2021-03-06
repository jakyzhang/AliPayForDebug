//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAppManager, DTRpcAsyncCaller, NSArray, WHCardDB, WHCardRpc;
@protocol OS_dispatch_queue, WHCardPageDataTask;

@interface WHCardDataCenter : NSObject
{
    id <WHCardPageDataTask> _page;
    DTRpcAsyncCaller *_refreshRpcCaller;
    NSArray *_cardList;
    WHCardRpc *_rpcHandler;
    WHCardDB *_db;
    ACAppManager *_appManager;
    double _lastSuccessTime;
    NSArray *_acApps;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

+ (id)dataCenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSArray *acApps; // @synthesize acApps=_acApps;
@property(nonatomic) double lastSuccessTime; // @synthesize lastSuccessTime=_lastSuccessTime;
@property(retain, nonatomic) ACAppManager *appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) WHCardDB *db; // @synthesize db=_db;
@property(retain, nonatomic) WHCardRpc *rpcHandler; // @synthesize rpcHandler=_rpcHandler;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;
- (void)addAsyncTask:(CDUnknownBlockType)arg1;
- (void)cleanLastSuccessTime;
- (id)defaultCartListWithRegion:(id)arg1;
- (id)buildrefreshModeWithCallMode:(int)arg1;
- (int)buildRefreshOpWithCallMode:(int)arg1;
- (void)postHomeCard:(id)arg1 source:(id)arg2;
- (void)sendRpc:(id)arg1 refreshMode:(id)arg2;
- (void)callSwitchEditionRpc:(id)arg1;
- (void)loaddb:(id)arg1 onEnd:(CDUnknownBlockType)arg2;
- (void)callRefreshRpc:(int)arg1;
- (void)requestApps:(CDUnknownBlockType)arg1;
- (id)reloadAcAppsFromAppCenter;
- (void)mergeAppCenter:(id)arg1;
- (void)setDataChangeTaskPage:(id)arg1;

@end

