//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface alideviceinfoDeviceBusinessResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *action; // @dynamic action;
@property(retain, nonatomic) PBMapStringString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *bizId; // @dynamic bizId;
@property(retain, nonatomic) NSString *bizResult; // @dynamic bizResult;
@property(retain, nonatomic) PBMapStringString *config; // @dynamic config;
@property(nonatomic) _Bool finish; // @dynamic finish;
@property(readonly) _Bool hasAction; // @dynamic hasAction;
@property(readonly) _Bool hasActionData; // @dynamic hasActionData;
@property(readonly) _Bool hasBizId; // @dynamic hasBizId;
@property(readonly) _Bool hasBizResult; // @dynamic hasBizResult;
@property(readonly) _Bool hasConfig; // @dynamic hasConfig;
@property(readonly) _Bool hasFinish; // @dynamic hasFinish;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultMsg; // @dynamic hasResultMsg;
@property(readonly) _Bool hasTerminalId; // @dynamic hasTerminalId;
@property(readonly) _Bool hasTerminalType; // @dynamic hasTerminalType;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultMsg; // @dynamic resultMsg;
@property(retain, nonatomic) NSString *terminalId; // @dynamic terminalId;
@property(retain, nonatomic) NSString *terminalType; // @dynamic terminalType;

@end
