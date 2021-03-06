//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RVDDebugPanel, UIButton, UIView;

@interface RVDConsoleBtn : NSObject
{
    _Bool _isBtnShow;
    RVDDebugPanel *_debugPanel;
    UIButton *_btn;
    UIView *_parentView;
    double _btnWidth;
    double _btnHeight;
    double _dragAreaMaxX;
    double _dragAreaMaxY;
    double _dragAreaMinX;
    double _dragAreaMinY;
    NSString *_appId;
}

@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) double dragAreaMinY; // @synthesize dragAreaMinY=_dragAreaMinY;
@property(nonatomic) double dragAreaMinX; // @synthesize dragAreaMinX=_dragAreaMinX;
@property(nonatomic) double dragAreaMaxY; // @synthesize dragAreaMaxY=_dragAreaMaxY;
@property(nonatomic) double dragAreaMaxX; // @synthesize dragAreaMaxX=_dragAreaMaxX;
@property(nonatomic) double btnHeight; // @synthesize btnHeight=_btnHeight;
@property(nonatomic) double btnWidth; // @synthesize btnWidth=_btnWidth;
@property(nonatomic) _Bool isBtnShow; // @synthesize isBtnShow=_isBtnShow;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) RVDDebugPanel *debugPanel; // @synthesize debugPanel=_debugPanel;
- (void).cxx_destruct;
- (void)onClick;
- (void)onDrag:(id)arg1;
- (void)hideBtn;
- (void)showBtn;
- (id)initWithAppId:(id)arg1;

@end

