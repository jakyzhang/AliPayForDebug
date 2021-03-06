//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XNNTargetDelegate-Protocol.h"

@class EAGLContext, NSDictionary, NSMutableArray, NSString, XMediaClassifyDetectFunctor, XMediaOCRFunctor, XMediaPredictFunctor;
@protocol XMediaEngineDelegate;

@interface XMediaEngine : NSObject <XNNTargetDelegate>
{
    _Bool _notificationAdded;
    _Bool _running;
    _Bool _isPreDetect;
    id <XMediaEngineDelegate> _delegate;
    NSString *_biz;
    NSString *_secretKey;
    NSString *_modelPath;
    NSString *_modelId;
    unsigned long long _mode;
    NSDictionary *_options;
    EAGLContext *_context;
    NSMutableArray *_extraModelPathArray;
    XMediaOCRFunctor *_ocrFunctor;
    XMediaClassifyDetectFunctor *_classifyFunctor;
    XMediaClassifyDetectFunctor *_detectFunctor;
    XMediaPredictFunctor *_predictFunctor;
    struct CGRect _roi;
}

@property(retain, nonatomic) XMediaPredictFunctor *predictFunctor; // @synthesize predictFunctor=_predictFunctor;
@property(retain, nonatomic) XMediaClassifyDetectFunctor *detectFunctor; // @synthesize detectFunctor=_detectFunctor;
@property(retain, nonatomic) XMediaClassifyDetectFunctor *classifyFunctor; // @synthesize classifyFunctor=_classifyFunctor;
@property(retain, nonatomic) XMediaOCRFunctor *ocrFunctor; // @synthesize ocrFunctor=_ocrFunctor;
@property(retain, nonatomic) NSMutableArray *extraModelPathArray; // @synthesize extraModelPathArray=_extraModelPathArray;
@property(nonatomic) _Bool isPreDetect; // @synthesize isPreDetect=_isPreDetect;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) struct CGRect roi; // @synthesize roi=_roi;
@property(nonatomic) _Bool notificationAdded; // @synthesize notificationAdded=_notificationAdded;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(nonatomic) __weak id <XMediaEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)responseWithResult:(id)arg1;
- (void)responseWithCode:(long long)arg1 message:(id)arg2;
- (void)onClassifyMode:(struct __CVBuffer *)arg1 width:(int)arg2 height:(int)arg3;
- (void)onDetectMode:(struct __CVBuffer *)arg1 width:(int)arg2 height:(int)arg3;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct CGRect)insectOldROI:(struct CGRect)arg1 withNewROI:(struct CGRect)arg2;
- (struct CGRect)getRealSizeROIWithOptions:(id)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3;
- (_Bool)createOCRNewProcessor;
- (_Bool)isModelPathValid:(id)arg1;
- (void)parseOptions:(id)arg1;
- (_Bool)checkIsModelPathChangeWithModelCount:(int)arg1;
- (_Bool)isTfLiteModelPath:(id)arg1;
- (void)onAIEngineError:(int)arg1 message:(id)arg2;
- (void)didReceiveCameraFrame:(id)arg1;
- (void)stopRunning;
- (void)startRunningWithMode:(unsigned long long)arg1 options:(id)arg2;
- (id)ocr:(id)arg1 options:(id)arg2;
- (id)predict:(id)arg1;
- (id)detect:(id)arg1 options:(id)arg2;
- (id)classify:(id)arg1 options:(id)arg2;
- (void)engineNotSupportCallback;
- (id)engineUnsupport;
- (void)relocateVariables;
- (void)dealloc;
- (id)initWithBiz:(id)arg1 secretKey:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

