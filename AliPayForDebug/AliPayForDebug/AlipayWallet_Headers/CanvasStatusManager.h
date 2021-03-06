//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APGCanvasContext2D, NSMutableArray, NSMutableDictionary, NSString;

@interface CanvasStatusManager : NSObject
{
    float shadowC[4];
    float transform[6];
    float _shadowBlur;
    float _shadowOffsetX;
    float _shadowOffsetY;
    float _lineWidth;
    float _miterLimit;
    float _lineDashOffset;
    float _globalAlpha;
    APGCanvasContext2D *_ctx;
    NSMutableDictionary *_statusDict;
    id _fillStyle;
    id _strokeStyle;
    NSString *_lineCap;
    NSString *_lineJoin;
    NSMutableArray *_lineDash;
    NSString *_font;
    NSString *_textAlign;
    NSString *_textBaseline;
    NSString *_globalCompositeOperation;
    NSMutableArray *_transArray;
}

@property(retain, nonatomic) NSMutableArray *transArray; // @synthesize transArray=_transArray;
@property(retain, nonatomic) NSString *globalCompositeOperation; // @synthesize globalCompositeOperation=_globalCompositeOperation;
@property(nonatomic) float globalAlpha; // @synthesize globalAlpha=_globalAlpha;
@property(retain, nonatomic) NSString *textBaseline; // @synthesize textBaseline=_textBaseline;
@property(retain, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(retain, nonatomic) NSString *font; // @synthesize font=_font;
@property(nonatomic) float lineDashOffset; // @synthesize lineDashOffset=_lineDashOffset;
@property(retain, nonatomic) NSMutableArray *lineDash; // @synthesize lineDash=_lineDash;
@property(nonatomic) float miterLimit; // @synthesize miterLimit=_miterLimit;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSString *lineJoin; // @synthesize lineJoin=_lineJoin;
@property(retain, nonatomic) NSString *lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) float shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) float shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) float shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(retain, nonatomic) id strokeStyle; // @synthesize strokeStyle=_strokeStyle;
@property(retain, nonatomic) id fillStyle; // @synthesize fillStyle=_fillStyle;
@property(retain, nonatomic) NSMutableDictionary *statusDict; // @synthesize statusDict=_statusDict;
@property(nonatomic) __weak APGCanvasContext2D *ctx; // @synthesize ctx=_ctx;
- (void).cxx_destruct;
- (id)getCanvasStatus;
- (void)handleStyle:(id)arg1 isStroke:(_Bool)arg2;
- (void)syncCanvasStatus;
- (id)initWithCtx:(id)arg1;

@end

