//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXSource.h"

@class TEXContext, TEXProgram;

@interface TEXCameraSource : TEXSource
{
    struct CGSize _frameSize;
    _Bool _started;
    _Bool _isInvalidFormatLogged;
    unsigned int _luminanceTexture;
    unsigned int _chrominanceTexture;
    TEXProgram *_yuvConversionProgram;
    int _yuvConversionPositionAttribute;
    int _yuvConversionTextureCoordinateAttribute;
    int _yuvConversionLuminanceTextureUniform;
    int _yuvConversionChrominanceTextureUniform;
    int _yuvConversionMatrixUniform;
    const float *_preferredConversion;
    float _imageVertices[8];
    float _textureCoordinates[8];
    unsigned int _bgraTexture;
    TEXProgram *_bgraRedrawProgram;
    int _bgraRedrawPositionAttribute;
    int _bgraRedrawTextureCoordinateAttribute;
    int _bgraRedrawTextureUniform;
    long long _orientation;
    long long _originOrientation;
    TEXContext *_context;
    long long _capturePosition;
}

@property(nonatomic) long long capturePosition; // @synthesize capturePosition=_capturePosition;
- (void).cxx_destruct;
- (void)setOutputSizeInPixels:(struct CGSize)arg1;
- (void)updateTextureCoordinates;
- (void)updateImageVertices;
- (void)convertYUVToRGBOutput;
- (void)checkFrameSizeWithBufferWidth:(int)arg1 bufferHeight:(int)arg2;
- (void)initYUVConversionProgram;
- (void)redrawBGRA;
- (void)initBRGARedrawProgram;
- (_Bool)handleVideoFrame:(struct __CVBuffer *)arg1;
- (void)feedVideoFrame:(struct __CVBuffer *)arg1;
- (void)stop;
- (void)start;
- (void)statusBarOrientationChange:(id)arg1;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1;
- (id)init;

@end

