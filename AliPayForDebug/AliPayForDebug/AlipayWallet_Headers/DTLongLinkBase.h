//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTLongLinkBase : NSObject
{
}

+ (id)getCdidKey;
+ (void)saveCdidKey:(id)arg1;
+ (void)removeDicCompensateKeyWithKeyDicId:(id)arg1 bucketKey:(id)arg2;
+ (id)getDicWithMessageCompensateKey;
+ (void)saveDicWithMessageCompensateKey:(id)arg1;
+ (id)getDicWithMessageKey:(id)arg1;
+ (id)getDicWithMessageKeyCurrnetAppname;
+ (void)saveDicWithMessageKey:(id)arg1 appName:(id)arg2;
+ (void)initialize;

@end
