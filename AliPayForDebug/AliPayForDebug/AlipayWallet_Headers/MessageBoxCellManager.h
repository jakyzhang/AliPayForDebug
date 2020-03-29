//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MessageBoxHomeConfig, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MessageBoxCellManagerProtocol;

@interface MessageBoxCellManager : NSObject
{
    id <MessageBoxCellManagerProtocol> _delegate;
    NSArray *_dataArray;
    NSString *_sourceId;
    NSMutableSet *_historyCardIds;
    unsigned long long _appType;
    MessageBoxHomeConfig *_homeConfig;
    NSString *_msgPageName;
    NSMutableDictionary *_heightDict;
}

@property(retain, nonatomic) NSMutableDictionary *heightDict; // @synthesize heightDict=_heightDict;
@property(retain, nonatomic) NSString *msgPageName; // @synthesize msgPageName=_msgPageName;
@property(retain, nonatomic) MessageBoxHomeConfig *homeConfig; // @synthesize homeConfig=_homeConfig;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSMutableSet *historyCardIds; // @synthesize historyCardIds=_historyCardIds;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <MessageBoxCellManagerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)arg1 andTableView:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (Class)cellClassWithModel:(id)arg1;
- (id)init;

@end
