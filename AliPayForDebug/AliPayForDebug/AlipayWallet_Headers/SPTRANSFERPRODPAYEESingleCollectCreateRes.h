//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTRANSFERPRODPAYEERPCResponse.h"

@class NSString;

@interface SPTRANSFERPRODPAYEESingleCollectCreateRes : SPTRANSFERPRODPAYEERPCResponse
{
    NSString *_transferNo;
    NSString *_redirectUrl;
    NSString *_redirectText;
    NSString *_followAction;
}

@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *redirectText; // @synthesize redirectText=_redirectText;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *transferNo; // @synthesize transferNo=_transferNo;
- (void).cxx_destruct;

@end

