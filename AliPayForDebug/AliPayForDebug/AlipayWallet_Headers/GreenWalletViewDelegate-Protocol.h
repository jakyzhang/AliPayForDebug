//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCVirtualCardInfo, GreenWalletContentView, GreenWalletView, NSArray, NSIndexPath, NSString;

@protocol GreenWalletViewDelegate <NSObject>
- (ACCVirtualCardInfo *)currentDisplayedCardInfo;
- (NSArray *)currentCardGroupList:(GreenWalletView *)arg1;
- (NSArray *)otherCardList:(GreenWalletView *)arg1;
- (void)managerCardAt:(NSIndexPath *)arg1 cardInfo:(ACCVirtualCardInfo *)arg2;
- (void)deleteCardAt:(NSIndexPath *)arg1 cardInfo:(ACCVirtualCardInfo *)arg2;
- (void)clickAllCardBtn:(GreenWalletView *)arg1;
- (void)didStartPanCardGestrue:(GreenWalletView *)arg1;
- (void)showDetailInWalletView:(GreenWalletView *)arg1 useGesture:(_Bool)arg2;
- (void)didShowListInWalletView:(GreenWalletView *)arg1;
- (void)showListInWalletView:(GreenWalletView *)arg1;
- (GreenWalletContentView *)contentViewInWalletView:(GreenWalletView *)arg1;
- (void)walletView:(GreenWalletView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)walletView:(GreenWalletView *)arg1 indexPathForCard:(ACCVirtualCardInfo *)arg2;
- (NSArray *)walletViewBottomCardList:(GreenWalletView *)arg1;
- (unsigned long long)walletView:(GreenWalletView *)arg1 headerTypeInSection:(long long)arg2;
- (NSString *)walletView:(GreenWalletView *)arg1 titleInSection:(long long)arg2;
- (ACCVirtualCardInfo *)walletView:(GreenWalletView *)arg1 cardInfoAtIndexPath:(NSIndexPath *)arg2;
- (long long)wallectView:(GreenWalletView *)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInWalletView:(GreenWalletView *)arg1;
- (long long)totalCountOfItemsInWalletView:(GreenWalletView *)arg1;
@end
