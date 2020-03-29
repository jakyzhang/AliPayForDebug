//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BeeRtcRoomDelegate-Protocol.h"

@class BeeRtcRoomPluginManager, NSArray, NSDictionary, NSString, UIImageView;
@protocol BeeRenderLayoutProtocol, BeeRtcRoomDelegate, IBeeRtcRoomProtocol;

@interface BeeRtcRoomView : UIView <BeeRtcRoomDelegate>
{
    _Bool _enableCamera;
    _Bool _muted;
    _Bool _beauty;
    _Bool _autoPublish;
    _Bool _isRecord;
    _Bool _isAliPay;
    _Bool _adaptiveSmallScreen;
    _Bool _userClickedPreView;
    NSString *_roomId;
    NSString *_token;
    NSString *_signature;
    NSString *_appId;
    NSString *_businessId;
    NSString *_userID;
    long long _renderType;
    long long _memberType;
    unsigned long long _maxPlayerCount;
    UIImageView *_thumbnailView;
    long long _beautyLevel;
    NSDictionary *_extraInfo;
    id <BeeRtcRoomDelegate> _delegate;
    long long _feedRatio;
    long long _feedFPS;
    long long _audioPlayMode;
    NSString *_minBitrate;
    NSString *_maxBitrate;
    long long _roomState;
    id <IBeeRtcRoomProtocol> _beeRtcRoom;
    UIView<BeeRenderLayoutProtocol> *_renderview;
    NSArray *_renderViews;
    BeeRtcRoomPluginManager *_pluginManager;
    long long _mainViewIndex;
}

+ (_Bool)Bee_hookOrigMenthod:(SEL)arg1 NewMethod:(SEL)arg2;
+ (void)initialize;
@property(nonatomic) _Bool userClickedPreView; // @synthesize userClickedPreView=_userClickedPreView;
@property(nonatomic) long long mainViewIndex; // @synthesize mainViewIndex=_mainViewIndex;
@property(retain, nonatomic) BeeRtcRoomPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) NSArray *renderViews; // @synthesize renderViews=_renderViews;
@property(retain, nonatomic) UIView<BeeRenderLayoutProtocol> *renderview; // @synthesize renderview=_renderview;
@property(retain, nonatomic) id <IBeeRtcRoomProtocol> beeRtcRoom; // @synthesize beeRtcRoom=_beeRtcRoom;
@property(nonatomic) _Bool adaptiveSmallScreen; // @synthesize adaptiveSmallScreen=_adaptiveSmallScreen;
@property(nonatomic) long long roomState; // @synthesize roomState=_roomState;
@property(nonatomic) _Bool isAliPay; // @synthesize isAliPay=_isAliPay;
@property(copy, nonatomic) NSString *maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(copy, nonatomic) NSString *minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) _Bool isRecord; // @synthesize isRecord=_isRecord;
@property(nonatomic) long long audioPlayMode; // @synthesize audioPlayMode=_audioPlayMode;
@property(nonatomic) long long feedFPS; // @synthesize feedFPS=_feedFPS;
@property(nonatomic) long long feedRatio; // @synthesize feedRatio=_feedRatio;
@property(nonatomic) __weak id <BeeRtcRoomDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool autoPublish; // @synthesize autoPublish=_autoPublish;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool beauty; // @synthesize beauty=_beauty;
@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) unsigned long long maxPlayerCount; // @synthesize maxPlayerCount=_maxPlayerCount;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool enableCamera; // @synthesize enableCamera=_enableCamera;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)BeeRtcRoomReply:(id)arg1 replyType:(long long)arg2;
- (void)BeeRtcRoomReceiveMessage:(id)arg1;
- (void)BeeRtcRoomNetWorkQuality:(long long)arg1 bandwidth:(double)arg2 isLocal:(_Bool)arg3;
- (void)BeeRtcRoomStatistic:(id)arg1 userId:(id)arg2;
- (void)BeeRtcRoomDebugInfo:(id)arg1 userId:(id)arg2;
- (void)BeeRtcRoomReceiveRecordId:(id)arg1;
- (void)BeeRtcRoomPlayViewChage:(id)arg1 feedType:(long long)arg2;
- (void)BeeRtcRoomNetworkChange:(long long)arg1;
- (void)BeeRtcRoomErrorState:(long long)arg1 error:(id)arg2;
- (void)BeeRtcRoomDidStopPlay;
- (void)BeeRtcRoomDidReadyPlay;
- (void)BeeRtcRoomDidChangeParticipant:(id)arg1 type:(long long)arg2;
- (void)BeeRtcRoomDidChangeParticipant:(id)arg1;
- (void)BeeRtcRoomJoinRoom:(_Bool)arg1 error:(id)arg2;
- (void)BeeRtcRoomCreateRoom:(id)arg1 error:(id)arg2;
- (void)BeeRtcRoomConnectionStatueChange:(long long)arg1 isLocal:(_Bool)arg2 userId:(id)arg3;
- (void)BeeRtcRoomAudioPlayModeChange:(long long)arg1;
- (void)reply:(id)arg1 roomId:(id)arg2 answer:(_Bool)arg3 params:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)inviteWeb:(id)arg1 userId:(id)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invitePush:(id)arg1 userId:(id)arg2 scheme:(id)arg3 extra:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)snapshotForLocalFeedBlock:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 userIds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAudioMode:(long long)arg1;
- (void)mutedAllFeed:(_Bool)arg1;
- (void)cameraEnable:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)leaveRoom;
- (void)switchCamera;
- (void)startConnect;
- (void)mutedFeed:(_Bool)arg1 feedId:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)deInit;
- (void)setUpUI;
- (void)setDefaultValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showDebugView:(_Bool)arg1;
- (void)showView:(_Bool)arg1 byTag:(long long)arg2;
- (void)removePluginItems:(id)arg1;
- (void)addPluginItems:(id)arg1;
- (id)defaultPlugins;
- (void)plugin_setUpUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
