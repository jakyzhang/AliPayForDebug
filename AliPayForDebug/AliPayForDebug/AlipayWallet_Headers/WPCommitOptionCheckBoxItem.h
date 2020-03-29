//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUCheckBox, AULabel, NSString;

@interface WPCommitOptionCheckBoxItem : UIView
{
    NSString *_name;
    NSString *_value;
    AUCheckBox *_checkBox;
    AULabel *_nameLabel;
    CDUnknownBlockType _statusChangedBlock;
    long long _constrainedwidth;
}

+ (id)itemForName:(id)arg1 value:(id)arg2;
@property(nonatomic) long long constrainedwidth; // @synthesize constrainedwidth=_constrainedwidth;
@property(copy, nonatomic) CDUnknownBlockType statusChangedBlock; // @synthesize statusChangedBlock=_statusChangedBlock;
@property(retain, nonatomic) AULabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AUCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)setChecked:(_Bool)arg1;
- (void)layoutFrame;
- (void)layoutElement;
- (void)setStatusChangeCallback:(CDUnknownBlockType)arg1;
- (id)init;

@end
