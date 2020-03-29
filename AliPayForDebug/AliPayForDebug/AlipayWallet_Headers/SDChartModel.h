//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SDAxisModel, SDGridModel, SDTextModel;

@interface SDChartModel : NSObject
{
    SDTextModel *_title;
    NSMutableArray *_pillars;
    NSMutableArray *_lines;
    SDAxisModel *_xAxis;
    SDAxisModel *_yAxis;
    SDGridModel *_grid;
}

@property(retain, nonatomic) SDGridModel *grid; // @synthesize grid=_grid;
@property(retain, nonatomic) SDAxisModel *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) SDAxisModel *xAxis; // @synthesize xAxis=_xAxis;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *pillars; // @synthesize pillars=_pillars;
@property(retain, nonatomic) SDTextModel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end
