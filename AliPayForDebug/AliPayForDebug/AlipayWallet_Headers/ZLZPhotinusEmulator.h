//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZLZVideoDispenserDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSURL, ZLZVideoWriter;

@interface ZLZPhotinusEmulator : NSObject <ZLZVideoDispenserDelegate>
{
    _Bool _canStart;
    CDUnknownBlockType _colorChangeHandler;
    CDUnknownBlockType _errorHandler;
    NSURL *_metadataUrl;
    NSURL *_videoUrl;
    unsigned long long _sequenceIndex;
    ZLZVideoWriter *_videoWriter;
    NSArray *_colorSequence;
    unsigned long long _colorIndex;
    long long _capturedIndex;
    NSString *_fileName;
    NSURL *_tempVideoUrl;
    void *_fileWriterFinishContext;
    NSMutableArray *_frameMetadataStorage;
}

+ (void)createWorkingDirectory;
+ (void)removeWorkingDirectory;
+ (id)extractFrameMetadata:(struct opaqueCMSampleBuffer *)arg1;
+ (id)appendGrayPadding:(unsigned long long)arg1 toColorSequence:(id)arg2;
+ (id)colorIndexLookup:(unsigned long long)arg1;
+ (id)workingDirectory;
+ (id)createDataNameWithIndex:(unsigned long long)arg1;
@property(retain) NSMutableArray *frameMetadataStorage; // @synthesize frameMetadataStorage=_frameMetadataStorage;
@property void *fileWriterFinishContext; // @synthesize fileWriterFinishContext=_fileWriterFinishContext;
@property(retain) NSURL *tempVideoUrl; // @synthesize tempVideoUrl=_tempVideoUrl;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property _Bool canStart; // @synthesize canStart=_canStart;
@property long long capturedIndex; // @synthesize capturedIndex=_capturedIndex;
@property unsigned long long colorIndex; // @synthesize colorIndex=_colorIndex;
@property(retain) NSArray *colorSequence; // @synthesize colorSequence=_colorSequence;
@property(retain) ZLZVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property unsigned long long sequenceIndex; // @synthesize sequenceIndex=_sequenceIndex;
@property(retain) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain) NSURL *metadataUrl; // @synthesize metadataUrl=_metadataUrl;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) CDUnknownBlockType colorChangeHandler; // @synthesize colorChangeHandler=_colorChangeHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dispenser:(id)arg1 onSampleBufferAvailable:(struct opaqueCMSampleBuffer *)arg2;
- (void)writeFrameMetadataToFile;
@property(readonly) _Bool hasEnoughFrames;
@property(readonly) _Bool filesReady;
- (void)begin;
- (void)complete;
- (id)initWithVideoSize:(struct CGSize)arg1 withColorPattern:(unsigned long long)arg2 andPaddings:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

