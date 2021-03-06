//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSCardTemplate.h"

#import "FBDocumentDelegate-Protocol.h"

@class FBDocument, NSDictionary, NSString, WKEasyViewBuilder, WKTemplateModel;

@interface LSBirdNestCardTemplate : LSCardTemplate <FBDocumentDelegate>
{
    WKEasyViewBuilder *_viewBuilder;
    NSString *_templateId;
    NSString *_time;
    NSString *_debugUrl;
    NSString *_debugContent;
    NSString *_debugDigest;
    FBDocument *_doc;
    NSString *_templateUrl;
    NSString *_templateDigest;
    WKTemplateModel *_remoteModel;
    NSDictionary *_exposureDict;
}

+ (_Bool)reuseable;
@property(copy, nonatomic) NSDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) WKTemplateModel *remoteModel; // @synthesize remoteModel=_remoteModel;
@property(retain, nonatomic) NSString *templateDigest; // @synthesize templateDigest=_templateDigest;
@property(retain, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (_Bool)checkDebug;
- (_Bool)shouldUseDebug;
- (void)checkTemplateState;
- (_Bool)birdnestTemplateShouldUpdate:(id)arg1;
- (id)exporsureViewsForComponent:(id)arg1;
- (void)refreshTemplate;
- (id)getComponentWithContainer:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize)componentSizeWithContainer:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)componentCountForCardModel:(id)arg1;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

