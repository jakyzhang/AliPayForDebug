//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUtils : NSObject
{
}

+ (_Bool)lifeSingleIsNewStyle:(id)arg1;
+ (id)separatorOfUrlStr:(id)arg1;
+ (id)trimmingLRWhiteSpaceWithString:(id)arg1;
+ (_Bool)isLogin;
+ (void)startRealName:(id)arg1;
+ (_Bool)checkRealNameCertified;
+ (struct CGSize)videoFrameSizeWithImgWidth:(double)arg1 imgHeight:(double)arg2 maxWidth:(double)arg3 maxHeight:(double)arg4 minWidth:(double)arg5 minHeight:(double)arg6;
+ (_Bool)getCardRewardOpenStatus;
+ (id)securityPublishActionSheet;
+ (_Bool)canForbidPublishVideo;
+ (_Bool)canCertifyRealNameInMoment;
+ (double)getPickedVideoMaxLength;
+ (_Bool)enablePickVideoInAlbum;
+ (_Bool)enablePickAssetInCloud;
+ (long long)getCardSendMaxCount;
+ (struct CGRect)rectWithIndex:(long long)arg1 withWidth:(long long)arg2 withHeight:(long long)arg3;
+ (id)transformButtonDic:(id)arg1;
+ (id)dataMapDic:(id)arg1;
+ (id)convertCollectWidgetTitle:(id)arg1;
+ (id)calCountValue:(id)arg1 dividendValue:(long long)arg2 companyStr:(id)arg3;
+ (id)convertToButtonTitle:(id)arg1;
+ (id)convertNumberToK:(long long)arg1;
+ (id)mapDefaultStr:(id)arg1;
+ (_Bool)handleButtonStatus:(id)arg1;
+ (id)keySelectStrFromSrcData:(id)arg1;
+ (id)keyTypeStrFromSrcData:(id)arg1;
+ (id)loginUserContactInfo;
+ (void)openH5ContainerWithParam:(id)arg1 andH5BaseURL:(id)arg2;
+ (void)openReportIllegalH5InSence:(id)arg1 WithUserId:(id)arg2 andOppositeUserId:(id)arg3 andComplainContentIds:(id)arg4 WihtExtParam:(id)arg5;
+ (void)openReportIllegalH5WithUserId:(id)arg1 andCCard:(id)arg2;
+ (void)openReportIllegalH5WithUserId:(id)arg1 andOppositeUserId:(id)arg2 andComplainContentIds:(id)arg3;
+ (void)openReportIllegalH5InSence:(id)arg1 WithUserId:(id)arg2 andOppositeUserId:(id)arg3 andComplainContentIds:(id)arg4;
+ (void)configEditViewTopicAttributedText:(id)arg1 range:(struct _NSRange)arg2;
+ (void)configEditViewNorlmalAttributedText:(id)arg1 range:(struct _NSRange)arg2;
+ (id)convertTopic:(id)arg1;
+ (void)dealBackAttributedString:(id)arg1 range:(struct _NSRange)arg2 compelete:(CDUnknownBlockType)arg3;
+ (void)dealBackString:(id)arg1 range:(struct _NSRange)arg2 compelete:(CDUnknownBlockType)arg3;
+ (void)backspaceTapped:(id)arg1;
+ (void)digitTapped:(id)arg1 textView:(id)arg2;
+ (id)generateClientID;

@end

