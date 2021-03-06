//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBSwipeTableCell.h"

@class MessageBoxCellModel, MessageBoxHomeConfig, NSString, UITableViewRowAction;
@protocol MessageBoxCellProtocol;

@interface MessageBoxBaseCell : MBSwipeTableCell
{
    MessageBoxCellModel *_cellModel;
    id <MessageBoxCellProtocol> _delegate;
    UITableViewRowAction *_delAction;
    UITableViewRowAction *_notReceiveAction;
    UITableViewRowAction *_moreAction;
    NSString *_sourceId;
    unsigned long long _appType;
    MessageBoxHomeConfig *_homeConfig;
}

+ (id)simulationCellMsgId:(id)arg1;
+ (double)cellHeightWithData:(id)arg1 withDelegate:(id)arg2 homeConfig:(id)arg3;
@property(retain, nonatomic) MessageBoxHomeConfig *homeConfig; // @synthesize homeConfig=_homeConfig;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) UITableViewRowAction *moreAction; // @synthesize moreAction=_moreAction;
@property(retain, nonatomic) UITableViewRowAction *notReceiveAction; // @synthesize notReceiveAction=_notReceiveAction;
@property(retain, nonatomic) UITableViewRowAction *delAction; // @synthesize delAction=_delAction;
@property(nonatomic) __weak id <MessageBoxCellProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MessageBoxCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (long long)getEditTypeFromIndex:(long long)arg1;
- (id)cellSwipeRowActions;
- (id)cellRowActions;
- (void)updateCellWithData:(id)arg1 withDelegate:(id)arg2 homeConfig:(id)arg3 cellIndex:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)moreItemClicked:(id)arg1 model:(id)arg2 btnIndex:(long long)arg3 indexPath:(id)arg4;
- (void)rowActionMore:(id)arg1;
- (void)rowActionNotReceive:(id)arg1;
- (void)rowActionDelete:(id)arg1;
- (void)cellRowActionHandler:(id)arg1 editType:(long long)arg2;

@end

