//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

@interface SFShareRangeSelection : NSObject
{
    NSIndexPath *_indexPath;
    NSArray *_cellsSelectedOrNot;
}

@property(retain, nonatomic) NSArray *cellsSelectedOrNot; // @synthesize cellsSelectedOrNot=_cellsSelectedOrNot;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (_Bool)isEqualToSelection:(id)arg1;

@end

