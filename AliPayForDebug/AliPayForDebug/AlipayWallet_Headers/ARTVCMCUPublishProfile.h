//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARTVCMCUPublishVideoProfile;

@interface ARTVCMCUPublishProfile : NSObject
{
    _Bool _videoEnable;
    _Bool _audioEnable;
    ARTVCMCUPublishVideoProfile *_videoProfile;
}

@property(nonatomic) _Bool audioEnable; // @synthesize audioEnable=_audioEnable;
@property(nonatomic) _Bool videoEnable; // @synthesize videoEnable=_videoEnable;
@property(retain, nonatomic) ARTVCMCUPublishVideoProfile *videoProfile; // @synthesize videoProfile=_videoProfile;
- (void).cxx_destruct;
- (id)dictionary;

@end

