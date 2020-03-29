//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GO2OCommonTabbarItemDelegate-Protocol.h"

@class GO2OCommonTabbarConfig, NSArray, NSMutableArray, NSString, UIScrollView;
@protocol GO2OCommonTabbarProtocol;

@interface GO2OCommonTabbar : UIView <GO2OCommonTabbarItemDelegate>
{
    _Bool _paging;
    _Bool _hasExposured;
    NSString *_tabBizType;
    NSString *_itemTemplateId;
    NSString *_spmTag;
    NSArray *_items;
    NSMutableArray *_data;
    NSMutableArray *_offsets;
    NSMutableArray *_pages;
    long long _selectedIndex;
    GO2OCommonTabbarConfig *_config;
    id <GO2OCommonTabbarProtocol> _delegate;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIView *_menuBarLine;
    UIView *_expandIndicatorView;
    NSMutableArray *_allTabViews;
}

@property(retain, nonatomic) NSMutableArray *allTabViews; // @synthesize allTabViews=_allTabViews;
@property(nonatomic) _Bool hasExposured; // @synthesize hasExposured=_hasExposured;
@property(retain, nonatomic) UIView *expandIndicatorView; // @synthesize expandIndicatorView=_expandIndicatorView;
@property(retain, nonatomic) UIView *menuBarLine; // @synthesize menuBarLine=_menuBarLine;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <GO2OCommonTabbarProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GO2OCommonTabbarConfig *config; // @synthesize config=_config;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) NSMutableArray *offsets; // @synthesize offsets=_offsets;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *spmTag; // @synthesize spmTag=_spmTag;
@property(retain, nonatomic) NSString *itemTemplateId; // @synthesize itemTemplateId=_itemTemplateId;
@property(nonatomic) _Bool paging; // @synthesize paging=_paging;
@property(copy, nonatomic) NSString *tabBizType; // @synthesize tabBizType=_tabBizType;
- (void).cxx_destruct;
- (void)handleItemTap:(id)arg1;
- (void)exposure;
- (void)setupExpandView;
- (void)setupMenuBarBottomLine;
- (void)setupScrollView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 styleConfig:(id)arg2 items:(id)arg3 spmTag:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
