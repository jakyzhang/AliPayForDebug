//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OTemplateController.h"

@class NSArray, NSMutableDictionary, VZFPagingView;

@interface GO2OHotSightTemplateController : GO2OTemplateController
{
    long long _selectedIndex;
    NSMutableDictionary *_cardsForPage;
    NSArray *_tabList;
    VZFPagingView *_pagingView;
}

@property(nonatomic) __weak VZFPagingView *pagingView; // @synthesize pagingView=_pagingView;
@property(retain, nonatomic) NSArray *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) NSMutableDictionary *cardsForPage; // @synthesize cardsForPage=_cardsForPage;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)randomInfoCardViews:(id)arg1;
- (void)randomDisplayCardWithCardObjects:(id)arg1;
- (void)randomDisplayCard:(id)arg1;
- (void)scrollToPage:(id)arg1;
- (void)didScroll:(id)arg1 pagingView:(id)arg2;
- (void)displayShowTileWithpagingview:(id)arg1 animation:(_Bool)arg2;
- (void)display:(id)arg1 pagingview:(id)arg2;
- (id)initialState;

@end
