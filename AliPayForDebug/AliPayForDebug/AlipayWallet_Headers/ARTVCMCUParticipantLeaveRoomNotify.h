//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicNotify.h"

@class NSString;

@interface ARTVCMCUParticipantLeaveRoomNotify : ARTVCMCUBasicNotify
{
    int _userType;
    int _exitType;
    NSString *_participant;
}

@property(nonatomic) int exitType; // @synthesize exitType=_exitType;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end

