//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFWStockPagingItem, AFWStockPagingView;

@protocol AFWStockPagingProtocol <NSObject>
- (void)addToSliderView:(AFWStockPagingView *)arg1 frame:(struct CGRect)arg2;
- (void)removeFromSliderView:(AFWStockPagingView *)arg1;
- (void)setPageIndex:(long long)arg1;
- (long long)pageIndex;
- (void)pageDidDisappear:(_Bool)arg1;
- (void)pageDidAppear:(_Bool)arg1;
- (void)isVisible;
- (void)pageDidBecomeInvisible;
- (void)pageDidBecomeVisible;
- (id)initWithFrame:(struct CGRect)arg1 sliderItem:(AFWStockPagingItem *)arg2;
@end
