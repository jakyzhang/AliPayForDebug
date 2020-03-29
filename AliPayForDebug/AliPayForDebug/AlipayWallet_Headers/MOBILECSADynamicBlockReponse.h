//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSArray, NSDictionary, NSString;

@interface MOBILECSADynamicBlockReponse : MOBILECSABaseRpcResponse
{
    NSString *_venueJumpUrl;
    NSString *_topParams;
    NSArray *_personalList;
    NSArray *_blocks;
    NSDictionary *_blockTemplates;
    NSString *_channelIds;
}

+ (Class)blockTemplatesElementClass;
+ (Class)blocksElementClass;
+ (Class)personalListElementClass;
@property(retain, nonatomic) NSString *channelIds; // @synthesize channelIds=_channelIds;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSArray *personalList; // @synthesize personalList=_personalList;
@property(retain, nonatomic) NSString *topParams; // @synthesize topParams=_topParams;
@property(retain, nonatomic) NSString *venueJumpUrl; // @synthesize venueJumpUrl=_venueJumpUrl;
- (void).cxx_destruct;

@end
