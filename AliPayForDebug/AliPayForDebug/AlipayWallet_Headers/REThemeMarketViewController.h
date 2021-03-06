//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REBaseSendController.h"

#import "RERouterDelegate-Protocol.h"
#import "REUTemplateRollingViewDelegate-Protocol.h"

@class NSString, REThemeCategoryView, REThemeDataManager, REThemePreviewView, REUTemplateRollingView, UILabel, UIView, giftprodGiftHbTemplateViewInfo;

@interface REThemeMarketViewController : REBaseSendController <REUTemplateRollingViewDelegate, RERouterDelegate>
{
    _Bool _isShowHelpBtn;
    _Bool _isAnimation;
    CDUnknownBlockType _backHandler;
    UIView *_hotContentView;
    UILabel *_hotTitleLabel;
    REUTemplateRollingView *_hotRollingView;
    UIView *_categoryContentView;
    REThemeCategoryView *_themeCategoryView;
    REThemeDataManager *_themeDataManager;
    CDUnknownBlockType _hanlder;
    giftprodGiftHbTemplateViewInfo *_curSelectedTemplateModel;
    NSString *_remark;
    NSString *_money;
    NSString *_helpUrl;
    REThemePreviewView *_previewView;
    double _preHotTop;
    NSString *_defaultTagId;
}

@property(retain, nonatomic) NSString *defaultTagId; // @synthesize defaultTagId=_defaultTagId;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) double preHotTop; // @synthesize preHotTop=_preHotTop;
@property(retain, nonatomic) REThemePreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(nonatomic) _Bool isShowHelpBtn; // @synthesize isShowHelpBtn=_isShowHelpBtn;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) giftprodGiftHbTemplateViewInfo *curSelectedTemplateModel; // @synthesize curSelectedTemplateModel=_curSelectedTemplateModel;
@property(copy, nonatomic) CDUnknownBlockType hanlder; // @synthesize hanlder=_hanlder;
@property(retain, nonatomic) REThemeDataManager *themeDataManager; // @synthesize themeDataManager=_themeDataManager;
@property(retain, nonatomic) REThemeCategoryView *themeCategoryView; // @synthesize themeCategoryView=_themeCategoryView;
@property(retain, nonatomic) UIView *categoryContentView; // @synthesize categoryContentView=_categoryContentView;
@property(retain, nonatomic) REUTemplateRollingView *hotRollingView; // @synthesize hotRollingView=_hotRollingView;
@property(retain, nonatomic) UILabel *hotTitleLabel; // @synthesize hotTitleLabel=_hotTitleLabel;
@property(retain, nonatomic) UIView *hotContentView; // @synthesize hotContentView=_hotContentView;
@property(copy, nonatomic) CDUnknownBlockType backHandler; // @synthesize backHandler=_backHandler;
- (void).cxx_destruct;
- (id)helpBarButtonItem;
- (void)showPreviewWithTemplateModel:(id)arg1;
- (void)templateRollingView:(id)arg1 didSelectedTemplate:(id)arg2;
- (void)didClickedErrorViewButton:(id)arg1;
- (void)listViewDidScrollNotification:(id)arg1;
- (void)tempalteSelectedNotification:(id)arg1;
- (void)handleSuccessResult:(id)arg1;
- (void)requestThemeMarkData;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gotoHelpPage;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)initWithHanlder:(CDUnknownBlockType)arg1 selectedTemplate:(id)arg2 remark:(id)arg3 money:(id)arg4 defaultTagId:(id)arg5;
- (id)initWithHanlder:(CDUnknownBlockType)arg1 selectedTemplate:(id)arg2 remark:(id)arg3 money:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

