//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFWThemeManager, DTViewController, NSDateFormatter, NSString, SDLandScapeButton, UIImageView, UILabel;

@interface AFWStockDetailLandScapeHeaderView : UIView
{
    AFWThemeManager *_tm;
    NSString *_stockName;
    UILabel *_name;
    UILabel *_price;
    UILabel *_turnoverRateTitle;
    UILabel *_turnoverRate;
    UILabel *_timeTitle;
    UILabel *_time;
    UIImageView *_close;
    SDLandScapeButton *_button;
    DTViewController *_viewController;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak DTViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SDLandScapeButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *close; // @synthesize close=_close;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UILabel *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(retain, nonatomic) UILabel *turnoverRate; // @synthesize turnoverRate=_turnoverRate;
@property(retain, nonatomic) UILabel *turnoverRateTitle; // @synthesize turnoverRateTitle=_turnoverRateTitle;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) AFWThemeManager *tm; // @synthesize tm=_tm;
- (void).cxx_destruct;
- (id)updateMarketTimeInfoViewWithStockModel:(id)arg1;
- (id)replaceEmpty:(id)arg1;
- (void)layoutSubviews;
- (void)setStockInfo:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 withStockName:(id)arg2 controller:(id)arg3;

@end

