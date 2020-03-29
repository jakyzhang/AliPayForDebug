//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILBaseRpcResponse.h"

@class KBSHOPDETAILBlock, KBSHOPDETAILDetailPayInfo, KBSHOPDETAILMerchantShopInfo, NSArray, NSDictionary, NSString;

@interface KBSHOPDETAILMerchantDynamicResponse : KBSHOPDETAILBaseRpcResponse
{
    _Bool _signStatus;
    NSArray *_blockList;
    KBSHOPDETAILDetailPayInfo *_payInfo;
    KBSHOPDETAILMerchantShopInfo *_merchantShopInfo;
    NSString *_koubeiUserProtocol;
    KBSHOPDETAILBlock *_payInfoBlock;
    NSArray *_blockIdGroup;
    NSArray *_feedbackList;
}

+ (Class)dataElementClass;
+ (Class)feedbackListElementClass;
+ (Class)blockIdGroupElementClass;
+ (Class)blockListElementClass;
@property(retain, nonatomic) NSArray *feedbackList; // @synthesize feedbackList=_feedbackList;
@property(retain, nonatomic) NSArray *blockIdGroup; // @synthesize blockIdGroup=_blockIdGroup;
@property(retain, nonatomic) KBSHOPDETAILBlock *payInfoBlock; // @synthesize payInfoBlock=_payInfoBlock;
@property(nonatomic) _Bool signStatus; // @synthesize signStatus=_signStatus;
@property(retain, nonatomic) NSString *koubeiUserProtocol; // @synthesize koubeiUserProtocol=_koubeiUserProtocol;
@property(retain, nonatomic) KBSHOPDETAILMerchantShopInfo *merchantShopInfo; // @synthesize merchantShopInfo=_merchantShopInfo;
@property(retain, nonatomic) KBSHOPDETAILDetailPayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSDictionary *data;

@end
