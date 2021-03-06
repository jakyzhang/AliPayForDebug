//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHAssetsEditCollectionViewCellModel.h"

@class FHLogModel, FinaggexpbffAssetDataModelLatestAssetProfilesPB, NSDictionary, NSIndexPath, NSString;

@interface FHAssetsEditCollectionViewCellModelAsset : FHAssetsEditCollectionViewCellModel
{
    NSString *_categoryType;
    NSString *_appId;
    NSString *_assetType;
    NSString *_icon;
    NSString *_title;
    NSString *_defaultIconImage;
    NSString *_followAction;
    NSDictionary *_marksDict;
    FinaggexpbffAssetDataModelLatestAssetProfilesPB *_latestAssetProfile;
    FHLogModel *_logModel;
    NSIndexPath *_position;
}

+ (id)cellModelWithProfilesPB:(id)arg1 app:(id)arg2 marksDict:(id)arg3;
@property(retain, nonatomic) NSIndexPath *position; // @synthesize position=_position;
@property(retain, nonatomic) FHLogModel *logModel; // @synthesize logModel=_logModel;
@property(retain, nonatomic) FinaggexpbffAssetDataModelLatestAssetProfilesPB *latestAssetProfile; // @synthesize latestAssetProfile=_latestAssetProfile;
@property(retain, nonatomic) NSDictionary *marksDict; // @synthesize marksDict=_marksDict;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *defaultIconImage; // @synthesize defaultIconImage=_defaultIconImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

