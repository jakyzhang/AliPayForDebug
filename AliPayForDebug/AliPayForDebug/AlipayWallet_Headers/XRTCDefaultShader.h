//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XRTCVideoViewShading-Protocol.h"

@class NSString;

@interface XRTCDefaultShader : NSObject <XRTCVideoViewShading>
{
    unsigned int _vertexBuffer;
    unsigned int _vertexArray;
    struct optional<RTCVideoRotation> _currentRotation;
    struct optional<bool> _currentMirror;
    struct optional<float> _currentAspectRatio;
    struct optional<int> _currentInputWidth;
    unsigned int _i420Program;
    unsigned int _nv12Program;
}

- (id).cxx_construct;
- (void)applyShadingForFrameWithFrame:(id)arg1 yPlane:(unsigned int)arg2 uvPlane:(unsigned int)arg3;
- (void)applyShadingForFrameWithFrame:(id)arg1 yPlane:(unsigned int)arg2 uPlane:(unsigned int)arg3 vPlane:(unsigned int)arg4;
- (_Bool)prepareVertexBufferWithFrame:(id)arg1;
- (_Bool)createAndSetupNV12Program;
- (_Bool)createAndSetupI420Program;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
