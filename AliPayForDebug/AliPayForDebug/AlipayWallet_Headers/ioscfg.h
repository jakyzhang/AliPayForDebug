//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDocBaseModel.h"

@class NSMutableArray, NSNumber, NSString;

@interface ioscfg : ZDocBaseModel
{
    NSNumber *_env;
    NSString *_sceneCode;
    NSNumber *_showGuidePage;
    NSNumber *_showPowerByZoloz;
    NSString *_guidePageUrl;
    NSNumber *_uploadMonitorPic;
    NSNumber *_ratio;
    NSNumber *_captureMode;
    NSMutableArray *_modules;
}

@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSNumber *captureMode; // @synthesize captureMode=_captureMode;
@property(retain, nonatomic) NSNumber *ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSNumber *uploadMonitorPic; // @synthesize uploadMonitorPic=_uploadMonitorPic;
@property(copy, nonatomic) NSString *guidePageUrl; // @synthesize guidePageUrl=_guidePageUrl;
@property(retain, nonatomic) NSNumber *showPowerByZoloz; // @synthesize showPowerByZoloz=_showPowerByZoloz;
@property(retain, nonatomic) NSNumber *showGuidePage; // @synthesize showGuidePage=_showGuidePage;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSNumber *env; // @synthesize env=_env;
- (void).cxx_destruct;

@end
