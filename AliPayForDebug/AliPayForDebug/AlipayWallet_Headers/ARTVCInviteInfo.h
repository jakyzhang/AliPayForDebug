//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARTVCInviteInfo : NSObject
{
    NSString *_roomId;
    NSString *_rtoken;
    NSString *_peerUid;
    NSString *_extra;
    long long _defaultFunction;
}

@property(nonatomic) long long defaultFunction; // @synthesize defaultFunction=_defaultFunction;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *peerUid; // @synthesize peerUid=_peerUid;
@property(copy, nonatomic) NSString *rtoken; // @synthesize rtoken=_rtoken;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

