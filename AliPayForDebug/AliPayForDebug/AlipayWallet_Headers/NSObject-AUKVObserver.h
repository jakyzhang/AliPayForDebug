//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (AUKVObserver)
+ (_Bool)isDeallocEndObserveEnaled_au;
- (void)endObserveObject_au:(id)arg1 keyPath:(id)arg2;
- (void)startObserveObject_au:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)kvoObserver_au:(id)arg1 bind:(_Bool)arg2;
- (id)kvo_observers_au;
@end
