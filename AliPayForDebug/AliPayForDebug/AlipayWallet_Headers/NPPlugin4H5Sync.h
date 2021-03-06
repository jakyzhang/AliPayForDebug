//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncDownCallback-Protocol.h"

@class NSMutableSet, NSString, UIViewController;

@interface NPPlugin4H5Sync : NSObject <SyncDownCallback>
{
    _Bool _autoUnregister;
    UIViewController *_viewController;
    NSString *_productName;
    NSMutableSet *_bizSet;
}

@property(retain, nonatomic) NSMutableSet *bizSet; // @synthesize bizSet=_bizSet;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool autoUnregister; // @synthesize autoUnregister=_autoUnregister;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)H5SyncResponseCallback:(id)arg1;
- (void)removeNotif;
- (void)addNotif:(id)arg1 bizType:(id)arg2 productName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

