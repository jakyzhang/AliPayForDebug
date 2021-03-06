//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCustomNavigationBarProtocol-Protocol.h"
#import "AURefreshViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WHDataMergeEngineDelegate-Protocol.h"
#import "WHUserHeaderViewDelegate-Protocol.h"

@class AURefreshView, NSMutableDictionary, NSString, UIActivityIndicatorView, UITableView, UIView, WHDataMergeEngine, WHNewComerGuidanceView, WHSwitchEditionFooterView, WHViewModelResult, WWAssetsNavItemView;

@interface WWAssetsViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, AURefreshViewDelegate, WHDataMergeEngineDelegate, WHUserHeaderViewDelegate, APCustomNavigationBarProtocol>
{
    AURefreshView *_pullDownLoadingView;
    double _currentTextScale;
    _Bool _scaleFontSwitchDisable;
    _Bool _isWillAppear;
    _Bool _isAmountBoardExposure;
    _Bool _isIncomeExposure;
    _Bool _isBalanceExposure;
    _Bool _isSwitchFooterExposure;
    _Bool _isSwitchPersonalExposure;
    _Bool _isSwitchMerchantExposure;
    _Bool _isSwitchingEdition;
    UITableView *_tableView;
    WHSwitchEditionFooterView *_switchEditionFooterView;
    UIView *_defaultFooterView;
    UIActivityIndicatorView *_indictor;
    WHViewModelResult *_viewModelResult;
    WHDataMergeEngine *_dataMergeEngine;
    NSMutableDictionary *_exposureDict;
    WWAssetsNavItemView *_whNavigationItem;
    WHNewComerGuidanceView *_guidanceView;
}

@property(nonatomic) _Bool isSwitchingEdition; // @synthesize isSwitchingEdition=_isSwitchingEdition;
@property(retain, nonatomic) WHNewComerGuidanceView *guidanceView; // @synthesize guidanceView=_guidanceView;
@property(retain, nonatomic) WWAssetsNavItemView *whNavigationItem; // @synthesize whNavigationItem=_whNavigationItem;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) WHDataMergeEngine *dataMergeEngine; // @synthesize dataMergeEngine=_dataMergeEngine;
@property(retain, nonatomic) WHViewModelResult *viewModelResult; // @synthesize viewModelResult=_viewModelResult;
@property(retain, nonatomic) UIActivityIndicatorView *indictor; // @synthesize indictor=_indictor;
@property(retain, nonatomic) UIView *defaultFooterView; // @synthesize defaultFooterView=_defaultFooterView;
@property(retain, nonatomic) WHSwitchEditionFooterView *switchEditionFooterView; // @synthesize switchEditionFooterView=_switchEditionFooterView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)monitorOtherViews;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)dataChangeTask:(id)arg1;
- (void)fontLevelDidChanged;
- (void)onDidEnterForeground;
- (void)onDidEnterBackground;
- (void)onDidBecomeActive;
- (void)didRefreshAnimationEnd;
- (void)didTriggerRefresh:(id)arg1;
- (void)footView:(id)arg1 didSwitchEdition:(id)arg2;
- (id)spmParams;
- (void)exposureSwitchFooter;
- (void)setTableViewFooterView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)exposureAmountBoardView;
- (id)merchantCellWithCell:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (id)certifyCellWithTableView:(id)arg1 indexPath:(id)arg2;
- (void)cellClicked:(id)arg1 tableViewCell:(id)arg2;
- (void)userClicked:(id)arg1;
- (void)mergeEngine:(id)arg1 badgeUpdate:(id)arg2;
- (void)mergeEngine:(id)arg1 refreshWithViewModelResult:(id)arg2;
- (void)mergeEngine:(id)arg1 result:(id)arg2 viewModelResult:(id)arg3;
- (void)mergeEngine:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)loadRefresh;
- (void)auRefreshViewDidFinishAnimation:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (void)regionDidChanged:(id)arg1;
- (void)languageSettingDidChanged:(id)arg1;
- (void)loadOpenPlatformFromACNofication:(id)arg1;
- (void)didReceiveTextFontSizeChangeNotification:(id)arg1;
- (void)pipeLineWillBecomeToStart;
- (void)loginDidFinished:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)addObserverToNotificationPhase2;
- (void)addObserverToNotificationPhase1;
- (void)showNewComerGuidance;
- (void)reportExposure;
- (void)refreshSettingBadge;
- (_Bool)isMerchantEdition:(id)arg1;
- (void)setTabBadge:(_Bool)arg1;
- (void)builtTextScale;
- (void)readAllConfiguration;
- (id)rightCustomNavigationBarButtonItem;
- (void)setupNavigationBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

