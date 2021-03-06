//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALTCard;

@interface FHWorkbenchExposeHelper : NSObject
{
    _Bool _isWorkbenchLaunched;
    _Bool _isWorkbenchExposed;
    _Bool _allTempalteHasCache;
    _Bool _isRootVCVisiable;
    double _exposeBeginStartTime;
    double _firstSelectCardExposeTime;
    ALTCard *_cardDataFirst;
}

+ (_Bool)degradeExposeStatistics;
+ (id)sharedInstance;
@property(nonatomic) _Bool isRootVCVisiable; // @synthesize isRootVCVisiable=_isRootVCVisiable;
@property(nonatomic) _Bool allTempalteHasCache; // @synthesize allTempalteHasCache=_allTempalteHasCache;
@property(retain, nonatomic) ALTCard *cardDataFirst; // @synthesize cardDataFirst=_cardDataFirst;
@property(nonatomic) _Bool isWorkbenchExposed; // @synthesize isWorkbenchExposed=_isWorkbenchExposed;
@property(nonatomic) _Bool isWorkbenchLaunched; // @synthesize isWorkbenchLaunched=_isWorkbenchLaunched;
@property(nonatomic) double firstSelectCardExposeTime; // @synthesize firstSelectCardExposeTime=_firstSelectCardExposeTime;
@property(nonatomic) double exposeBeginStartTime; // @synthesize exposeBeginStartTime=_exposeBeginStartTime;
- (void).cxx_destruct;
- (id)getTplCache;
- (void)setTagForSomeTemplateNotCache;
- (void)setTagForWorkbenchLoadedWithCardData:(id)arg1;
- (id)currentItemIndexPatchForCollectionView:(id)arg1;
- (_Bool)isNativeCardWithContainer:(id)arg1;
- (id)changeContainer:(id)arg1 collectionView:(id)arg2 containerList:(id)arg3;
- (void)endExposeCellContainer:(id)arg1 leavePlan:(id)arg2;
- (void)startExposeCellContainer:(id)arg1 indexPath:(id)arg2;
- (void)writeExposeLogWithSeedId:(id)arg1 event:(id)arg2 costTime:(double)arg3 exceptionInfo:(id)arg4;
- (void)writeWorkbenchExposeWithCardContainer:(id)arg1;
- (void)startWealthTABExpose;
- (void)endWealthTABExposeWithCardContainer:(id)arg1;
- (void)cardExposedWithCardContainer:(id)arg1 indexPath:(id)arg2;
- (void)viewDidDisappear;
- (void)dealloc;
- (id)init;

@end

