//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class ALPPassTabItemView, NSArray, NSMutableArray, NSString, UIColor, UIFont, UIScrollView, UIViewController;
@protocol ALPPassTabViewDelegate;

@interface ALPPassTabView : UIView <UIScrollViewDelegate>
{
    id <ALPPassTabViewDelegate> _delegate;
    UIColor *_lineColor;
    NSArray *_titleArr;
    UIViewController *_parentVC;
    UIView *_noticeView;
    UIScrollView *_lineScrollView;
    UIScrollView *_scrollView;
    ALPPassTabItemView *_lastTabItem;
    NSMutableArray *_topBtnArr;
    UIFont *_selectFont;
    UIFont *_unSelectFont;
    UIColor *_selectColor;
    UIColor *_unSelectColor;
    double _lineHeight;
    long long _curIndex;
    double _tabItemWidth;
    double _naviHeight;
    struct CGRect _selfFrame;
}

+ (id)instanceViewWithFrame:(struct CGRect)arg1 tabItems:(id)arg2 vc:(id)arg3;
@property(nonatomic) double naviHeight; // @synthesize naviHeight=_naviHeight;
@property(nonatomic) double tabItemWidth; // @synthesize tabItemWidth=_tabItemWidth;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) struct CGRect selfFrame; // @synthesize selfFrame=_selfFrame;
@property(retain, nonatomic) UIColor *unSelectColor; // @synthesize unSelectColor=_unSelectColor;
@property(retain, nonatomic) UIColor *selectColor; // @synthesize selectColor=_selectColor;
@property(retain, nonatomic) UIFont *unSelectFont; // @synthesize unSelectFont=_unSelectFont;
@property(retain, nonatomic) UIFont *selectFont; // @synthesize selectFont=_selectFont;
@property(retain, nonatomic) NSMutableArray *topBtnArr; // @synthesize topBtnArr=_topBtnArr;
@property(retain, nonatomic) ALPPassTabItemView *lastTabItem; // @synthesize lastTabItem=_lastTabItem;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIScrollView *lineScrollView; // @synthesize lineScrollView=_lineScrollView;
@property(retain, nonatomic) UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSArray *titleArr; // @synthesize titleArr=_titleArr;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) __weak id <ALPPassTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNoticeSpaceView:(id)arg1;
- (id)tabItemWithIndex:(long long)arg1;
- (void)handleNoticeItemChanged;
- (void)addSubViewToScrollViewWithSubArr:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBtnState:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTabRedDot:(long long)arg1;
- (void)updateTabItemInfo:(id)arg1 index:(long long)arg2;
- (double)getClientScrollTopY;
- (void)creatScrollView;
- (void)setLineFrame;
- (void)creatLineScrollView;
- (void)clickTopBtn:(id)arg1;
- (void)switchTab:(long long)arg1 animated:(_Bool)arg2;
- (void)creatTopBtn;
- (void)writeExcLog:(struct CGRect)arg1 statusRect:(struct CGRect)arg2;
- (double)getNaviHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

