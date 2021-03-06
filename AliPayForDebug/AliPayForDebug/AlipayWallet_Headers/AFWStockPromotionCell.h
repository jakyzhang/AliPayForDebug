//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

#import "PromotionCenterDelegate-Protocol.h"

@class CDPSpaceView, NSString;

@interface AFWStockPromotionCell : AFWStockDetailBaseCell <PromotionCenterDelegate>
{
    NSString *_spaceCode;
    CDPSpaceView *_spaceView;
}

- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (id)bizName;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)cellDidLoad;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

