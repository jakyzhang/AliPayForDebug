//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBaseRPCResponseInfo, NSString;

@interface ACCAMapSubscribeResponse : NSObject
{
    ACCBaseRPCResponseInfo *_baseRPCResponseInfo;
    NSString *_subScribeStatus;
}

@property(retain, nonatomic) NSString *subScribeStatus; // @synthesize subScribeStatus=_subScribeStatus;
@property(retain, nonatomic) ACCBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;

@end

