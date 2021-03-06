//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface APSafeBoxTableViewCell : UITableViewCell
{
    UIImageView *_headerImgView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_demoLabel;
}

@property(retain, nonatomic) UILabel *demoLabel; // @synthesize demoLabel=_demoLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
- (void).cxx_destruct;
- (void)configCellWith:(id)arg1;
- (void)layoutCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

