//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class AFTPImagePicker, AFWStockWebViewController, NSDictionary, NSString, UIView;

@interface TPJsApiHandler4StockCaptureHandler : NSObject <UIActionSheetDelegate>
{
    NSString *_extType;
    long long _maxWidth;
    long long _maxHeight;
    long long _quality;
    NSDictionary *_toDic;
    AFTPImagePicker *_picker;
    UIView *_curView;
    AFWStockWebViewController *_curVC;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak AFWStockWebViewController *curVC; // @synthesize curVC=_curVC;
@property(nonatomic) __weak UIView *curView; // @synthesize curView=_curView;
@property(retain, nonatomic) AFTPImagePicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSDictionary *toDic; // @synthesize toDic=_toDic;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(nonatomic) long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSString *extType; // @synthesize extType=_extType;
- (void).cxx_destruct;
- (void)pickerWithIndex:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlert;
- (id)scaleImage:(id)arg1;
- (id)getImageDataWithIdentifier:(id)arg1;
- (void)writeImages:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handle:(id)arg1 baseOnVC:(id)arg2 baseOnWebView:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
