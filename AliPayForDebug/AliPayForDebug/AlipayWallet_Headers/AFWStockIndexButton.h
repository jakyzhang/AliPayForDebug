//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AFWIndexIcon, BSBadgeView, UIImageView, UILabel;

@interface AFWStockIndexButton : UIControl
{
    UILabel *_nameLabel;
    UIImageView *_imageView;
    CDUnknownBlockType _actionBlock;
    BSBadgeView *_badgeView;
    AFWIndexIcon *_model;
}

@property(retain, nonatomic) AFWIndexIcon *model; // @synthesize model=_model;
@property(retain, nonatomic) BSBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (double)subViewWidth;
- (void)clickAction;
- (id)init;

@end

