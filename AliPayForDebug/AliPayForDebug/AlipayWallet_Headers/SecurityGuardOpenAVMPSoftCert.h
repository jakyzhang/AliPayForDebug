//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISecurityGuardOpenAVMPSoftCert-Protocol.h"

@class NSString;

@interface SecurityGuardOpenAVMPSoftCert : NSObject <ISecurityGuardOpenAVMPSoftCert>
{
}

- (Class)getMetaClass;
- (id)getCert:(id)arg1;
- (_Bool)installCert:(id)arg1 certInfo:(id)arg2;
- (_Bool)verifyWithCert:(id)arg1 signature:(id)arg2 plainData:(id)arg3 type:(int)arg4;
- (id)signWithCert:(id)arg1 data:(id)arg2 type:(int)arg3;
- (id)generateCSR:(id)arg1 info:(id)arg2 type:(int)arg3;
- (_Bool)initAVMPSoftCert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

