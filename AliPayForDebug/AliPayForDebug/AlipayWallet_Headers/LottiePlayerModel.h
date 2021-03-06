//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BeeLotttieJSONModel, NSDictionary, NSNumber, NSString;

@interface LottiePlayerModel : NSObject
{
    NSNumber *_downgradeLevelEnum;
    _Bool _isAutoPlay;
    _Bool _isReverse;
    _Bool _isAutoReverse;
    _Bool _optimize;
    _Bool _placeHolderPreLoad;
    _Bool _variableLottie;
    _Bool _skipCreateViewOnAsyncCall;
    _Bool _canDowngradeOnEmptyPlaceHolder;
    double _speed;
    double _repeatCount;
    NSString *_placeholder;
    NSString *_rootPath;
    NSString *_assetsPath;
    NSString *_lottieContent;
    NSString *_path;
    NSString *_django;
    NSString *_md5;
    NSDictionary *_variableMap;
    NSString *_renderType;
    NSString *_downgradeLevel;
    NSString *_source;
    NSString *_scene;
    NSString *_bizPrefix;
    NSString *_bizLogId;
    NSString *_localPath;
    NSString *_localPlaceHolderPath;
    BeeLotttieJSONModel *_jsonModel;
    NSDictionary *_d;
}

@property(nonatomic) _Bool canDowngradeOnEmptyPlaceHolder; // @synthesize canDowngradeOnEmptyPlaceHolder=_canDowngradeOnEmptyPlaceHolder;
@property(readonly, nonatomic) NSDictionary *d; // @synthesize d=_d;
@property(retain, nonatomic) BeeLotttieJSONModel *jsonModel; // @synthesize jsonModel=_jsonModel;
@property(retain, nonatomic) NSString *localPlaceHolderPath; // @synthesize localPlaceHolderPath=_localPlaceHolderPath;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(readonly, nonatomic) NSString *bizLogId; // @synthesize bizLogId=_bizLogId;
@property(nonatomic) _Bool skipCreateViewOnAsyncCall; // @synthesize skipCreateViewOnAsyncCall=_skipCreateViewOnAsyncCall;
@property(retain, nonatomic) NSString *bizPrefix; // @synthesize bizPrefix=_bizPrefix;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *downgradeLevel; // @synthesize downgradeLevel=_downgradeLevel;
@property(retain, nonatomic) NSString *renderType; // @synthesize renderType=_renderType;
@property(retain, nonatomic) NSDictionary *variableMap; // @synthesize variableMap=_variableMap;
@property(nonatomic) _Bool variableLottie; // @synthesize variableLottie=_variableLottie;
@property(nonatomic) _Bool placeHolderPreLoad; // @synthesize placeHolderPreLoad=_placeHolderPreLoad;
@property(nonatomic) _Bool optimize; // @synthesize optimize=_optimize;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *django; // @synthesize django=_django;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *lottieContent; // @synthesize lottieContent=_lottieContent;
@property(retain, nonatomic) NSString *assetsPath; // @synthesize assetsPath=_assetsPath;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) _Bool isAutoReverse; // @synthesize isAutoReverse=_isAutoReverse;
@property(nonatomic) _Bool isReverse; // @synthesize isReverse=_isReverse;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)dataMap;
- (long long)renderTypeEnum:(id)arg1;
- (long long)downgradeLevelEnum;
- (id)uniqueSceneAfterEncoding;
- (id)uniqueScene;
- (_Bool)isPlaceHolderEmpty;
- (id)init;
- (void)commonInit;
- (_Bool)isLoopInfinity;
- (id)initWithData:(id)arg1 BizMap:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

