//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXMLParser;
@protocol RVZebraParserDelegate;

@interface RVZebraParser : NSObject <NSXMLParserDelegate>
{
    id <RVZebraParserDelegate> _delegate;
    NSXMLParser *_parser;
    NSMutableArray *_tempArray;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
@property(retain, nonatomic) NSXMLParser *parser; // @synthesize parser=_parser;
@property(nonatomic) __weak id <RVZebraParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callbackWithData:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parse;
- (void)parseWithData:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
