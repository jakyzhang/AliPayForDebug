//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString, paygrowthEquityItemPB;

@interface paygrowthRecommendChannelItemPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *channelCode; // @dynamic channelCode;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) paygrowthEquityItemPB *equityItem; // @dynamic equityItem;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *extraContent; // @dynamic extraContent;
@property(readonly) _Bool hasChannelCode; // @dynamic hasChannelCode;
@property(readonly) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(readonly) _Bool hasEquityItem; // @dynamic hasEquityItem;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasExtraContent; // @dynamic hasExtraContent;
@property(readonly) _Bool hasImgUrl; // @dynamic hasImgUrl;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;

@end

