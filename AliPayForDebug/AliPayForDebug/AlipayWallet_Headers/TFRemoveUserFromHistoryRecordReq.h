//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFBaseReqVO.h"

@class NSString;

@interface TFRemoveUserFromHistoryRecordReq : TFBaseReqVO
{
    NSString *_blackUserId;
    NSString *_blackCardNo;
    NSString *_type;
    NSString *_uniqueKey;
}

@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *blackCardNo; // @synthesize blackCardNo=_blackCardNo;
@property(retain, nonatomic) NSString *blackUserId; // @synthesize blackUserId=_blackUserId;
- (void).cxx_destruct;

@end

