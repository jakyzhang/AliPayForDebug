//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AOFJsApi.h"

@interface TAJsapiHandler4RecentUsedTinyApps : AOFJsApi
{
}

- (long long)maxRecentUsedAppInfoCache;
- (void)updateApps:(id)arg1;
- (void)handleApps:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)getRecentUsedApps:(CDUnknownBlockType)arg1;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)recentUsedAppSortPool;
- (id)recentUsedAppInfoPool;

@end

