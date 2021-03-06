//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HAppCellViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol HBaseGridViewDelegate;

@interface HBaseGridView : UIView <HAppCellViewDelegate>
{
    NSMutableArray *_itemViews;
    Class _registedClass;
    _Bool _quickShowIcon;
    _Bool _supportReuse;
    long long _columnNum;
    id <HBaseGridViewDelegate> _delegate;
}

+ (double)defaultGridWidth;
@property(nonatomic) __weak id <HBaseGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportReuse; // @synthesize supportReuse=_supportReuse;
@property(nonatomic) long long columnNum; // @synthesize columnNum=_columnNum;
@property(nonatomic) _Bool quickShowIcon; // @synthesize quickShowIcon=_quickShowIcon;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)appCellHeight;
- (double)appCellWidth;
- (long long)caculateRowCount:(long long)arg1;
- (id)findViewFromAppId:(id)arg1;
- (id)findView:(struct CGPoint)arg1 exludeView:(id)arg2;
- (id)findView:(struct CGPoint)arg1;
- (void)cellDidClicked:(id)arg1;
- (id)bizMarkForCellView:(id)arg1;
- (void)refreshIcons;
- (void)refreshBizMarks;
- (id)currentModels;
- (id)cellViews;
- (void)setDataItems:(id)arg1 andLayout:(_Bool)arg2;
- (void)setDataItems:(id)arg1;
- (id)createCellView;
- (void)registCellClass:(Class)arg1;
- (void)layoutElements;
- (id)initWithWidth:(double)arg1 columnNum:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

