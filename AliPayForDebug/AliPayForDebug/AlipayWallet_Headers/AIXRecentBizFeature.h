//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIXFeature-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString;

@interface AIXRecentBizFeature : NSObject <AIXFeature>
{
    NSMutableArray *_startAppHistory;
    NSMutableArray *_startAppCurrent;
    NSOperationQueue *_recentBizQueue;
}

@property(retain, nonatomic) NSOperationQueue *recentBizQueue; // @synthesize recentBizQueue=_recentBizQueue;
@property(retain, nonatomic) NSMutableArray *startAppCurrent; // @synthesize startAppCurrent=_startAppCurrent;
@property(retain, nonatomic) NSMutableArray *startAppHistory; // @synthesize startAppHistory=_startAppHistory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)name;
- (id)rawDataOutput:(id)arg1;
- (id)formattedOutput:(id)arg1;
- (void)updateAppId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

