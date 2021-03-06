//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MBListBaseCellDelegate-Protocol.h"
#import "MBSwipeTableCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBListCellManager, MBListController, NSLock, NSMutableArray, NSString, UITableView;
@protocol MBListViewDelegate;

@interface MBListView : UIView <UITableViewDelegate, UITableViewDataSource, MBListBaseCellDelegate, MBSwipeTableCellDelegate>
{
    MBListController *_controller;
    MBListCellManager *_cellManager;
    NSMutableArray *_messageListArray;
    _Bool _hasMore;
    NSLock *_loadingPageLock;
    id <MBListViewDelegate> _delegate;
    UITableView *_tableView;
    UIView *_emptyView;
    NSString *_pagingFlag;
}

@property(retain, nonatomic) NSString *pagingFlag; // @synthesize pagingFlag=_pagingFlag;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *messageListArray; // @synthesize messageListArray=_messageListArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MBListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkEmpty;
- (void)updateTableView;
- (void)setupUI;
- (void)refreshUI;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)setViewChangeHeight:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 cellManager:(id)arg3;
- (_Bool)checkLoadMorePage;
- (_Bool)refreshPage:(id)arg1;
- (_Bool)reloadPage;
- (_Bool)mbListCell:(id)arg1 indexPath:(id)arg2 eventAction:(id)arg3;
- (_Bool)swipeTableCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (id)swipeTableCell:(id)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(id)arg3 expansionSettings:(id)arg4;
- (id)monitorViewId;
- (id)getWKBuilder:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

