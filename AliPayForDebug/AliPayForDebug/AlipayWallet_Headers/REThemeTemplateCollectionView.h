//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol REThemeTemplateCollectionViewDelegate;

@interface REThemeTemplateCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <REThemeTemplateCollectionViewDelegate> _weakDelegate;
    NSArray *_templateList;
    NSString *_reuseIdentifier;
}

@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSArray *templateList; // @synthesize templateList=_templateList;
@property(nonatomic) __weak id <REThemeTemplateCollectionViewDelegate> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadWithTemplates:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 registerClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
