//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSAUniversalItemDetailPayInfo, MOBILECSAUniversalItemDetailResponse, NSArray, NSDictionary, NSString, O2OPGoodsDetailShareInfo, O2OPGoodsDetailTemplateItem;

@interface O2OPGoodsDetailModel : O2OMistModel
{
    _Bool _hasImage;
    _Bool _showTaoBaoCart;
    _Bool _richContentExpanded;
    NSString *_itemId;
    NSString *_shopId;
    NSString *_orderNo;
    double _latitude;
    double _longitude;
    NSDictionary *_monitorDict;
    NSString *_fullGoodsName;
    NSArray *_detailItems;
    O2OPGoodsDetailTemplateItem *_payItem;
    MOBILECSAUniversalItemDetailResponse *_goodsDetail;
    NSArray *_CDPCodes;
    NSDictionary *_monitorInfo;
    NSDictionary *_extInfo;
    NSString *_srcSem;
    NSString *_groupOrderId;
    NSString *_taoBaoCartUrl;
    MOBILECSAUniversalItemDetailPayInfo *_payInfo;
    O2OPGoodsDetailShareInfo *_shareInfo;
}

@property(nonatomic) _Bool richContentExpanded; // @synthesize richContentExpanded=_richContentExpanded;
@property(retain, nonatomic) O2OPGoodsDetailShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) MOBILECSAUniversalItemDetailPayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(readonly, copy, nonatomic) NSString *taoBaoCartUrl; // @synthesize taoBaoCartUrl=_taoBaoCartUrl;
@property(readonly, nonatomic) _Bool showTaoBaoCart; // @synthesize showTaoBaoCart=_showTaoBaoCart;
@property(copy, nonatomic) NSString *groupOrderId; // @synthesize groupOrderId=_groupOrderId;
@property(copy, nonatomic) NSString *srcSem; // @synthesize srcSem=_srcSem;
@property(copy, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(readonly, copy, nonatomic) NSDictionary *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
@property(copy, nonatomic) NSArray *CDPCodes; // @synthesize CDPCodes=_CDPCodes;
@property(retain, nonatomic) MOBILECSAUniversalItemDetailResponse *goodsDetail; // @synthesize goodsDetail=_goodsDetail;
@property(readonly, nonatomic) O2OPGoodsDetailTemplateItem *payItem; // @synthesize payItem=_payItem;
@property(copy, nonatomic) NSArray *detailItems; // @synthesize detailItems=_detailItems;
@property(retain, nonatomic) NSString *fullGoodsName; // @synthesize fullGoodsName=_fullGoodsName;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSDictionary *monitorDict; // @synthesize monitorDict=_monitorDict;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)richContentItemsWithBlock:(id)arg1 customData:(id)arg2 tpl:(id)arg3;
- (void)toggleRichContentExpanded;
- (_Bool)refreshWithPreLoadData;
- (_Bool)shouldDowngrade;
- (void)removeInvalidCache;
- (id)validShopId;
@property(readonly, copy, nonatomic) NSDictionary *CDPParams;
- (void)removeCache;
@property(readonly, nonatomic) _Bool hasData;
- (id)richContentItemsWithBlock:(id)arg1 customData:(id)arg2;
- (id)otherShopRecommandItemsWithBlock:(id)arg1 customData:(id)arg2;
- (id)recommandItemsWithBlock:(id)arg1 customData:(id)arg2;
- (id)cdpItemWithBlock:(id)arg1;
- (id)detailItemWithBlock:(id)arg1 fromCache:(_Bool)arg2 customData:(id)arg3;
- (_Bool)raise1002Exception;
- (id)templateConfig;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (id)operationType;
- (id)responseObjects:(id)arg1;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)cacheKey;
- (struct requestConfig)requestConfig;
- (void)loadInternal;
- (void)reload;

@end

