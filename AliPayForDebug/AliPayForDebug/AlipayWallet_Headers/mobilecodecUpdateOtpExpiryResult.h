//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface mobilecodecUpdateOtpExpiryResult : NSObject
{
    _Bool _success;
    int _resultCode;
    NSString *_resultMsg;
    NSString *_userId;
    NSString *_tid;
    NSString *_index;
    NSString *_seedMD5;
    NSDate *_expiryTime;
    NSDate *_suggestUpdateTime;
}

@property(retain, nonatomic) NSDate *suggestUpdateTime; // @synthesize suggestUpdateTime=_suggestUpdateTime;
@property(retain, nonatomic) NSDate *expiryTime; // @synthesize expiryTime=_expiryTime;
@property(retain, nonatomic) NSString *seedMD5; // @synthesize seedMD5=_seedMD5;
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

