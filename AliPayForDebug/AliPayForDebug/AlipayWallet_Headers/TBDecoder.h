//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBDecoder : NSObject
{
}

+ (id)getDecodeInfo;
+ (id)getResultFromTBarRetArray:(CDStruct_be7567d2 *)arg1 outCount:(int)arg2;
+ (int)computeInitialSampleSize:(struct CGSize)arg1 minSideLength:(int)arg2 maxNumOfPixels:(int)arg3;
+ (int)computeSampleSize:(struct CGSize)arg1 minSideLength:(int)arg2 maxNumOfPixels:(int)arg3;
+ (id)decodeUIImage:(id)arg1 type:(int)arg2;
+ (_Bool)isAdvanceMachine;
+ (void)setUpMetal;
+ (void)setUpNativeMethod;
+ (void)setBinarizerOrder:(id)arg1;
+ (int)unregistCodeDSLIsAlbum:(_Bool)arg1;
+ (int)registCodeDSL:(id)arg1 IsAlbum:(_Bool)arg2;
+ (void)endCamera;
+ (void)startCameraWithConfig:(id)arg1;
+ (id)overallDecodeUIImage:(id)arg1;
+ (id)decodeUIImage:(id)arg1;
+ (id)decodeBufferData:(id)arg1 imageWidth:(double)arg2 imageHeight:(double)arg3 rectOfInterest:(struct CGRect)arg4 resample:(_Bool)arg5 type:(int)arg6 codeProportion:(float *)arg7;
+ (void)downGradeSdkMemoryAllocate;
+ (id)decodeCVPixelBuffer:(struct __CVBuffer *)arg1 rectOfInterest:(struct CGRect)arg2 resample:(_Bool)arg3 type:(int)arg4 cameraZoomFactor:(float)arg5 codeProportion:(float *)arg6;
+ (id)decodeCVPixelBuffer:(struct __CVBuffer *)arg1 rectOfInterest:(struct CGRect)arg2 resample:(_Bool)arg3 type:(int)arg4 cameraZoomFactor:(float)arg5 preDetectResult:(CDStruct_25cfa38e *)arg6;
+ (id)imageFromLumaData:(void *)arg1 W:(unsigned long long)arg2 H:(unsigned long long)arg3;
+ (struct _DecodeInfo *)getDecodeInfo:(struct _DecodeInfo *)arg1;

@end

