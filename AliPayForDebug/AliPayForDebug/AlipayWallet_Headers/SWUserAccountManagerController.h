//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AUAssitLableView, BEEScalableTableView, DTRpcAsyncCaller, NSIndexPath, NSString, UIImageView;
@protocol SAAccountService;

@interface SWUserAccountManagerController : DTViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    _Bool _isSwitchingUser;
    _Bool _accountListSynced;
    _Bool _state;
    _Bool _isFirstTimeViewDidAppear;
    id <SAAccountService> _accountService;
    BEEScalableTableView *_tableView;
    DTRpcAsyncCaller *_syncAccountListCaller;
    NSIndexPath *_removeIndex;
    CDUnknownBlockType _didLaunchedCallback;
    CDUnknownBlockType _didFinshedCallback;
    UIImageView *_headImage;
    AUAssitLableView *_headerView;
}

@property(retain, nonatomic) AUAssitLableView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) _Bool isFirstTimeViewDidAppear; // @synthesize isFirstTimeViewDidAppear=_isFirstTimeViewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType didFinshedCallback; // @synthesize didFinshedCallback=_didFinshedCallback;
@property(copy, nonatomic) CDUnknownBlockType didLaunchedCallback; // @synthesize didLaunchedCallback=_didLaunchedCallback;
@property(retain, nonatomic) NSIndexPath *removeIndex; // @synthesize removeIndex=_removeIndex;
@property(nonatomic) _Bool state; // @synthesize state=_state;
@property(retain, nonatomic) DTRpcAsyncCaller *syncAccountListCaller; // @synthesize syncAccountListCaller=_syncAccountListCaller;
@property(nonatomic) _Bool accountListSynced; // @synthesize accountListSynced=_accountListSynced;
@property(retain, nonatomic) BEEScalableTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SAAccountService> accountService; // @synthesize accountService=_accountService;
- (void).cxx_destruct;
- (void)monitorBack;
- (void)monitorAdd;
- (void)monitorUse;
- (void)monitorDelete;
- (void)monitorEditDone;
- (void)monitorEditing;
- (void)loginDidFinished:(id)arg1;
- (void)loginPureForegroundAsyncWithUser:(id)arg1;
- (void)loginBackgroundAsyncWithUser:(id)arg1;
- (void)switchToUser:(id)arg1;
- (void)gotoLogin:(_Bool)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getUserInfoByRow:(long long)arg1;
- (void)resetRightButton;
- (void)doStateChange;
- (void)setTableViewEditing;
- (void)handleSucc;
- (id)firstInterfaceWith:(id)arg1 account:(id)arg2;
- (void)clearAccount:(id)arg1;
- (void)viewWillDestroy;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)back_common;
- (void)back;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

