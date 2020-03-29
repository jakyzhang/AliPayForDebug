//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UnavailableCheckStrategy-Protocol.h"

@class NSMutableDictionary, NSString;

@interface LowPriorityUnavailableCheckStrategy : NSObject <UnavailableCheckStrategy>
{
    NSMutableDictionary *_unavailableLogItemMap;
    struct _opaque_pthread_mutex_t _mutex;
}

@property(nonatomic) struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property(retain, nonatomic) NSMutableDictionary *unavailableLogItemMap; // @synthesize unavailableLogItemMap=_unavailableLogItemMap;
- (void).cxx_destruct;
- (_Bool)shouldReportUnavailableCheckWithType:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
