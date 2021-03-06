//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface CLClubMemberInfoCell : UITableViewCell
{
    NSString *_roleType;
    NSString *_showName;
    NSString *_avatarUlr;
    _Bool _isLasttRow;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_statusView;
    UIView *_bottomLine;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshCellWithMemberInfo:(id)arg1 isLastCell:(_Bool)arg2;
- (void)buildSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

