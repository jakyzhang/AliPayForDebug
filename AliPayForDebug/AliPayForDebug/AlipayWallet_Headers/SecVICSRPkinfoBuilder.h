//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol SecVICSRPkinfoContext;

@interface SecVICSRPkinfoBuilder : NSObject
{
    id <SecVICSRPkinfoContext> _pkinfoContext;
    NSData *_publicKey;
}

- (void).cxx_destruct;
- (id)certificationRequestPKInfo;
- (void)build:(id)arg1;
- (id)initWithPublicKeyType:(id)arg1;

@end

