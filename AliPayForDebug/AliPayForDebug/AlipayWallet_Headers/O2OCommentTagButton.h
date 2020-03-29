//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSString, UIColor;

@interface O2OCommentTagButton : UIButton
{
    NSString *_text;
    NSDictionary *_model;
    UIColor *_selectedColor;
    CDUnknownBlockType _selectedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType selectedCallback; // @synthesize selectedCallback=_selectedCallback;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)click;
- (void)setSelected:(_Bool)arg1;
- (id)initWithText:(id)arg1 selectedColor:(id)arg2 buttonInset:(double)arg3 maxWidth:(double)arg4;

@end
