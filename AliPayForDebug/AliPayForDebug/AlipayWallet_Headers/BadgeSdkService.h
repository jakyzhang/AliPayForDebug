//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTService-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BadgeSdkService : NSObject <PromotionCenterDelegate, DTService>
{
    NSMutableDictionary *_obsevers;
    NSMutableDictionary *_localSpaceObjects;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
- (void).cxx_destruct;
- (void)removeLocalSpaceObject:(id)arg1 widgetId:(id)arg2;
- (void)addLocalSpaceObject:(id)arg1 spaceCode:(id)arg2 widgetId:(id)arg3;
- (id)localSpaceObject:(id)arg1;
- (void)addLocalSpaceObjectsToSpaceInfo:(id)arg1;
- (void)removeInvalidParentObjectsForSpaceInfo:(id)arg1;
- (id)badgeSpaceInfoFromCDPSpaceInfo:(id)arg1;
- (id)getVaildSpaceInfo:(id)arg1 vaildWidgetIds:(id)arg2;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)queryBadgeSpaceInfo:(id)arg1 widgetIds:(id)arg2 immediately:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)queryBadgeSpaceInfo:(id)arg1 widgetIds:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)queryBadgeSpaceInfos:(id)arg1 widgetIds:(id)arg2 immediately:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)queryBadgeSpaceInfos:(id)arg1 widgetIds:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)getBadgeSpaceInfo:(id)arg1 widgetIds:(id)arg2;
- (id)observersForSpaceCode:(id)arg1;
- (void)reportAction:(id)arg1 actionType:(long long)arg2 singleObject:(_Bool)arg3 params:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)reportAction:(id)arg1 actionType:(long long)arg2 params:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)reportAction:(id)arg1 actionType:(long long)arg2 singleObject:(_Bool)arg3;
- (void)reportAction:(id)arg1 actionType:(long long)arg2;
- (id)badgeRequestForSpaceCode:(id)arg1 widgetId:(id)arg2;
- (void)setBadgeRequest:(id)arg1 autoUpdate:(_Bool)arg2;
- (_Bool)needIngnoreRequest:(id)arg1;
- (void)checkBadgeSpaceInfo:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 spaceCode:(id)arg2;
- (void)dealloc;
- (void)willDestroy;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

