//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TABubbleMenuDelegate-Protocol.h"

@class H5WebViewController, NSArray, NSDictionary, NSString, PSDKernel, TABaseBarButtonItem, TABaseNavBarRightButton;

@interface TANavBarCenter : NSObject <TABubbleMenuDelegate>
{
    id _tinyActionSheet;
    id _tinyActionHandler;
    id _recentlyAppMenu;
    id _popMenu;
    id _rightBtnItem;
    id _customBtnItem;
    NSArray *_dataSource;
    long long _customItemState;
    long long _currentItemSate;
    NSString *_hardwareNoticetext;
    _Bool _isLight4LastChangeColor;
    unsigned long long _hasBarButtonBeenSetByTheme;
    _Bool _naviColorIsLight;
    _Bool _needInvokeOptionMenu;
    NSDictionary *_favoriteBadgeInfo;
    NSDictionary *_badgeInfos;
    PSDKernel *_target;
    CDUnknownBlockType _onCloseButtonLongPressedAction;
    CDUnknownBlockType _onNavBarColorDidChangedAction;
    CDUnknownBlockType _onSettingButtonClickedAction;
    CDUnknownBlockType _doChangeActionSheetTitle;
    CDUnknownBlockType _doShowActionSheet;
    CDUnknownBlockType _doHidePopTipMsgView;
    CDUnknownBlockType _doSetupBadgeInfo;
    H5WebViewController *_webVC;
    id _popMsgView;
    NSString *_componentId;
}

+ (id)navBarCenterInNode:(id)arg1;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) id popMsgView; // @synthesize popMsgView=_popMsgView;
@property(retain, nonatomic) id popMenu; // @synthesize popMenu=_popMenu;
@property(retain, nonatomic) id recentlyAppMenu; // @synthesize recentlyAppMenu=_recentlyAppMenu;
@property(retain, nonatomic) id tinyActionHandler; // @synthesize tinyActionHandler=_tinyActionHandler;
@property(retain, nonatomic) id tinyActionSheet; // @synthesize tinyActionSheet=_tinyActionSheet;
@property(retain, nonatomic) TABaseBarButtonItem *customBtnItem; // @synthesize customBtnItem=_customBtnItem;
@property(retain, nonatomic) TABaseNavBarRightButton *rightBtnItem; // @synthesize rightBtnItem=_rightBtnItem;
@property(copy, nonatomic) NSString *hardwareNoticetext; // @synthesize hardwareNoticetext=_hardwareNoticetext;
@property(nonatomic) __weak H5WebViewController *webVC; // @synthesize webVC=_webVC;
@property(nonatomic) _Bool needInvokeOptionMenu; // @synthesize needInvokeOptionMenu=_needInvokeOptionMenu;
@property(nonatomic) _Bool naviColorIsLight; // @synthesize naviColorIsLight=_naviColorIsLight;
@property(copy, nonatomic) CDUnknownBlockType doSetupBadgeInfo; // @synthesize doSetupBadgeInfo=_doSetupBadgeInfo;
@property(copy, nonatomic) CDUnknownBlockType doHidePopTipMsgView; // @synthesize doHidePopTipMsgView=_doHidePopTipMsgView;
@property(copy, nonatomic) CDUnknownBlockType doShowActionSheet; // @synthesize doShowActionSheet=_doShowActionSheet;
@property(copy, nonatomic) CDUnknownBlockType doChangeActionSheetTitle; // @synthesize doChangeActionSheetTitle=_doChangeActionSheetTitle;
@property(copy, nonatomic) CDUnknownBlockType onSettingButtonClickedAction; // @synthesize onSettingButtonClickedAction=_onSettingButtonClickedAction;
@property(copy, nonatomic) CDUnknownBlockType onNavBarColorDidChangedAction; // @synthesize onNavBarColorDidChangedAction=_onNavBarColorDidChangedAction;
@property(copy, nonatomic) CDUnknownBlockType onCloseButtonLongPressedAction; // @synthesize onCloseButtonLongPressedAction=_onCloseButtonLongPressedAction;
@property(nonatomic) __weak PSDKernel *target; // @synthesize target=_target;
@property(retain, nonatomic) NSDictionary *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *favoriteBadgeInfo; // @synthesize favoriteBadgeInfo=_favoriteBadgeInfo;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isKeepFavoriteStatus;
- (_Bool)isNeedHideItem:(id)arg1 webVC:(id)arg2;
- (void)checkShouldHideFavoriteItem;
- (void)changeColor:(_Bool)arg1;
- (void)replayLastChangeColor;
- (void)changeColorByBarButtonThemeSetting:(_Bool)arg1;
- (_Bool)isCustomBarShow;
- (struct CGRect)getCustomBarFrame;
- (struct CGRect)getRightBarFrame;
- (void)hideCustomBarButtonItem;
- (void)showCustomBarButtonItem;
- (void)showRightBarButtonItems;
@property(readonly, nonatomic) NSString *appId;
- (id)initWithAppid:(id)arg1 target:(id)arg2 h5WebViewController:(id)arg3;
- (_Bool)checkConditionsForShowingTipMsg;
- (_Bool)isShowIcon;
- (id)getAppIconURL:(id)arg1;
- (void)showPopViewToWindow:(id)arg1 nbApp:(id)arg2 title:(id)arg3 desc:(id)arg4 tag:(long long)arg5;
- (void)hidePopTipMsgView;
- (void)hideAddToHomeTipView;
- (void)hideAddFavoriteTipView;
- (CDUnknownBlockType)block4ShowTip;
- (void)ta_categoryInitialCustom_TAPopMsgView;
- (_Bool)isMaxFrequencyForAdding2HomeTip;
- (_Bool)isMaxFrequency4FavoriteTip;
- (void)markAddToHomeTipHasShown;
- (void)markFavoriteTipHasShown;
- (void)showAddToHomeAppTipView;
- (void)showAddFavoriteTipView;
- (void)addCustomAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addCustomAction:(id)arg1;
- (void)hideAction4Mid:(id)arg1;
- (void)showAction4BackToHome;
- (void)hidePopmenu;
- (void)ta_categoryInitialCustom_PopMenu;
- (void)ta_categoryInitialCustom_ActionSheet;
- (void)setItemIcon:(id)arg1 context:(id)arg2;
- (void)ta_categoryInitialCustom_Others;
- (void)onClickFavoriteBtn:(id)arg1;
- (void)onCustomBtnClicked:(id)arg1;
- (_Bool)isMacaoRegion;
- (void)onLongBtnClicked:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onSettingBtnClicked:(id)arg1;
- (void)sendAppxEventHandler:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)createNavBarCustomButton;
- (void)ta_categoryInitialCustom_RightButtons;
- (void)startSettingBtnAnimation;
- (void)stopSettingBtnAnimation;
- (void)updateSettingBtnImage:(long long)arg1;
- (void)updateBadgeInfos:(_Bool)arg1;
- (void)setupBadgeInfos;
- (void)ta_categoryInitialCustom_BadgeInfo;
- (void)hideRecentlyAppMenu;
- (void)onBubbleMenuItemClick:(unsigned long long)arg1;
- (id)bubleMenuItems;
- (id)getRecentApps;
- (void)ta_categoryInitialCustom_BubbleMenu;
- (void)hideNaviBarFavoriteItem;
- (void)setFavButtonState:(_Bool)arg1;
- (void)updateFavoriteStatus:(_Bool)arg1;
- (void)requestFavoriteStatus;
- (id)getPSDSession;
- (void)receiveNotificationFavorite:(id)arg1;
- (void)storeRpcFavoriteStateInSession:(_Bool)arg1;
- (void)doFavoriteSpmlog;
- (void)createNaviBarFavoriteItem;
- (_Bool)isMacaoRegion;
- (void)ta_categoryInitialCustom_Favorite;
- (id)popmenuHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

