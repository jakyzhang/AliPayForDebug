//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface SPMQueue : NSObject
{
    NSMutableArray *_mArray;
    NSLock *_lock;
    unsigned long long _size;
}

- (void).cxx_destruct;
- (id)tail;
- (void)backwardForEach:(CDUnknownBlockType)arg1;
- (void)forEach:(CDUnknownBlockType)arg1;
- (void)enqueue:(id)arg1;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end

