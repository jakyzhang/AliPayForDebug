//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PKStatusBar;

@protocol PKStatusBarDelegate <NSObject>
- (void)PKStatusBarDidIgnoredByUser:(PKStatusBar *)arg1;
- (void)PKStatusBarMainIconTaped:(PKStatusBar *)arg1;
- (void)PKStatusBarTaped:(PKStatusBar *)arg1;
- (void)PKStatusBarSubIconTaped:(PKStatusBar *)arg1;
- (void)PKStatusBarAlertMessageTaped:(PKStatusBar *)arg1;
- (void)PKStatusBarDismissed:(PKStatusBar *)arg1;
@end

