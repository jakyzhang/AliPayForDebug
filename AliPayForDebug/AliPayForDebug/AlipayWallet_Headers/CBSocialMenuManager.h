//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBSocialMenuManager : NSObject
{
}

- (_Bool)handlePopMenusRespond:(id)arg1 extDic:(id)arg2;
- (void)collectMenu:(id)arg1;
- (void)deleteCommentMenu:(id)arg1;
- (void)reportMenu:(id)arg1;
- (void)copyLinkMenu:(id)arg1;
- (void)copyCommentMenu:(id)arg1;
- (void)copyMenu:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)menuControllerWillHide:(id)arg1;
- (void)menuControllerWillShow:(id)arg1;
- (void)releaseMenuNotification;
- (void)registerMenuNotification;
- (_Bool)canBecomeFirstResponder;
- (void)socialShowPopMenus:(int)arg1 target:(id)arg2 rectView:(id)arg3 fromView:(id)arg4 extDicData:(id)arg5;
- (id)cc_requireCustomItems:(id)arg1;
- (void)handldeMenuRespond:(id)arg1;
- (void)fakeDeleteCommentMenu:(id)arg1;
- (void)fakeCollectMenu:(id)arg1;
- (void)fakeReportMenu:(id)arg1;
- (void)fakeCopyCommentMenu:(id)arg1;
- (void)fakeCopyLinkMenu:(id)arg1;
- (void)fakeCopyMenu:(id)arg1;
- (id)selectClickMenuItem:(id)arg1 selectType:(int)arg2;

@end
