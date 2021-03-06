//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSString, VZMistTemplate;

@interface O2OLcReplyListModel : O2OMistModel
{
    _Bool _hasNext;
    VZMistTemplate *_mistTpl;
    NSString *_contentId;
    NSString *_lastId;
}

@property(copy, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) VZMistTemplate *mistTpl; // @synthesize mistTpl=_mistTpl;
- (void).cxx_destruct;
- (_Bool)deleteReplyWithReplyId:(id)arg1 rootReplyId:(id)arg2;
- (_Bool)addReply:(id)arg1;
- (_Bool)loadMoreSubreply:(id)arg1 rootReplyId:(id)arg2;
- (id)getRootReplySectionWithRootReplyId:(id)arg1;
- (id)getReplyWithReplyId:(id)arg1;
- (_Bool)raise1002Exception;
- (id)responseObjects:(id)arg1;
- (_Bool)parseResponse:(id)arg1;
- (id)operationType;
- (_Bool)hasMore;
- (void)reset;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;

@end

