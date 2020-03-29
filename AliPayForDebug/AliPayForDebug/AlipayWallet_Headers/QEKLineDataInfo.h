//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface QEKLineDataInfo : NSObject
{
    int _indicatorType;
    int _requestType;
    int _update;
    int _lineType;
    NSArray *_klines;
    NSArray *_indicators;
    NSDictionary *_klinescolumns;
    NSDictionary *_indicatorcolumns;
}

@property(retain, nonatomic) NSDictionary *indicatorcolumns; // @synthesize indicatorcolumns=_indicatorcolumns;
@property(retain, nonatomic) NSDictionary *klinescolumns; // @synthesize klinescolumns=_klinescolumns;
@property(retain, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
@property(retain, nonatomic) NSArray *klines; // @synthesize klines=_klines;
@property(nonatomic) int lineType; // @synthesize lineType=_lineType;
@property(nonatomic) int update; // @synthesize update=_update;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) int indicatorType; // @synthesize indicatorType=_indicatorType;
- (void).cxx_destruct;

@end
