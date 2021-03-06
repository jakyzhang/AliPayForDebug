//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TANaviBarPopMenu, UIView;

@protocol TANaviBarPopMenuDelegate <NSObject>
- (NSDictionary *)favoriteMenuContent:(NSString *)arg1;
- (_Bool)isLandscape;
- (NSDictionary *)menuPanelInfo;
- (NSString *)menuPanelTitle;
- (NSString *)appIdForCurrentMenu;
- (_Bool)shouldShowNoticeView:(NSString *)arg1;
- (_Bool)shouldShowBadgeView:(NSDictionary *)arg1;
- (_Bool)shouldShowRecentlyUsedPanel;
- (void)gotoDetailPageWithItem:(NSDictionary *)arg1;
- (_Bool)didClickPanelItemOnIndex:(long long)arg1 extraInfo:(NSDictionary *)arg2 itemView:(UIView *)arg3;
- (NSArray *)dataSourceForRecentlyUsed;
- (NSArray *)dataSourceForBasicPanel:(TANaviBarPopMenu *)arg1;
@end

