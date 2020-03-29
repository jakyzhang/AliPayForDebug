//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Ant3DXMediaManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol Ant3DXMediaTrackManagerDelegate <NSObject>

@optional
- (NSMutableArray *)trackManagerGetFaceTrackNodes:(Ant3DXMediaManager *)arg1;
- (void)trackManager:(Ant3DXMediaManager *)arg1 updateFaceTrackInfos:(NSMutableDictionary *)arg2;
- (void)trackManager:(Ant3DXMediaManager *)arg1 mirrorXMatrix:(float *)arg2;
- (void)trackManager:(Ant3DXMediaManager *)arg1 faceTrackStateChanged:(unsigned long long)arg2 trackedNodes:(NSArray *)arg3;
- (void)trackManager:(Ant3DXMediaManager *)arg1 wasLost:(_Bool)arg2 martrix:(float *)arg3;
- (void)trackManager:(Ant3DXMediaManager *)arg1 recognizeInitState:(unsigned long long)arg2 initFailedIndexArray:(NSArray *)arg3;
- (void)trackManager:(Ant3DXMediaManager *)arg1 recognitionSuccessIndex:(NSString *)arg2;
- (void)trackManager:(Ant3DXMediaManager *)arg1 markerSize:(float)arg2;
@end
