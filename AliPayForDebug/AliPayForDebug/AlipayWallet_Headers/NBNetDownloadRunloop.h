//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface NBNetDownloadRunloop : NSObject
{
    NSThread *_downloadThread;
}

+ (id)thread;
+ (id)instance;
@property(retain, nonatomic) NSThread *downloadThread; // @synthesize downloadThread=_downloadThread;
- (void).cxx_destruct;
- (void)threadFunc;
- (id)init;

@end

