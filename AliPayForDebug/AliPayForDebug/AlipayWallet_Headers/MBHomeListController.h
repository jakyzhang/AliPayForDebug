//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBListController.h"

@interface MBHomeListController : MBListController
{
    long long _lastReadTime;
}

@property(nonatomic) long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
- (void)dealloc;
- (void)messageNeedUpdate:(id)arg1;
- (void)addNotification;
- (void)rowActionHiddenSum:(id)arg1 cellModel:(id)arg2 userInfo:(id)arg3;
- (void)moreItemClicked:(id)arg1 menuInfo:(id)arg2 model:(id)arg3;
- (void)rowActionMore:(id)arg1 cellModel:(id)arg2 userInfo:(id)arg3;
- (void)rowActionDelete:(id)arg1 cellModel:(id)arg2 userInfo:(id)arg3;
- (id)emptyView:(struct CGSize)arg1;
- (_Bool)hiddenSum:(id)arg1;
- (id)gemMsgRecordModel:(id)arg1;
- (id)genHistorySeparatorModel:(_Bool)arg1 addBottomLine:(_Bool)arg2;
- (id)insertHistorySectionIfNeed:(id)arg1 time:(long long)arg2 canAddFront:(_Bool)arg3;
- (id)convertToUIData:(id)arg1 pagingFlag:(id)arg2 firstPage:(_Bool)arg3;
- (id)getOnePageOriginData:(id)arg1;
- (void)markAllMessageRead;
- (void)lastReadTimeInit;
- (id)initWitIndentify:(id)arg1 sourceId:(id)arg2 viewController:(id)arg3;

@end

