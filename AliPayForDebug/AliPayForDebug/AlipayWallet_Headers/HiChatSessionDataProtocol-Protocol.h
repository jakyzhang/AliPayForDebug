//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APChatMessage, APChatSendingMessage, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage;

@protocol HiChatSessionDataProtocol <NSObject>
@property(retain, nonatomic) APChatMessage *firstRecord;
- (void)configShopInfoWithShopId:(NSString *)arg1 name:(NSString *)arg2 icon:(NSString *)arg3;
- (void)fetchSessionInfoWithSessionId:(void (^)(HiChatSession *))arg1;
- (void)resetAll;
- (NSMutableDictionary *)cancelDownloadVideos;
- (void)cancelSendMessage:(NSDictionary *)arg1 callback:(void (^)(_Bool, APChatMessage *, int, NSString *, mobilechatBaseRpcResult *))arg2;
- (void)cancelSendMessagesWithClientMsgIds:(NSArray *)arg1;
- (void)updateVoiceRecentWithClientMsgId:(NSString *)arg1;
- (void)retrySendMessage:(NSString *)arg1 needUpdateLocalId:(_Bool)arg2 callback:(void (^)(_Bool, APChatSendingMessage *))arg3;
- (void)sendCopyMessage:(NSDictionary *)arg1 toUser:(NSString *)arg2 toType:(NSString *)arg3 callback:(void (^)(_Bool, APChatSendingMessage *))arg4;
- (void)sendShareMessage:(APChatSendingMessage *)arg1 callback:(void (^)(_Bool, APChatSendingMessage *))arg2;
- (NSString *)sendMockVoiceUpload:(NSString *)arg1 templateId:(NSString *)arg2;
- (NSString *)sendMockVoiceUpload:(NSString *)arg1;
- (void)sendAssetVideos:(NSArray *)arg1 sessionParams:(NSDictionary *)arg2 callback:(void (^)(_Bool, APChatSendingMessage *))arg3;
- (void)sendBaseMessage:(APChatSendingMessage *)arg1 withImage:(UIImage *)arg2 callback:(void (^)(_Bool, APChatSendingMessage *))arg3;
- (void)sendAssetImages:(NSArray *)arg1 theOiginal:(_Bool)arg2 sessionParams:(NSDictionary *)arg3 callback:(void (^)(_Bool, APChatSendingMessage *))arg4;
- (void)sendPhotoImage:(UIImage *)arg1 sessionParams:(NSDictionary *)arg2 callback:(void (^)(_Bool, APChatSendingMessage *))arg3;
- (void)sendData:(NSDictionary *)arg1 callback:(void (^)(_Bool, APChatSendingMessage *))arg2;
- (void)adapterData:(NSArray *)arg1 callback:(void (^)(NSArray *))arg2;
- (void)deleteChatMessageWithClientMessageIds:(NSArray *)arg1 extParams:(NSDictionary *)arg2 callback:(void (^)(_Bool))arg3;
- (void)deleteChatMessageWithClientMessageIds:(NSArray *)arg1 callback:(void (^)(_Bool))arg2;
- (void)loadSelectedBeforeLocalMessagesWithLimit:(long long)arg1 async:(_Bool)arg2 compelet:(void (^)(NSArray *, _Bool, NSString *))arg3;
- (void)loadAfterLocalMessagesWithLocalId:(NSNumber *)arg1 limit:(long long)arg2 minLimit:(long long)arg3 async:(_Bool)arg4 compelet:(void (^)(NSArray *, _Bool, NSString *, long long))arg5;
- (void)loadAfterLocalMessagesWithDataMap:(NSDictionary *)arg1 limit:(long long)arg2 compelet:(void (^)(NSArray *, _Bool, NSString *))arg3;
- (void)loadBeforeLocalMessagesWithLimit:(long long)arg1 async:(_Bool)arg2 compelet:(void (^)(NSArray *, _Bool, NSString *, APChatMessage *))arg3;
- (void)markChatAsRead;
- (void)resetLastRecordPointInfo;
- (id)initWithSessionID:(NSString *)arg1 sessionType:(NSString *)arg2;
@end
