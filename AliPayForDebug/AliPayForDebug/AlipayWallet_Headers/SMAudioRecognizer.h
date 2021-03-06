//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMAudioDeviceDelegate-Protocol.h"

@class APMAudioDevice, APMAudioEncoder, NSDate, NSMutableDictionary, NSString, SMInitializeConfiguration, SMSignatureConfig, SMStatistic;
@protocol SMAudioRecognizerDelegate;

@interface SMAudioRecognizer : NSObject <APMAudioDeviceDelegate>
{
    struct SMTransporterObserver *_transportObserver;
    struct SMTransporter *_transporter;
    struct Buffer *_encodeBuffer;
    CriticalSection_b058bf81 _audioRecognizerStatusLock;
    CriticalSection_b058bf81 _sessionLock;
    _Bool _started;
    id <SMAudioRecognizerDelegate> _delegate;
    SMInitializeConfiguration *_configuration;
    APMAudioDevice *_device;
    APMAudioEncoder *_encoder;
    long long _audioRecognizerStatus;
    NSMutableDictionary *_sessionMap;
    unsigned long long _recordBytes;
    SMSignatureConfig *_signatureConfig;
    NSDate *_lastStartDate;
    SMStatistic *_statistic;
}

+ (_Bool)checkParametersWith:(id)arg1;
+ (void)fetchSignatureIfNeedWithConfig:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)availableWithConfiguration:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)availableWithBizName:(id)arg1 subBiz:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)registerWebsocketServerAddressWithDictionary:(id)arg1;
@property(retain, nonatomic) SMStatistic *statistic; // @synthesize statistic=_statistic;
@property(retain, nonatomic) NSDate *lastStartDate; // @synthesize lastStartDate=_lastStartDate;
@property(retain, nonatomic) SMSignatureConfig *signatureConfig; // @synthesize signatureConfig=_signatureConfig;
@property(nonatomic) unsigned long long recordBytes; // @synthesize recordBytes=_recordBytes;
@property(retain, nonatomic) NSMutableDictionary *sessionMap; // @synthesize sessionMap=_sessionMap;
@property(nonatomic) long long audioRecognizerStatus; // @synthesize audioRecognizerStatus=_audioRecognizerStatus;
@property(retain, nonatomic) APMAudioEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) APMAudioDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) SMInitializeConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SMAudioRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleStatistic_firstAsr;
- (void)handleStatistic_finalAsr;
- (void)handleStatistic_stop;
- (void)createStatisticObject;
- (_Bool)stopSession:(id)arg1 isCancelling:(_Bool)arg2;
- (void)removeAllExpiredSessions;
- (id)findSessionWithServerSessionId:(id)arg1;
- (id)findCurrentSession;
- (void)updateSessionMapWithServerSessionId:(id)arg1 clientSessionId:(id)arg2;
- (void)removeSessionWithClientSessionId:(id)arg1;
- (void)removeSessionWithServerSessionId:(id)arg1;
- (id)createSession;
@property(readonly, nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
- (void)moveToCancelled;
- (void)moveToStopped;
- (void)moveToStarted;
- (_Bool)canCancelAndMoveToCancelling;
- (_Bool)canStopAndMoveToStopping;
- (int)canStartAndMoveToStarting;
- (void)didReceiveASRResult:(id)arg1 sessionId:(id)arg2;
- (void)didReceiveError:(id)arg1 sessionId:(id)arg2;
- (int)decectRpcGatewayAutomatically;
- (void)sendEndSessionMessageWithSession:(id)arg1;
- (void)sendEndSessionMessageIfNeedWithClientSessionId:(id)arg1;
- (_Bool)checkIfSpeechTimeTooShortWithSession:(id)arg1;
- (_Bool)checkIfStartTooQuickly;
- (void)didNetworkConnected;
- (_Bool)checkSignatureAndSetupIfNeed;
- (void)sendData:(char *)arg1 size:(int)arg2;
- (void)feedPCMAudioDataInernal:(struct AudioBufferList *)arg1;
- (void)didAudioRecordingStoppedWithReason:(long long)arg1;
- (void)didAudioCaptured:(struct AudioBufferList *)arg1 fromDevice:(id)arg2;
- (void)feedPCMAudioData:(struct AudioBufferList *)arg1;
- (void)feedEncodedAudioData:(char *)arg1 size:(int)arg2;
- (void)cancel;
- (_Bool)stop;
- (id)start:(int)arg1 options:(id)arg2;
- (id)start:(int)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithServerType:(long long)arg1 bizName:(id)arg2 subBiz:(id)arg3 audioEncodeType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

