//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TNApp, UIColor, UIImage, UIImageView, UILabel;

@interface TNNavItemView : UIView
{
    long long _index;
    UIColor *_itemTitleColor;
    NSString *_itemTitle;
    UIImage *_normalImage;
    TNApp *_app;
    long long _menuId;
    UIImageView *_iconImageView;
    UILabel *_itemLabel;
}

@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long menuId; // @synthesize menuId=_menuId;
@property(nonatomic) __weak TNApp *app; // @synthesize app=_app;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)tatAction:(id)arg1;
- (void)layoutNavItemView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

