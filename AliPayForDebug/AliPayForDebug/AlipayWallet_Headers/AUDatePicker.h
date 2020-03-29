//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UIPickerView;
@protocol AUDatePickerDelegate;

@interface AUDatePicker : UIView
{
    _Bool _isDatePicker;
    UIPickerView *_pickerView;
    UIDatePicker *_datePickerView;
    id <AUDatePickerDelegate> _delegate;
}

+ (id)pickerViewWithTitle:(id)arg1;
@property(nonatomic) __weak id <AUDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDatePicker; // @synthesize isDatePicker=_isDatePicker;
@property(retain, nonatomic) UIDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)setAUDatePickerDate:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentDate:(id)arg1;
- (void)setTimeDateminDate:(id)arg1 MaxDate:(id)arg2;
- (void)dealloc;
- (void)_finish;
- (void)_cancel;
- (void)show;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 withTitle:(id)arg2 finishBtnText:(id)arg3 cancelBtnText:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withTitle:(id)arg2;

@end
