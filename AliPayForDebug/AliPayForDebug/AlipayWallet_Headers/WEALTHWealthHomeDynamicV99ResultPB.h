//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, PBMapStringString, WEALTHMapStringWealthHomeMarkInfoPB, WEALTHMyHomeEditionPB, WEALTHPasswordTokenCreatorPB;

@interface WEALTHWealthHomeDynamicV99ResultPB : APDPBGeneratedMessage <NSCoding, NSCopying>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long dataLoadType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) WEALTHMyHomeEditionPB *edition; // @dynamic edition;
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(retain, nonatomic) NSString *formToken; // @dynamic formToken;
@property(retain, nonatomic) NSString *gmtModified; // @dynamic gmtModified;
@property(readonly) _Bool hasEdition; // @dynamic hasEdition;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasFormToken; // @dynamic hasFormToken;
@property(readonly) _Bool hasGmtModified; // @dynamic hasGmtModified;
@property(readonly) _Bool hasMarkInfos; // @dynamic hasMarkInfos;
@property(readonly) _Bool hasNowMd5; // @dynamic hasNowMd5;
@property(readonly) _Bool hasPasswordTokenCreator; // @dynamic hasPasswordTokenCreator;
@property(readonly) _Bool hasRedDotUseCache; // @dynamic hasRedDotUseCache;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasSecurityVerifyId; // @dynamic hasSecurityVerifyId;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) WEALTHMapStringWealthHomeMarkInfoPB *markInfos; // @dynamic markInfos;
@property(retain, nonatomic) NSArray *moduleInfos; // @dynamic moduleInfos;
@property(retain, nonatomic) NSString *nowMd5; // @dynamic nowMd5;
@property(retain, nonatomic) WEALTHPasswordTokenCreatorPB *passwordTokenCreator; // @dynamic passwordTokenCreator;
@property(nonatomic) _Bool redDotUseCache; // @dynamic redDotUseCache;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(retain, nonatomic) NSString *securityVerifyId; // @dynamic securityVerifyId;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSArray *weavingList; // @dynamic weavingList;

@end

