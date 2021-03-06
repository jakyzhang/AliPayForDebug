//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REBaseSendController.h"

#import "PromotionCenterDelegate-Protocol.h"
#import "RERouterDelegate-Protocol.h"
#import "REScrollInputCellDelegate-Protocol.h"
#import "REUSendFooterViewDelegate-Protocol.h"
#import "REUTemplateRollingViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APContactInfo, AUBarButtonItem, CDPSpaceInfo, GIFTPRODGiftCrowdCreateResult, MPBadgeView, NSArray, NSString, RECodeSharePopViewManager, REInputCell, RERemarkCell, REScopeSelectView, REScrollInputCell, RESingleLineRemarkCell, REUSendFooterView, REUTemplateRollingView, REUniversalFormCheck, REUniversalFormModel, UIButton, UILabel, UITableView, giftprodGiftHbTemplateViewInfo;

@interface REUniversalFormController : REBaseSendController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, REScrollInputCellDelegate, REUTemplateRollingViewDelegate, REUSendFooterViewDelegate, PromotionCenterDelegate, RERouterDelegate>
{
    _Bool _enableUpdateCurTemplate;
    _Bool _lockMultipleMoneyCellScroll;
    _Bool _isMultipleMoneyRandom;
    int _crowdDuration;
    CDUnknownBlockType _startSendingCallback;
    CDUnknownBlockType _stopSendingCallback;
    unsigned long long _type;
    UITableView *_tableView;
    NSArray *_cellModels;
    REUniversalFormCheck *_formCheck;
    REUSendFooterView *_sendFooterView;
    UILabel *_footerTipLabel;
    UILabel *_passcodeTipLabel;
    AUBarButtonItem *_helpBarButtonItem;
    RERemarkCell *_remarkCell;
    REUniversalFormModel *_remarkModel;
    RESingleLineRemarkCell *_singleLineRemarkCell;
    REUniversalFormModel *_singleLineRemarkModel;
    MPBadgeView *_badgeView;
    NSString *_badgeValue;
    CDPSpaceInfo *_badgeSpaceInfo;
    giftprodGiftHbTemplateViewInfo *_curTemplate;
    REInputCell *_countCell;
    REUniversalFormModel *_countModel;
    REInputCell *_singleMoneyCell;
    REUniversalFormModel *_singleMoneyModel;
    REScrollInputCell *_multipleMoneyCell;
    REUniversalFormModel *_multipleMoneyModel;
    REScopeSelectView *_scopeSelectView;
    REUniversalFormModel *_pwdScopeModel;
    NSString *_scopeValue;
    UILabel *_modleLabel;
    UIButton *_modleChangeButton;
    UILabel *_themeContentLabel;
    REUTemplateRollingView *_templateRollingView;
    REUniversalFormModel *_templateListModel;
    NSString *_schemaTemplateID;
    NSString *_schemaTemplateName;
    NSString *_schemaAmount;
    NSString *_schemaCount;
    NSString *_schemaRemark;
    NSString *_bcShopId;
    NSString *_bcSessionId;
    NSString *_source;
    NSString *_safePayToken;
    unsigned long long _displayPattern;
    GIFTPRODGiftCrowdCreateResult *_result;
    RECodeSharePopViewManager *_popViewManager;
    APContactInfo *_receiverInfo;
    NSString *_businessExtend;
}

+ (unsigned long long)parseFormType:(id)arg1;
@property(retain, nonatomic) NSString *businessExtend; // @synthesize businessExtend=_businessExtend;
@property(retain, nonatomic) APContactInfo *receiverInfo; // @synthesize receiverInfo=_receiverInfo;
@property(retain, nonatomic) RECodeSharePopViewManager *popViewManager; // @synthesize popViewManager=_popViewManager;
@property(retain, nonatomic) GIFTPRODGiftCrowdCreateResult *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long displayPattern; // @synthesize displayPattern=_displayPattern;
@property(retain, nonatomic) NSString *safePayToken; // @synthesize safePayToken=_safePayToken;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *bcSessionId; // @synthesize bcSessionId=_bcSessionId;
@property(retain, nonatomic) NSString *bcShopId; // @synthesize bcShopId=_bcShopId;
@property(retain, nonatomic) NSString *schemaRemark; // @synthesize schemaRemark=_schemaRemark;
@property(retain, nonatomic) NSString *schemaCount; // @synthesize schemaCount=_schemaCount;
@property(retain, nonatomic) NSString *schemaAmount; // @synthesize schemaAmount=_schemaAmount;
@property(retain, nonatomic) NSString *schemaTemplateName; // @synthesize schemaTemplateName=_schemaTemplateName;
@property(retain, nonatomic) NSString *schemaTemplateID; // @synthesize schemaTemplateID=_schemaTemplateID;
@property(nonatomic) int crowdDuration; // @synthesize crowdDuration=_crowdDuration;
@property(retain, nonatomic) REUniversalFormModel *templateListModel; // @synthesize templateListModel=_templateListModel;
@property(retain, nonatomic) REUTemplateRollingView *templateRollingView; // @synthesize templateRollingView=_templateRollingView;
@property(retain, nonatomic) UILabel *themeContentLabel; // @synthesize themeContentLabel=_themeContentLabel;
@property(nonatomic) _Bool isMultipleMoneyRandom; // @synthesize isMultipleMoneyRandom=_isMultipleMoneyRandom;
@property(retain, nonatomic) UIButton *modleChangeButton; // @synthesize modleChangeButton=_modleChangeButton;
@property(retain, nonatomic) UILabel *modleLabel; // @synthesize modleLabel=_modleLabel;
@property(retain, nonatomic) NSString *scopeValue; // @synthesize scopeValue=_scopeValue;
@property(retain, nonatomic) REUniversalFormModel *pwdScopeModel; // @synthesize pwdScopeModel=_pwdScopeModel;
@property(retain, nonatomic) REScopeSelectView *scopeSelectView; // @synthesize scopeSelectView=_scopeSelectView;
@property(nonatomic) _Bool lockMultipleMoneyCellScroll; // @synthesize lockMultipleMoneyCellScroll=_lockMultipleMoneyCellScroll;
@property(retain, nonatomic) REUniversalFormModel *multipleMoneyModel; // @synthesize multipleMoneyModel=_multipleMoneyModel;
@property(retain, nonatomic) REScrollInputCell *multipleMoneyCell; // @synthesize multipleMoneyCell=_multipleMoneyCell;
@property(retain, nonatomic) REUniversalFormModel *singleMoneyModel; // @synthesize singleMoneyModel=_singleMoneyModel;
@property(retain, nonatomic) REInputCell *singleMoneyCell; // @synthesize singleMoneyCell=_singleMoneyCell;
@property(retain, nonatomic) REUniversalFormModel *countModel; // @synthesize countModel=_countModel;
@property(retain, nonatomic) REInputCell *countCell; // @synthesize countCell=_countCell;
@property(nonatomic) _Bool enableUpdateCurTemplate; // @synthesize enableUpdateCurTemplate=_enableUpdateCurTemplate;
@property(retain, nonatomic) giftprodGiftHbTemplateViewInfo *curTemplate; // @synthesize curTemplate=_curTemplate;
@property(retain, nonatomic) CDPSpaceInfo *badgeSpaceInfo; // @synthesize badgeSpaceInfo=_badgeSpaceInfo;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) MPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) REUniversalFormModel *singleLineRemarkModel; // @synthesize singleLineRemarkModel=_singleLineRemarkModel;
@property(retain, nonatomic) RESingleLineRemarkCell *singleLineRemarkCell; // @synthesize singleLineRemarkCell=_singleLineRemarkCell;
@property(retain, nonatomic) REUniversalFormModel *remarkModel; // @synthesize remarkModel=_remarkModel;
@property(retain, nonatomic) RERemarkCell *remarkCell; // @synthesize remarkCell=_remarkCell;
@property(retain, nonatomic) AUBarButtonItem *helpBarButtonItem; // @synthesize helpBarButtonItem=_helpBarButtonItem;
@property(retain, nonatomic) UILabel *passcodeTipLabel; // @synthesize passcodeTipLabel=_passcodeTipLabel;
@property(retain, nonatomic) UILabel *footerTipLabel; // @synthesize footerTipLabel=_footerTipLabel;
@property(retain, nonatomic) REUSendFooterView *sendFooterView; // @synthesize sendFooterView=_sendFooterView;
@property(retain, nonatomic) REUniversalFormCheck *formCheck; // @synthesize formCheck=_formCheck;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType stopSendingCallback; // @synthesize stopSendingCallback=_stopSendingCallback;
@property(copy, nonatomic) CDUnknownBlockType startSendingCallback; // @synthesize startSendingCallback=_startSendingCallback;
- (void).cxx_destruct;
- (id)spmParams;
- (void)textFieldChangeValidation:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)scrollInputCellDidScrolled:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)templateRollingView:(id)arg1 didSelectedTemplate:(id)arg2;
- (void)naviWithPasscodeVC:(id)arg1 withCrowNo:(id)arg2;
- (void)handleRPCFailCallBackWithResult:(id)arg1;
- (void)handleAfterPaySuccess:(id)arg1;
- (_Bool)handleFollowAction:(id)arg1;
- (void)safepayDidFinishWithResult:(id)arg1;
- (void)sendRedEnvelope;
- (void)handleSelectedTemplate:(id)arg1;
- (void)gotoThemeMarket;
- (void)didTappedTemplateButton;
- (void)helpButtonPressed;
- (void)didTappedCloseButton;
- (void)didTappedModelChangeButton:(id)arg1;
- (void)paymentButtonPressed:(id)arg1;
- (void)paymentButtonPressed;
- (void)setRemarkPlaceHolder:(id)arg1;
- (id)remarkPlaceHolder;
- (id)remarkText;
- (id)curTemplateMemo;
- (void)displayDecimalMoney:(id)arg1;
- (_Bool)enablePayButton;
- (id)stringFormatTotalMoney:(id)arg1;
- (id)decimalTotalAmount;
- (void)refreshCashier;
- (_Bool)prepareCheckMaxCount;
- (_Bool)prepareCheckMinCount;
- (_Bool)prepareCheckCount;
- (_Bool)prepareCheckPerAmount;
- (_Bool)prepareCheckMaxAmount;
- (_Bool)prepareCheckMinAmount;
- (_Bool)prepareCheckAmount;
- (void)resignResponder;
- (void)refreshTemplate;
- (id)createSchemeTemplate:(id)arg1 templateName:(id)arg2 templateRemark:(id)arg3;
- (void)switchMultipleMoneyModel:(_Bool)arg1;
- (id)chatUserId;
- (void)payPanelDismiss;
- (void)textFieldChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotifications;
- (void)setupShareTip;
- (void)setupViews;
- (void)commonUI;
- (void)prepareData;
- (void)handleOptions:(id)arg1;
- (void)viewWillDestroy;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 withTheme:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 displayPattern:(unsigned long long)arg2;
- (id)initWithOptions:(id)arg1 formType:(unsigned long long)arg2 displayPattern:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

