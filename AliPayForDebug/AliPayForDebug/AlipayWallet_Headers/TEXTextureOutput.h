//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TEXInput-Protocol.h"

@class NSString, TEXContext, TEXFramebuffer, TEXProgram;

@interface TEXTextureOutput : NSObject <TEXInput>
{
    unsigned int _dstTexture;
    struct CGSize _size;
    TEXContext *_context;
    TEXFramebuffer *_framebuffer;
    float _imageVertices[8];
    float _textureCoordinates[8];
    int _inputTextureCoordinateAttribute;
    int _inputImageTextureUniform;
    TEXProgram *_program;
    unsigned int _positionAttribte;
    _Bool _noFlip;
}

@property(nonatomic) _Bool noFlip; // @synthesize noFlip=_noFlip;
@property(retain, nonatomic) TEXContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)drawFramebuffer:(id)arg1;
- (void)updateTextureCoordinates;
- (void)updateImageVertices;
- (void)initProgramInContext;
- (void)receiveFramebuffer:(id)arg1 fromOutput:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)updateSize:(struct CGSize)arg1 dstTexture:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 dstTexture:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

