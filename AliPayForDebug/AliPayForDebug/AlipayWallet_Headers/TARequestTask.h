//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURLSessionTask, PSDSession;

@interface TARequestTask : NSObject
{
    _Bool _canceled;
    NSNumber *_taskId;
    PSDSession *_psdSession;
    NSURLSessionTask *_sessionTask;
}

+ (id)requestsDictionaryForSession:(id)arg1;
+ (id)taskWithAssociatedSession:(id)arg1 taskId:(id)arg2;
+ (id)obtainTaskForSession:(id)arg1 taskId:(id)arg2;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(nonatomic) __weak PSDSession *psdSession; // @synthesize psdSession=_psdSession;
@property(copy, nonatomic) NSNumber *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (void)cleanup;
- (void)abort;

@end
