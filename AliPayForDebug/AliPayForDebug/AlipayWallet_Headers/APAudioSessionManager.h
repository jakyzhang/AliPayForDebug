//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMAudioSessionManager;

@interface APAudioSessionManager : NSObject
{
    _Bool _showImagePickerController;
    APMAudioSessionManager *_impl;
}

+ (id)sharedManager;
@property(retain, nonatomic) APMAudioSessionManager *impl; // @synthesize impl=_impl;
@property(nonatomic, getter=isShowImagePickerController) _Bool showImagePickerController; // @synthesize showImagePickerController=_showImagePickerController;
- (void).cxx_destruct;
- (_Bool)isOtherAudioPlaying;
- (void)requestResignActive:(id)arg1;
- (_Bool)requestBecomeActive:(id)arg1 mode:(unsigned long long)arg2;
- (id)init;

@end
