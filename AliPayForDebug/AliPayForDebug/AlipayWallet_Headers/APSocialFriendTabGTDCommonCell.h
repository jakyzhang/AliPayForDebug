//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCommonSelectTableViewCell.h"

@class GTDRecentContact, NSMutableDictionary;

@interface APSocialFriendTabGTDCommonCell : APCommonSelectTableViewCell
{
    GTDRecentContact *_gtdItem;
    NSMutableDictionary *_gtdFoldingImageKeyedByIconURL;
}

+ (double)accLabelFont;
+ (double)getImageWidth;
+ (double)heightOfCell;
+ (id)cellIdentifier;
@property(retain, nonatomic) NSMutableDictionary *gtdFoldingImageKeyedByIconURL; // @synthesize gtdFoldingImageKeyedByIconURL=_gtdFoldingImageKeyedByIconURL;
@property(retain, nonatomic) GTDRecentContact *gtdItem; // @synthesize gtdItem=_gtdItem;
- (void).cxx_destruct;
- (_Bool)isNewFriendTab;
- (void)buttonShowWithTitle:(id)arg1 enable:(_Bool)arg2 titleColor:(id)arg3 borderColor:(id)arg4 fillColor:(id)arg5;
- (void)adjustCommonItem:(double)arg1;
- (double)adjustIconImage:(double)arg1;
- (double)getDetailLabelFont;
- (double)getTitleLabelFont;
- (void)bottomLineShow:(_Bool)arg1 fullColumn:(_Bool)arg2;
- (void)refreshIconImage;
- (void)refreshDetail;
- (id)getAccLabelText;
- (void)refreshAccState;
- (void)refreshCellWithItem:(id)arg1;
- (double)titleTextValidWidth:(double)arg1;
- (double)realHeightOfCell;
- (void)setupDetailLabel;
- (void)setupTitleLabel;
- (_Bool)isLeftAlignmentLabel;
- (void)configParams:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
