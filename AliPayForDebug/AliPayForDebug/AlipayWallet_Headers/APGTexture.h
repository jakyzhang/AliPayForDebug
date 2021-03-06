//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface APGTexture : NSObject
{
    unsigned int _format;
    _Bool _genTexture;
    _Bool _flipY;
    short _width;
    short _height;
    unsigned int _textureId;
    unsigned int _fbo;
    double _lastUsedTimpstamp;
    NSMutableData *_pixelData;
}

@property(nonatomic) unsigned int fbo; // @synthesize fbo=_fbo;
@property(readonly, nonatomic) _Bool flipY; // @synthesize flipY=_flipY;
@property(retain, nonatomic) NSMutableData *pixelData; // @synthesize pixelData=_pixelData;
@property(readonly, nonatomic) double lastUsedTimpstamp; // @synthesize lastUsedTimpstamp=_lastUsedTimpstamp;
@property(readonly, nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(readonly, nonatomic) short height; // @synthesize height=_height;
@property(readonly, nonatomic) short width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)initTextureWithPixels:(id)arg1 target:(unsigned int)arg2 format:(unsigned int)arg3;
- (id)image;
- (void)dealloc;
- (void)setNeedFlipY;
- (id)initWithImage:(id)arg1;
- (id)initRenderTargetWithWidth:(int)arg1 height:(int)arg2 fbo:(unsigned int)arg3;
- (id)initWithNoTextureCreated:(int)arg1 height:(int)arg2 pixels:(id)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixels:(id)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 format:(unsigned int)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2;

@end

