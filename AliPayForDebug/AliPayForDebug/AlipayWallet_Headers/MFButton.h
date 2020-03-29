//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MFWidgetPluginProtocol-Protocol.h"

@class NSDictionary, NSString;
@protocol MFWidgetPluginProtocol;

@interface MFButton : UIButton <MFWidgetPluginProtocol>
{
    id <MFWidgetPluginProtocol> _delegate;
    id _widgetData;
    NSDictionary *_cssItem;
}

+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
+ (id)tagType;
@property(retain, nonatomic) NSDictionary *cssItem; // @synthesize cssItem=_cssItem;
@property(retain, nonatomic) id widgetData; // @synthesize widgetData=_widgetData;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)UIStateFromMFWState:(id)arg1;
- (void)resetCSS;
- (void)bindCss:(id)arg1 from:(id)arg2;
- (void)resetData;
- (void)bindData:(id)arg1 from:(id)arg2;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)loadCss:(id)arg1;
- (void)loadData:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)setMFDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
