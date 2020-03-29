//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APRiskCommonUtils : NSObject
{
}

+ (id)base64DecodeString:(id)arg1;
+ (id)base64EncodeString:(id)arg1;
+ (_Bool)shouldSample:(double)arg1;
+ (id)wbEncryptAndBase64Encode:(id)arg1;
+ (id)base64DecodeAndWbDecrypt:(id)arg1;
+ (id)wbDecrypt:(char *)arg1 inLen:(int)arg2;
+ (id)wbEncrypt:(id)arg1;
+ (id)getSecurityStorageValue:(id)arg1;
+ (unsigned short)checkApiStatus;
+ (id)getServerTime;
+ (id)getWaterMark;
+ (id)createFile:(id)arg1 inDirectory:(id)arg2;
+ (id)createDirectoryAtDocumentPath:(id)arg1;
+ (id)getStorageFilePath;
+ (id)jsonStringWithObject:(id)arg1;
+ (id)jsonObjectWithString:(id)arg1;
+ (id)_16923bf24c2b4257b579fcc6bffd08884920170518L;
+ (id)getCurrentUserId;
+ (long long)getCurrentTime;
+ (id)getBootTime;
+ (id)_16923bf24c2b4257b579fcc6bffd08881220170518L;
+ (id)_16923bf24c2b4257b579fcc6bffd0888220170518L;
+ (id)_16923bf24c2b4257b579fcc6bffd08882620170518L;
+ (id)_16923bf24c2b4257b579fcc6bffd08882520170518L;
+ (id)checkEmu;
+ (id)checkYYValue;
+ (id)checkYY;
+ (id)formatErrorCode:(int)arg1;
+ (_Bool)isDLInitializedCrash:(int)arg1;
+ (_Bool)isIntializedCrash:(int)arg1;
+ (id)specialStringWithDictionay:(id)arg1;

@end
