//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface NBLogSceneNetworkFlowManager : NSObject
{
    NSMutableArray *_launchedFlowSets;
    NSMutableArray *_finishedFlowSets;
    NSArray *_fullLinkFlowSets;
}

@property(retain, nonatomic) NSArray *fullLinkFlowSets; // @synthesize fullLinkFlowSets=_fullLinkFlowSets;
@property(retain, nonatomic) NSMutableArray *finishedFlowSets; // @synthesize finishedFlowSets=_finishedFlowSets;
@property(retain, nonatomic) NSMutableArray *launchedFlowSets; // @synthesize launchedFlowSets=_launchedFlowSets;
- (void).cxx_destruct;
- (void)submitUnfinishFlowWithGeneralDict:(id)arg1;
- (void)generateFullLinkSets;
- (void)popFlowWithURL:(id)arg1 eventType:(id)arg2 uniqueId:(id)arg3 timeStamp:(double)arg4;
- (void)pushFlowWithURL:(id)arg1 eventType:(id)arg2 uniqueId:(id)arg3 timeStamp:(double)arg4;
- (id)init;

@end
