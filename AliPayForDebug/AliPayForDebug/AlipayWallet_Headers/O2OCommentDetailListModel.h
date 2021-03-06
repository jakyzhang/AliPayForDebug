//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, O2OMistListItem, VZMistTemplate;

@interface O2OCommentDetailListModel : O2OMistModel
{
    _Bool _hasNext;
    _Bool _isFullRefresh;
    _Bool _showReportEntry;
    _Bool _willLoadingMore;
    NSString *_commentId;
    NSString *_commentUserId;
    O2OMistListItem *_basicInfoItem;
    NSMutableDictionary *_subreplyHasMap;
    NSString *_reportEntryUrl;
    NSString *_lastId;
    NSMutableArray *_specialReplyList;
    VZMistTemplate *_replyTemplate;
    long long _allReplyCount;
    NSDictionary *_shopInfo;
}

@property(retain, nonatomic) NSDictionary *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(nonatomic) long long allReplyCount; // @synthesize allReplyCount=_allReplyCount;
@property(retain, nonatomic) VZMistTemplate *replyTemplate; // @synthesize replyTemplate=_replyTemplate;
@property(retain, nonatomic) NSMutableArray *specialReplyList; // @synthesize specialReplyList=_specialReplyList;
@property(copy, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(nonatomic) _Bool willLoadingMore; // @synthesize willLoadingMore=_willLoadingMore;
@property(copy, nonatomic) NSString *reportEntryUrl; // @synthesize reportEntryUrl=_reportEntryUrl;
@property(nonatomic) _Bool showReportEntry; // @synthesize showReportEntry=_showReportEntry;
@property(nonatomic) _Bool isFullRefresh; // @synthesize isFullRefresh=_isFullRefresh;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSMutableDictionary *subreplyHasMap; // @synthesize subreplyHasMap=_subreplyHasMap;
@property(retain, nonatomic) O2OMistListItem *basicInfoItem; // @synthesize basicInfoItem=_basicInfoItem;
@property(retain, nonatomic) NSString *commentUserId; // @synthesize commentUserId=_commentUserId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (id)handleBasicInfoBlock:(id)arg1 response:(id)arg2 templateDownloadResult:(id)arg3;
- (_Bool)hasMore;
- (id)handleDynamicListBlock:(id)arg1 response:(id)arg2 templateDownloadResult:(id)arg3;
- (long long)pageSize;
- (_Bool)deleteReplyWithReplyId:(id)arg1 rootReplyId:(id)arg2;
- (_Bool)addReply:(id)arg1 rootReplyId:(id)arg2;
- (_Bool)loadMoreSubreply:(id)arg1 rootReplyId:(id)arg2;
- (unsigned long long)getSubreplyCountWithReplyId:(id)arg1;
- (id)operationType;
- (id)responseObjects:(id)arg1;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)templatesFromResponse:(id)arg1;
- (id)templateConfig;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (_Bool)raise1002Exception;

@end

