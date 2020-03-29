//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class AFWPortfolioRecommendInfoModel, NSArray, NSString;

@interface AFWPortfolioRecommendModel : FMLBaseModel
{
    _Bool _success;
    int _nextPage;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSArray *_recommendList;
    AFWPortfolioRecommendInfoModel *_recommendInfo;
}

+ (id)modelWithfinscbffPortfolioRecommendResultPB:(id)arg1;
@property(readonly, nonatomic) AFWPortfolioRecommendInfoModel *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(readonly, nonatomic) int nextPage; // @synthesize nextPage=_nextPage;
@property(readonly, nonatomic) NSArray *recommendList; // @synthesize recommendList=_recommendList;
@property(readonly, copy, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(readonly, copy, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(readonly, copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithfinscbffPortfolioRecommendResultPB:(id)arg1;

@end
