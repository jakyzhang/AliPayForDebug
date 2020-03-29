//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "APGSegmentItemsContentViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class APGSearchResultContentViewController, APGSegmentItemsContentView, NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIScrollView;

@interface APGSearchResultViewController : UIViewController <APGSegmentItemsContentViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSArray *_tabItems;
    NSString *_targetId;
    APGSegmentItemsContentView *_segmentItemContentView;
    UIScrollView *_contentScrollView;
    UICollectionView *_contentCollectionView;
    UICollectionViewFlowLayout *_contentCollectionViewLayout;
    NSString *_currentSearchText;
    NSMutableArray *_contentViewControllers;
    APGSearchResultContentViewController *_hotContentViewController;
}

@property(retain, nonatomic) APGSearchResultContentViewController *hotContentViewController; // @synthesize hotContentViewController=_hotContentViewController;
@property(retain, nonatomic) NSMutableArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(retain) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) UICollectionViewFlowLayout *contentCollectionViewLayout; // @synthesize contentCollectionViewLayout=_contentCollectionViewLayout;
@property(retain, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) APGSegmentItemsContentView *segmentItemContentView; // @synthesize segmentItemContentView=_segmentItemContentView;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
- (void).cxx_destruct;
- (id)setupSegmentItemContentView;
- (id)segmentItemTitles;
- (_Bool)readTabItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didSelectedButtonAtIndex:(long long)arg1;
- (void)segmentItemIsChanged:(int)arg1;
- (long long)shouldChangeToPageIndex:(id)arg1;
- (void)changeToPage:(long long)arg1;
- (void)clearDataInPage:(long long)arg1;
- (void)removeDataModel;
- (void)clearData;
- (void)searchText:(id)arg1 withLogParams:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
