//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSString, O2ODeleteCommentModel, O2OFollowUserModel, O2OLikeCommentModel, O2OMerchantAttentionShopModel;

@interface O2OCommentAskTemplateController : O2OTemplateController <UIAlertViewDelegate>
{
    _Bool _likeAnimating;
    O2OLikeCommentModel *_likeModel;
    O2ODeleteCommentModel *_deleteCommentModel;
    O2OMerchantAttentionShopModel *_followShopModel;
    O2OFollowUserModel *_followUserModel;
    NSDictionary *_likeComemntInfo;
    NSString *_commentListKey;
}

@property(copy, nonatomic) NSString *commentListKey; // @synthesize commentListKey=_commentListKey;
@property(retain, nonatomic) NSDictionary *likeComemntInfo; // @synthesize likeComemntInfo=_likeComemntInfo;
@property(retain, nonatomic) O2OFollowUserModel *followUserModel; // @synthesize followUserModel=_followUserModel;
@property(retain, nonatomic) O2OMerchantAttentionShopModel *followShopModel; // @synthesize followShopModel=_followShopModel;
@property(retain, nonatomic) O2ODeleteCommentModel *deleteCommentModel; // @synthesize deleteCommentModel=_deleteCommentModel;
@property(nonatomic) _Bool likeAnimating; // @synthesize likeAnimating=_likeAnimating;
@property(retain, nonatomic) O2OLikeCommentModel *likeModel; // @synthesize likeModel=_likeModel;
- (void).cxx_destruct;
- (void)browserPic:(id)arg1 view:(id)arg2;
- (void)didTapUserFollow:(id)arg1 sender:(id)arg2;
- (void)didTapShopFollow:(id)arg1 sender:(id)arg2;
- (void)setItemDataForLikeWithComment:(id)arg1 needLikeAnimate:(_Bool)arg2 item:(id)arg3;
- (void)likeComment;
- (void)likeComment:(id)arg1;
- (void)startAddCommentAnimate:(id)arg1 sender:(id)arg2;
- (void)replyComment:(id)arg1;
- (void)loadMoreSubReply:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
