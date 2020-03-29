//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APShareServiceCardControl;

@interface SPUtils : NSObject
{
    APShareServiceCardControl *_shareCtrl;
}

+ (void)sendRemindMessageToFriendWithUserId:(id)arg1 loginId:(id)arg2 hasHeadAvatar:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)fullfilUserAvatarRemindFlag:(id)arg1;
+ (id)buildProfileShareServiceCard:(id)arg1;
+ (_Bool)checkUserAvatarRemindFlag:(id)arg1;
+ (id)userAvatarKey:(id)arg1;
+ (id)dictionaryFromString:(id)arg1;
+ (void)openURL:(id)arg1;
+ (double)iOSVersion;
+ (void)doLoadSuitableSizeImageForImageView:(id)arg1 placeHolderImg:(id)arg2 imgUrl:(id)arg3 extraParams:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)autoLoadSuitableSizeImageForImageView:(id)arg1 placeHolderImg:(id)arg2 imgUrl:(id)arg3 extraParams:(id)arg4 backgroundMode:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)getMonitorUsertypeFor:(id)arg1;
+ (id)makeCCardFromSOUserCard:(id)arg1;
+ (_Bool)isContactInAddedArray:(id)arg1;
+ (_Bool)isSelfRealNamed;
+ (_Bool)isRealNamed:(id)arg1;
+ (id)make1PixelHeigtLineWith:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) APShareServiceCardControl *shareCtrl; // @synthesize shareCtrl=_shareCtrl;
- (void).cxx_destruct;

@end
