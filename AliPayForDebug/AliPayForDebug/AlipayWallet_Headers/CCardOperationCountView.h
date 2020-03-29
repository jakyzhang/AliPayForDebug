//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CCardOperationCountViewCellDelegate-Protocol.h"
#import "MFWidgetPluginProtocol-Protocol.h"

@class CCard, NSMutableArray, NSString;
@protocol CCardOperationCountViewDelegate;

@interface CCardOperationCountView : UIView <CCardOperationCountViewCellDelegate, MFWidgetPluginProtocol>
{
    id <CCardOperationCountViewDelegate> _delegate;
    NSMutableArray *_cells;
    UIView *_lineView;
    CCard *_card;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(retain, nonatomic) CCard *card; // @synthesize card=_card;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak id <CCardOperationCountViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setMFDelegate:(id)arg1;
- (void)onClickCardOperationCountViewCell:(id)arg1 type:(id)arg2;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
