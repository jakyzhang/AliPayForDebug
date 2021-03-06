//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSNumber, NSString, SPProfileInfo;

@protocol SPProfileInfoDAOProxy <APDAOProtocol>
- (APDAOResult *)deleteProfilesWithUserIdArr:(NSArray *)arg1;
- (APDAOResult *)deleteProfileWithUserId:(NSString *)arg1;
- (NSNumber *)getTotalRecordsCount;
- (NSArray *)selectProfileInfoWithUserIdArr:(NSArray *)arg1;
- (SPProfileInfo *)selectProfileInfoWithUserId:(NSString *)arg1;
- (APDAOResult *)insertProfileInfoList:(NSArray *)arg1;
- (APDAOResult *)insertProfileInfo:(SPProfileInfo *)arg1;
@end

