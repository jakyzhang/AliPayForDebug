//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class CSPublishFeedManager, NSString;
@protocol CSPublishFeedDelegate;

@interface CSPublishFeed : NSObject <UIActionSheetDelegate>
{
    id <CSPublishFeedDelegate> _delegate;
    CSPublishFeedManager *_publishFeedManager;
}

+ (void)sendCardWithSFFeed:(id)arg1 biz:(id)arg2 sendStatus:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) CSPublishFeedManager *publishFeedManager; // @synthesize publishFeedManager=_publishFeedManager;
@property(nonatomic) __weak id <CSPublishFeedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetResourceUI;
- (void)showPublishActionSheetIn:(id)arg1 withBiz:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

