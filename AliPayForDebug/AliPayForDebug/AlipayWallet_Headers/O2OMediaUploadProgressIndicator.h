//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMediaUploadIndicator.h"

@class O2OMediaUploadProgressView, UIImageView;

@interface O2OMediaUploadProgressIndicator : O2OMediaUploadIndicator
{
    O2OMediaUploadProgressView *_progressView;
    UIImageView *_errorIcon;
}

@property(retain, nonatomic) UIImageView *errorIcon; // @synthesize errorIcon=_errorIcon;
@property(retain, nonatomic) O2OMediaUploadProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)setUploadedURL:(id)arg1;
- (void)setIsUploadError:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setIsUploading:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

