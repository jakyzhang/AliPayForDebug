//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMapKitAnnotation.h"

@class NSString;

@interface APFoursquareAnnotation : APMapKitAnnotation
{
    double _flatitude;
    double _flongitude;
    NSString *_fName;
    NSString *_fAddress;
}

@property(retain, nonatomic) NSString *fAddress; // @synthesize fAddress=_fAddress;
@property(retain, nonatomic) NSString *fName; // @synthesize fName=_fName;
@property(nonatomic) double flongitude; // @synthesize flongitude=_flongitude;
@property(nonatomic) double flatitude; // @synthesize flatitude=_flatitude;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D)coordinate;
- (id)subtitle;
- (id)title;
- (id)initWithDictionary:(id)arg1;

@end

