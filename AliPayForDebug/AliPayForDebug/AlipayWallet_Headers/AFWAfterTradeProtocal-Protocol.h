//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol AFWAfterTradeProtocal <NSObject>
+ (_Bool)showPanInfoViewWithState:(NSString *)arg1;
+ (double)viewHeight;
- (void)setTradeState:(long long)arg1;
- (void)setPrice:(NSString *)arg1 changeStatusColor:(UIColor *)arg2 volume:(NSString *)arg3 amount:(NSString *)arg4;
- (void)setPrice:(NSString *)arg1 changePrice:(NSString *)arg2 rate:(NSString *)arg3 tradeTime:(NSString *)arg4;
- (void)setStockSession:(NSString *)arg1 txt:(NSString *)arg2;
@end

