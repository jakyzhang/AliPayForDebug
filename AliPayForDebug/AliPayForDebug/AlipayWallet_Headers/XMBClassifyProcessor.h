//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaCoreBaseProcessor.h"

@class NSObject, XMediaClassifyDetectFunctor;
@protocol OS_dispatch_queue;

@interface XMBClassifyProcessor : XMediaCoreBaseProcessor
{
    NSObject<OS_dispatch_queue> *_algorithmQueue;
    XMediaClassifyDetectFunctor *_classifyFunctor;
}

@property(retain, nonatomic) XMediaClassifyDetectFunctor *classifyFunctor; // @synthesize classifyFunctor=_classifyFunctor;
- (void).cxx_destruct;
- (id)updateStandardJsonWithResult:(id)arg1;
- (id)processWithFrame:(struct __CVBuffer *)arg1 source:(id)arg2 options:(id)arg3;
- (id)synProcessWithSource:(id)arg1 options:(id)arg2;
- (void)asynProcessWithSource:(id)arg1 options:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)processWithCameraFrame:(struct __CVBuffer *)arg1 options:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)createClassifyFunctor;
- (void)updateStateWithFunctorCreate;
- (id)initWithConfig:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

