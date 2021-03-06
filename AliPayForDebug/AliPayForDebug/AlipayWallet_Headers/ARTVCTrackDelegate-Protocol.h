//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARTVCMediaTrack, ARTVCVideoCapturer;

@protocol ARTVCTrackDelegate <NSObject>
- (void)didLocalCameraCapturerCreated:(ARTVCVideoCapturer *)arg1;
- (void)didRemoteVideoTrackAdded:(ARTVCMediaTrack *)arg1;
- (void)didRemoteAudioTrackAdded:(ARTVCMediaTrack *)arg1;
- (void)didLocalVideoTrackAdded:(ARTVCMediaTrack *)arg1;
- (void)didLocalAudioTrackAdded:(ARTVCMediaTrack *)arg1;
- (void)didMicrophonePermissionNotAllowed;
- (void)didCameraPermissionNotAllowed;
@end

