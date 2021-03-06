//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APVAUtils : NSObject
{
}

+ (id)sessionId;
+ (id)launchOptions_welcome;
+ (id)launchOptions_bizSrc;
+ (id)launchOptions_entrance;
+ (id)launchOptions;
+ (_Bool)isTransferBiz;
+ (id)welcomeSwitchValue;
+ (_Bool)isOpenWelcomSwitch;
+ (id)wkSectionsRewrited:(id)arg1;
+ (long long)getNowLocalTime;
+ (void)preloadWktemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)refreshwkCellsWithEventInfo:(id)arg1 tableModel:(id)arg2;
+ (id)refreshResultsWithWKEvent:(id)arg1 tableModel:(id)arg2;
+ (void)suggestWkModelWithGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)wkHCellModelsFromCellList:(id)arg1;
+ (id)wkCellModelsFromGroupRecord:(id)arg1;
+ (id)wkCellModelsFromGroupRecord:(id)arg1 vc:(id)arg2;
+ (_Bool)isWkRespCell:(id)arg1;
+ (id)respWKmodel:(id)arg1;
+ (id)templateInfoFromExt:(id)arg1;
+ (id)wkLoadingModel;
+ (id)rewriteRulesData:(id)arg1;
+ (id)wkModelConvert:(id)arg1;
+ (id)renewVoiceSearchId;
+ (id)renewVoiceSessionId;
+ (void)addRoundedMaskWithFrame:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 toView:(id)arg3 fillColor:(id)arg4 strokeColor:(id)arg5 cornerRadii:(struct CGSize)arg6;
+ (void)addRoundedBackWithFrame:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 toView:(id)arg3 cornerRadii:(struct CGSize)arg4 separatorStyle:(unsigned long long)arg5 separatorMargin:(double)arg6;
+ (id)cellDataWithHits:(id)arg1;
+ (id)cellDataWithGroupRecord:(id)arg1;
+ (id)getGifImageWithImageName:(id)arg1;
+ (_Bool)isAuthorizedForAddressBook;
+ (id)randomAnswerText;
+ (id)stringValueFromConfig:(id)arg1 withDefault:(id)arg2;

@end

