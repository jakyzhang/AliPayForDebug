//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANXBusCodeProtocol : NSObject
{
}

+ (id)queryScriptWithName:(id)arg1 scriptType:(id)arg2;
+ (id)genCodeByDynamicCertType:(id)arg1 scriptName:(id)arg2 scriptType:(id)arg3 scriptMac:(id)arg4 offlineData:(id)arg5 privateKey:(id)arg6 qrcode:(id)arg7 ticketType:(id)arg8 seatClass:(id)arg9;
+ (id)generateCodeWithCardData:(id)arg1;
+ (unsigned long long)getANXBusCodeProtocolEnumWithCertType:(id)arg1;
+ (_Bool)isThirdParty:(id)arg1;
+ (_Bool)isSupported:(id)arg1 useScript:(_Bool)arg2;

@end
