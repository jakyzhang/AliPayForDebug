//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VZMistPageRouter : NSObject
{
    NSMutableDictionary *_routeConfig;
}

+ (id)router;
@property(retain, nonatomic) NSMutableDictionary *routeConfig; // @synthesize routeConfig=_routeConfig;
- (void).cxx_destruct;
- (void)registerRerouteEntries:(id)arg1;
- (void)registerRerouteEntry:(id)arg1;
- (id)routeConfigForTarget:(id)arg1;
- (_Bool)rerouteIfNeeded:(id)arg1 appId:(id)arg2 options:(id)arg3;
- (_Bool)isTargetNeedReroute:(id)arg1;
- (void)refreshConfigFromConfigCenter;

@end
