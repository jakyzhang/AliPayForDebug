//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface AUIconfontCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)cachedIcon:(id)arg1 fontName:(id)arg2 width:(double)arg3 color:(id)arg4 alpha:(double)arg5;
- (id)cachedIcon:(id)arg1 fontName:(id)arg2 width:(double)arg3 color:(id)arg4;
- (void)addIcon:(id)arg1 name:(id)arg2 fontName:(id)arg3 width:(double)arg4 color:(id)arg5 alpha:(double)arg6;
- (void)addIcon:(id)arg1 name:(id)arg2 fontName:(id)arg3 width:(double)arg4 color:(id)arg5;
- (void)handleMemoryWarningNotification;
- (id)init;
- (void)dealloc;

@end

