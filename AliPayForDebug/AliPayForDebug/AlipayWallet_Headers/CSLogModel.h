//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexPath, NSString;
@protocol CSCard;

@interface CSLogModel : NSObject
{
    NSString *_spm;
    NSString *_scm;
    NSDictionary *_extraParams4;
    NSIndexPath *_indexPath;
    id <CSCard> _card;
    NSString *_tplType;
}

@property(copy, nonatomic) NSString *tplType; // @synthesize tplType=_tplType;
@property(retain, nonatomic) id <CSCard> card; // @synthesize card=_card;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSDictionary *extraParams4; // @synthesize extraParams4=_extraParams4;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
- (void).cxx_destruct;

@end

