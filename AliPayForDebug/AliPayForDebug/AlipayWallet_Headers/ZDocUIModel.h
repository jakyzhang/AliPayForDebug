//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDocBaseModel.h"

@class ZDocBottomLayerModel, ZDocCaptureLayerModel, ZDocTitlebarModel;

@interface ZDocUIModel : ZDocBaseModel
{
    ZDocTitlebarModel *_titleBar;
    ZDocCaptureLayerModel *_captureLayer;
    ZDocBottomLayerModel *_bottomLayer;
}

@property(retain, nonatomic) ZDocBottomLayerModel *bottomLayer; // @synthesize bottomLayer=_bottomLayer;
@property(retain, nonatomic) ZDocCaptureLayerModel *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(retain, nonatomic) ZDocTitlebarModel *titleBar; // @synthesize titleBar=_titleBar;
- (void).cxx_destruct;
- (id)init;

@end
