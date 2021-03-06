//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Ant3DTracking, NSString;

@protocol Ant3DTrackingPlaneDelegate <NSObject>
- (void)trackingClearCameraPosition:(Ant3DTracking *)arg1;
- (union _GLKVector3)tracking:(Ant3DTracking *)arg1 getPositionWithNode:(NSString *)arg2;
- (union _GLKMatrix4)tracking:(Ant3DTracking *)arg1 getWorldMatrixWithNode:(NSString *)arg2;
- (union _GLKVector3)tracking:(Ant3DTracking *)arg1 getScaleWithNode:(NSString *)arg2;
- (union _GLKVector3)tracking:(Ant3DTracking *)arg1 getForwardVectorWithNode:(NSString *)arg2;
- (union _GLKVector3)tracking:(Ant3DTracking *)arg1 getUpVectorWithNode:(NSString *)arg2;
- (union _GLKVector3)tracking:(Ant3DTracking *)arg1 getPlaneIntersectionWithRayOrigin:(union _GLKVector3)arg2 direction:(union _GLKVector3)arg3 planeNormal:(union _GLKVector3)arg4 planeDistance:(double)arg5;
- (float)tracking:(Ant3DTracking *)arg1 calcPlaneIntersectionWithScreenPoint:(struct CGPoint)arg2 planeNormal:(union _GLKVector3)arg3 planeDistance:(double)arg4 dst:(union _GLKVector3 *)arg5;
@end

