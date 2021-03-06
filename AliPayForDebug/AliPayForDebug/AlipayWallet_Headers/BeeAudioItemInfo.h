//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BeeAudioItemInfo : NSObject
{
    _Bool _isRecordAudioPlayState;
    NSString *_songIdentifier;
    NSString *_songName;
    NSString *_singerName;
    NSString *_songDescText;
    double _totalDuration;
    double _playingDuration;
    NSString *_songlogoURL;
    NSString *_coverImgUrl;
    NSString *_appName;
    NSString *_appLogo;
    NSString *_appType;
    NSString *_business;
    NSString *_epName;
    NSString *_webUrl;
    double _storeTime;
    NSDictionary *_extraDic;
    NSString *_bizIdentifier;
}

@property(retain, nonatomic) NSString *bizIdentifier; // @synthesize bizIdentifier=_bizIdentifier;
@property(copy, nonatomic) NSDictionary *extraDic; // @synthesize extraDic=_extraDic;
@property(nonatomic) double storeTime; // @synthesize storeTime=_storeTime;
@property(nonatomic) _Bool isRecordAudioPlayState; // @synthesize isRecordAudioPlayState=_isRecordAudioPlayState;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *epName; // @synthesize epName=_epName;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *appLogo; // @synthesize appLogo=_appLogo;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(retain, nonatomic) NSString *songlogoURL; // @synthesize songlogoURL=_songlogoURL;
@property(nonatomic) double playingDuration; // @synthesize playingDuration=_playingDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSString *songDescText; // @synthesize songDescText=_songDescText;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songIdentifier; // @synthesize songIdentifier=_songIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

