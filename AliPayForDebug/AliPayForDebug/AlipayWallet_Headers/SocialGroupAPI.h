//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SocialGroupAPI : NSObject
{
}

+ (_Bool)markGroupNoticeDisplayed:(id)arg1;
+ (id)tryToGetGroupNotice:(id)arg1;
+ (void)queryChatRoomInfoFromDB:(id)arg1 sessionType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)queryChatRoomInfo:(id)arg1 sessionType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (_Bool)markGroupNoticeRead:(id)arg1;
+ (void)queryGroupInfos:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)requestGroupInfo:(id)arg1 version:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)refrshGroupInfoIfneed:(id)arg1;
+ (void)deleteGroupInfo:(id)arg1;
+ (id)selectAPGroupInfo:(id)arg1;
+ (void)queryGroupInfoAndMemberContacts:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)queryGroupInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
