//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APDRMUtils : NSObject
{
}

+ (id)convertUnionInfo:(id)arg1;
+ (id)calculateDigest:(id)arg1;
+ (_Bool)encryptData:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (_Bool)saveDictWithCrypt:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
+ (id)copyDictionary:(id)arg1;
+ (_Bool)removeIfExists:(id)arg1;
+ (_Bool)createDirIfNotExists:(id)arg1;
+ (id)calculateMd5FromString:(id)arg1;
+ (id)calculateMd5:(id)arg1;
+ (_Bool)checkData:(id)arg1 withMD5:(id)arg2;
+ (id)decryptDataFromFile:(id)arg1;
+ (id)loadCryptMetaInfo:(id)arg1;
+ (id)getItemLogBizType:(id)arg1;

@end
