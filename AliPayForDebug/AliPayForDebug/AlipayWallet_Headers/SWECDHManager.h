//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SWECDHKeyUtils;

@interface SWECDHManager : NSObject
{
    SWECDHKeyUtils *_KeyUtils;
}

+ (id)hexStringfrom:(id)arg1;
+ (id)convertHexStrToData:(id)arg1;
@property(retain, nonatomic) SWECDHKeyUtils *KeyUtils; // @synthesize KeyUtils=_KeyUtils;
- (void).cxx_destruct;
- (id)getPublicKeyXY;
- (id)getPublicKeyCurve;
- (id)getMyPublicKey;
- (id)generateDHKey:(id)arg1;
- (void)generateKeypairs;
- (id)init;

@end

