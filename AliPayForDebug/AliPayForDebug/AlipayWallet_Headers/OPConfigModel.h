//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OPConfigModel : NSObject
{
    _Bool _isShowAmount;
    long long _amount;
    NSString *_userName;
    NSString *_certId;
    long long _orderLimit4None;
    long long _dayLimit4None;
    long long _orderLimit4Pwd;
    long long _dayLimit4Pwd;
    long long _orderLimit4TouchId;
    long long _dayLimit4TouchId;
    long long _orderLimit4FaceId;
    long long _dayLimit4FaceId;
    NSDictionary *_offlineMerchantConfig;
    NSDictionary *_sdkConfig;
    NSString *_userCertStr;
    NSString *_userPriKey;
    double _expTimeInterval;
    double _refreshTimeInterval;
    NSString *_failDescLimit;
    NSString *_failDescInvalid;
    NSString *_failDescVerify;
    NSString *_failDescDefault;
    NSString *_dataVersion;
}

@property(copy, nonatomic) NSString *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) NSString *failDescDefault; // @synthesize failDescDefault=_failDescDefault;
@property(copy, nonatomic) NSString *failDescVerify; // @synthesize failDescVerify=_failDescVerify;
@property(copy, nonatomic) NSString *failDescInvalid; // @synthesize failDescInvalid=_failDescInvalid;
@property(copy, nonatomic) NSString *failDescLimit; // @synthesize failDescLimit=_failDescLimit;
@property(nonatomic) double refreshTimeInterval; // @synthesize refreshTimeInterval=_refreshTimeInterval;
@property(nonatomic) double expTimeInterval; // @synthesize expTimeInterval=_expTimeInterval;
@property(copy, nonatomic) NSString *userPriKey; // @synthesize userPriKey=_userPriKey;
@property(copy, nonatomic) NSString *userCertStr; // @synthesize userCertStr=_userCertStr;
@property(retain, nonatomic) NSDictionary *sdkConfig; // @synthesize sdkConfig=_sdkConfig;
@property(retain, nonatomic) NSDictionary *offlineMerchantConfig; // @synthesize offlineMerchantConfig=_offlineMerchantConfig;
@property(nonatomic) long long dayLimit4FaceId; // @synthesize dayLimit4FaceId=_dayLimit4FaceId;
@property(nonatomic) long long orderLimit4FaceId; // @synthesize orderLimit4FaceId=_orderLimit4FaceId;
@property(nonatomic) long long dayLimit4TouchId; // @synthesize dayLimit4TouchId=_dayLimit4TouchId;
@property(nonatomic) long long orderLimit4TouchId; // @synthesize orderLimit4TouchId=_orderLimit4TouchId;
@property(nonatomic) long long dayLimit4Pwd; // @synthesize dayLimit4Pwd=_dayLimit4Pwd;
@property(nonatomic) long long orderLimit4Pwd; // @synthesize orderLimit4Pwd=_orderLimit4Pwd;
@property(nonatomic) long long dayLimit4None; // @synthesize dayLimit4None=_dayLimit4None;
@property(nonatomic) long long orderLimit4None; // @synthesize orderLimit4None=_orderLimit4None;
@property(nonatomic) _Bool isShowAmount; // @synthesize isShowAmount=_isShowAmount;
@property(copy, nonatomic) NSString *certId; // @synthesize certId=_certId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (_Bool)isCertExpired;
- (_Bool)isValid;

@end

