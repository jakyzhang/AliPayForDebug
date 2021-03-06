//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWSWithInTableViewBaseCell.h"

#import "PromotionCenterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AFWStockTrackerExposureStructure, BSBadgeView, CDPSpaceView, NSString, finscbffTendencyAdvancedDataPB;

@interface AFWStockTendencyCell : AFWSWithInTableViewBaseCell <UITableViewDelegate, UITableViewDataSource, PromotionCenterDelegate, UITextViewDelegate>
{
    _Bool _refreshRedPoint;
    AFWStockTrackerExposureStructure *_expoStruct;
    CDPSpaceView *_spaceView;
    finscbffTendencyAdvancedDataPB *_model;
    BSBadgeView *_cdpRedView;
    NSString *_spaceCode;
    NSString *_recommendType;
    NSString *_signalDate;
}

@property(retain, nonatomic) NSString *signalDate; // @synthesize signalDate=_signalDate;
@property(retain, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) _Bool refreshRedPoint; // @synthesize refreshRedPoint=_refreshRedPoint;
@property(retain, nonatomic) BSBadgeView *cdpRedView; // @synthesize cdpRedView=_cdpRedView;
@property(retain, nonatomic) finscbffTendencyAdvancedDataPB *model; // @synthesize model=_model;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) AFWStockTrackerExposureStructure *expoStruct; // @synthesize expoStruct=_expoStruct;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)footView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)addPromotion;
- (void)removeRedPoint;
- (void)showRedPoint:(id)arg1;
- (void)updateRedData;
- (void)updateRedPoint;
- (id)productSpmParams:(id)arg1;
- (id)productBuySpm:(id)arg1;
- (id)productViewSpm:(id)arg1;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (id)tabSpmParams;
- (_Bool)validBizModel:(id)arg1;
- (void)dataflowWithModel:(id)arg1 isLocal:(_Bool)arg2;
- (id)daoAndObjidPairs;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)setRichText;
- (void)updateView;
- (void)setupView;
- (double)cellHeight;
- (void)cellDidLoad;
- (void)cellWillDisplay;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewFirstLoadInTab;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

