//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKFalconEventListener-Protocol.h"
#import "CSNativeEventListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CSMonitor, CSTableViewModel, CSWorkers, CardSDK, CardSDKTemplateCenter, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString, UITableView;
@protocol CSCustomCellMaintainer, CSEventLogFormatDelegate, CardSDKExplorseDelegate, UIScrollViewDelegate;

@interface CSTableViewDelegate : NSObject <CKFalconEventListener, CSNativeEventListener, UITableViewDelegate, UITableViewDataSource>
{
    double _loadDataStart;
    double _loadDataEnd;
    CSTableViewModel *_viewModel;
    CSWorkers *_exposureWorker;
    _Bool _isPlaceholderShowing;
    UITableView *_tableView;
    NSString *_engineType;
    NSHashTable *_eventListenerMap;
    CSMonitor *_monitor;
    double _dividingHeight;
    Class _tablePlaceholderCls;
    id <CSCustomCellMaintainer> _cellMaintainer;
    Class _globalCardContainerCls;
    NSMutableDictionary *_cardContainerMap;
    NSDictionary *_customLayoutMap;
    NSArray *_nativeWhiteList;
    id <UIScrollViewDelegate> _scrollDelegate;
    id <CardSDKExplorseDelegate> _explorseDelegate;
    id <CSEventLogFormatDelegate> _eventLogFormatDelegate;
}

@property(nonatomic) __weak id <CSEventLogFormatDelegate> eventLogFormatDelegate; // @synthesize eventLogFormatDelegate=_eventLogFormatDelegate;
@property(nonatomic) __weak id <CardSDKExplorseDelegate> explorseDelegate; // @synthesize explorseDelegate=_explorseDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) NSArray *nativeWhiteList; // @synthesize nativeWhiteList=_nativeWhiteList;
@property(copy, nonatomic) NSDictionary *customLayoutMap; // @synthesize customLayoutMap=_customLayoutMap;
@property(retain, nonatomic) NSMutableDictionary *cardContainerMap; // @synthesize cardContainerMap=_cardContainerMap;
@property(retain, nonatomic) Class globalCardContainerCls; // @synthesize globalCardContainerCls=_globalCardContainerCls;
@property(retain, nonatomic) id <CSCustomCellMaintainer> cellMaintainer; // @synthesize cellMaintainer=_cellMaintainer;
@property(retain, nonatomic) Class tablePlaceholderCls; // @synthesize tablePlaceholderCls=_tablePlaceholderCls;
@property(nonatomic) double dividingHeight; // @synthesize dividingHeight=_dividingHeight;
@property(retain, nonatomic) CSMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSHashTable *eventListenerMap; // @synthesize eventListenerMap=_eventListenerMap;
@property(retain, nonatomic) NSString *engineType; // @synthesize engineType=_engineType;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataEnd:(CDUnknownBlockType)arg1 response:(id)arg2;
- (void)loadData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)buildTableView:(struct CGRect)arg1;
- (void)setRenderEngine:(id)arg1;
- (void)_startMonitor;
- (id)init;
- (void)dealloc;
- (void)setMonitorContext:(id)arg1;
- (void)fetchExposureInfoForCell:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchExposureInfoForVisibleCells:(CDUnknownBlockType)arg1;
- (id)getEventLogFormatDelegate;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_fireEvent:(id)arg1;
- (void)interceptNativeCardComponentsEvent:(id)arg1 onView:(id)arg2;
- (void)onEvent:(id)arg1 instance:(id)arg2;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)removeTablePlaceholder;
- (void)showTablePlaceholder:(Class)arg1;
- (void)setDividinglineHeight:(double)arg1;
- (Class)containerClsForCard:(id)arg1;
- (void)setCardContainer:(Class)arg1 forCard:(id)arg2;
- (void)setCardContainerForWholeList:(Class)arg1;
- (void)setCustomCellMaintainer:(id)arg1;
- (void)setNativeCardsMap:(id)arg1;
- (void)setWhiteListForcedRenderWithNativeCard:(id)arg1;
- (id)getExplorseDelegate;
- (id)getScrollDelegate;
@property(retain, nonatomic) CardSDKTemplateCenter *templateCenter;
@property(retain, nonatomic) CSWorkers *taskWorker;
@property(retain, nonatomic) CardSDK *cardsdk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
