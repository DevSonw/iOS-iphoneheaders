/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(bool)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(bool)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;
@end
