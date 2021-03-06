//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSocialFriendExpressSubModuleProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol APSocialFriendVMExpressDelegate;

@interface APSocialFriendExpressGTDSubModule : NSObject <APSocialFriendExpressSubModuleProtocol>
{
    _Bool _isExpand;
    _Bool _didReportGTDEntrance;
    _Bool _didReportGTDWholeExposure;
    _Bool _footerExpandExposed;
    _Bool _footerPackupExposed;
    id <APSocialFriendVMExpressDelegate> _delegate;
    NSMutableArray *_gtdListArr;
    NSMutableArray *_displayGTDItems;
    NSMutableDictionary *_gtdListDict;
    NSMutableDictionary *_gtdFoldingImageKeyedByIconURL;
    NSString *_lastGTDUserId;
    NSMutableSet *_exposureObjectIdSet;
}

@property(nonatomic) _Bool footerPackupExposed; // @synthesize footerPackupExposed=_footerPackupExposed;
@property(nonatomic) _Bool footerExpandExposed; // @synthesize footerExpandExposed=_footerExpandExposed;
@property(nonatomic) _Bool didReportGTDWholeExposure; // @synthesize didReportGTDWholeExposure=_didReportGTDWholeExposure;
@property(nonatomic) _Bool didReportGTDEntrance; // @synthesize didReportGTDEntrance=_didReportGTDEntrance;
@property(retain, nonatomic) NSMutableSet *exposureObjectIdSet; // @synthesize exposureObjectIdSet=_exposureObjectIdSet;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) NSString *lastGTDUserId; // @synthesize lastGTDUserId=_lastGTDUserId;
@property(retain, nonatomic) NSMutableDictionary *gtdFoldingImageKeyedByIconURL; // @synthesize gtdFoldingImageKeyedByIconURL=_gtdFoldingImageKeyedByIconURL;
@property(retain, nonatomic) NSMutableDictionary *gtdListDict; // @synthesize gtdListDict=_gtdListDict;
@property(retain, nonatomic) NSMutableArray *displayGTDItems; // @synthesize displayGTDItems=_displayGTDItems;
@property(retain, nonatomic) NSMutableArray *gtdListArr; // @synthesize gtdListArr=_gtdListArr;
@property(nonatomic) __weak id <APSocialFriendVMExpressDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)getMenuBtnFont;
- (void)handleClickGTDCellWithJumpUrl:(id)arg1 logParams:(id)arg2;
- (void)removeItemFromDataSource:(id)arg1;
- (void)dealGTDItem:(id)arg1 dealType:(long long)arg2;
- (void)registerReloadGTDNotification;
- (void)makeGTDDisplayItemsIsNeedExpand:(_Bool)arg1;
- (void)cleanGTDItems;
- (void)checkGTDlist:(_Bool)arg1;
- (void)gtdUpdated:(id)arg1;
- (void)recentDidLoad:(id)arg1;
- (void)itemExposure:(id)arg1;
- (void)didSelectItem:(id)arg1 action:(id)arg2;
- (void)didSelectSlideMenu:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (id)slideMenuForItem:(id)arg1;
- (_Bool)canHandleItem:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterforeground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)moduleData;
- (_Bool)shouldShow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

