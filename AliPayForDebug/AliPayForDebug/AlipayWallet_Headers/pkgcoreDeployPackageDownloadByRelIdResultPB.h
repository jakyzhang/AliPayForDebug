//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface pkgcoreDeployPackageDownloadByRelIdResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appBaseInfosJson; // @dynamic appBaseInfosJson;
@property(retain, nonatomic) NSArray *appRelations; // @dynamic appRelations;
@property(readonly) _Bool hasAppBaseInfosJson; // @dynamic hasAppBaseInfosJson;
@property(readonly) _Bool hasPackJson; // @dynamic hasPackJson;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultMsg; // @dynamic hasResultMsg;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *packJson; // @dynamic packJson;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultMsg; // @dynamic resultMsg;
@property(nonatomic) _Bool success; // @dynamic success;

@end
