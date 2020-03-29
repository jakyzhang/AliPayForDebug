//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseDetector.h"

#import "ARSessionDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface WAARKitWorldDetector : WABaseDetector <ARSessionDelegate>
{
    struct CGRect _projectionParameters;
    _Bool _outputFeaturePoints;
    _Bool _willRestart;
    NSDictionary *_hitTestInfo;
}

+ (id)exportName;
+ (id)metadata;
- (void).cxx_destruct;
- (id)dataFromVec3: /* Error: Ran out of types for this method. */;
-     // Error parsing type: @32@0:8r^16Q24, name: dataFromVec3Array:withCount:
-     // Error parsing type: @80@0:8{?=[4]}16, name: dataFromMat4:
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (id)describeARFrameInfo:(id)arg1;
- (int)doInitAfterAuthorize:(id)arg1;
- (void)onPageOptions:(id)arg1;
- (void)analyzeARFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
