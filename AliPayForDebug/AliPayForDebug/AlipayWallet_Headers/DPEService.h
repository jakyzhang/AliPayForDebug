//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DPEJSBridgeMapping, JSContext, NSLock;

@interface DPEService : NSObject
{
    _Bool _running;
    _Bool _useDukTape;
    JSContext *_context;
    NSLock *_lock;
    DPEJSBridgeMapping *_mapping;
}

+ (void)logErrorMonitorByEngineName:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (id)getInstance;
@property(nonatomic) _Bool useDukTape; // @synthesize useDukTape=_useDukTape;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) DPEJSBridgeMapping *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)HMACMD5WithString:(id)arg1 WithKey:(id)arg2;
- (_Bool)stringIsBlank:(id)arg1;
- (id)decryptScript:(id)arg1;
- (id)encryScript:(id)arg1;
- (_Bool)removeWithCertType:(id)arg1;
- (_Bool)storeWithCertType:(id)arg1 scriptName:(id)arg2 value:(id)arg3;
- (id)getScriptValueByCertType:(id)arg1 scriptName:(id)arg2;
- (_Bool)scriptIsValid:(id)arg1 scriptMD5:(id)arg2 certType:(id)arg3 scriptName:(id)arg4;
- (id)getProtocolByCertType:(id)arg1 scriptName:(id)arg2;
- (_Bool)clearProtocolByCertType:(id)arg1;
- (_Bool)storeProtocol:(id)arg1 certType:(id)arg2 scriptName:(id)arg3;
- (id)getResultWithProtocolContent:(id)arg1 param:(id)arg2;
- (id)getRealCodeByCertType:(id)arg1 scriptName:(id)arg2 scriptType:(id)arg3 scriptMD5:(id)arg4 param:(id)arg5 getProtocolBlock:(CDUnknownBlockType)arg6;
- (id)getCodeByCertType:(id)arg1 scriptName:(id)arg2 scriptType:(id)arg3 scriptMD5:(id)arg4 param:(id)arg5 getProtocolBlock:(CDUnknownBlockType)arg6;
- (_Bool)isRunning;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
