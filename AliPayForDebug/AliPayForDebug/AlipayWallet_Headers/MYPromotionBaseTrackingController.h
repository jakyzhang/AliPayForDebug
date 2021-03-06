//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MYPromotionTrackingModel;

@interface MYPromotionBaseTrackingController : NSObject
{
    MYPromotionTrackingModel *_trackingModel;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MYPromotionTrackingModel *trackingModel; // @synthesize trackingModel=_trackingModel;
- (void).cxx_destruct;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)viewDestory;
- (void)viewDidRemove;
- (void)viewDidShow;
- (void)viewFrameDidChanged:(struct CGRect)arg1;
- (id)contentView;
- (_Bool)updateWithTrackingModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 trackingModel:(id)arg2;

@end

