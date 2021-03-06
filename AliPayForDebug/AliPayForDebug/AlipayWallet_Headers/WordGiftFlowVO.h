//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WordDetailVO;

@interface WordGiftFlowVO : NSObject
{
    NSString *_flowNo;
    NSString *_creatorId;
    NSString *_receiverId;
    NSString *_loginId;
    NSDate *_gmtCreate;
    NSDate *_gmtModified;
    NSString *_status;
    NSDate *_gmtReceive;
    NSString *_crowdNo;
    NSString *_userPortraitUrl;
    NSString *_nickName;
    WordDetailVO *_wordDetail;
}

@property(retain, nonatomic) WordDetailVO *wordDetail; // @synthesize wordDetail=_wordDetail;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userPortraitUrl; // @synthesize userPortraitUrl=_userPortraitUrl;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(retain, nonatomic) NSDate *gmtReceive; // @synthesize gmtReceive=_gmtReceive;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *gmtModified; // @synthesize gmtModified=_gmtModified;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *receiverId; // @synthesize receiverId=_receiverId;
@property(retain, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *flowNo; // @synthesize flowNo=_flowNo;
- (void).cxx_destruct;

@end

