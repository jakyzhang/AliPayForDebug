//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCErrorDelegate-Protocol.h"

@class HCErrorView, HCNextEmptyView, HCNextLoadMoreView, HCNextLoadingView, HCRefreshDelegate, HomeCardDataCenter, NSString, UITableView;

@interface HCListFooterWidget : NSObject <HCErrorDelegate>
{
    double _screenWidth;
    UITableView *_tableview;
    HomeCardDataCenter *_dataCenter;
    HCRefreshDelegate *_refreshDelegate;
    HCNextEmptyView *_emptyView;
    HCNextLoadingView *_loadingView;
    HCErrorView *_errView;
    HCNextLoadMoreView *_loadmoreView;
}

@property(retain, nonatomic) HCNextLoadMoreView *loadmoreView; // @synthesize loadmoreView=_loadmoreView;
@property(retain, nonatomic) HCErrorView *errView; // @synthesize errView=_errView;
@property(retain, nonatomic) HCNextLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HCNextEmptyView *emptyView; // @synthesize emptyView=_emptyView;
- (void).cxx_destruct;
- (void)retryRefreshCard;
- (void)clean;
- (void)refreshFooterType:(unsigned long long)arg1;
- (void)refreshFooter:(id)arg1;
- (void)setRefreshDelegate:(id)arg1;
- (void)setDataCenter:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

