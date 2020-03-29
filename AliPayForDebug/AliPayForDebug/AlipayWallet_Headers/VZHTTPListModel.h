//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZHTTPModel.h"

#import "VZListModel-Protocol.h"

@class NSMutableArray, NSString;

@interface VZHTTPListModel : VZHTTPModel <VZListModel>
{
    _Bool _hasMore;
    _Bool _needLoadAll;
    _Bool _willLoadMore;
    long long _sectionNumber;
    unsigned long long _pageMode;
    long long _currentPageIndex;
    long long _totalCount;
    long long _pageSize;
    NSMutableArray *_objects;
}

@property(nonatomic) _Bool willLoadMore; // @synthesize willLoadMore=_willLoadMore;
@property(nonatomic) _Bool needLoadAll; // @synthesize needLoadAll=_needLoadAll;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) unsigned long long pageMode; // @synthesize pageMode=_pageMode;
@property(nonatomic) long long sectionNumber; // @synthesize sectionNumber=_sectionNumber;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (_Bool)canLoadMore;
- (id)responseObjects:(id)arg1;
- (_Bool)parseResponse:(id)arg1;
- (void)reset;
- (void)loadAllWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadAll;
- (void)load;
- (_Bool)loadMore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
