//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEngineDataStoreProtocol-Protocol.h"

@class NSArray, NSString;

@protocol QEngineStockKlineDataStoreProtocol <QEngineDataStoreProtocol>
- (void)delDBIndicator:(NSString *)arg1 indicator:(int)arg2 kLineType:(int)arg3 adjust:(long long)arg4;
- (void)delDBKLine:(NSString *)arg1 kLineType:(int)arg2 adjust:(long long)arg3;
- (NSArray *)readDbIndicator:(NSString *)arg1 indicator:(int)arg2 kLineType:(int)arg3 adjust:(long long)arg4 endPosition:(NSString *)arg5 limit:(int)arg6 order:(int)arg7;
- (NSArray *)readDBKLine:(NSString *)arg1 kLineType:(int)arg2 adjust:(long long)arg3 endPosition:(NSString *)arg4 limit:(int)arg5 order:(int)arg6;
@end
