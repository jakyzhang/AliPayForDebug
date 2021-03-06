//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSCardTemplate.h"

#import "PromotionCenterDelegate-Protocol.h"

@class NSString, UIView;

@interface LSCDPCardTemplate : LSCardTemplate <PromotionCenterDelegate>
{
    NSString *_spaceCode;
    UIView *_spaceView;
}

+ (_Bool)reuseable;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (id)cellForTableView:(id)arg1 withContainer:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)getComponentStateWithContainer:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize)componentSizeWithModel:(id)arg1 atIndex:(long long)arg2;
- (id)getComponentWithContainer:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)componentCountForCardModel:(id)arg1;
- (void)checkSpaceCode;
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (Class)eventHandlerClass;
- (_Bool)templateReady;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

