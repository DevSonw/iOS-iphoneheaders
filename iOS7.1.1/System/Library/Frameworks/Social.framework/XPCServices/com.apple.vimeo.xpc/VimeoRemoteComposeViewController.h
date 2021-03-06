/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:34:24 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <Social/SLSheetViewHostProtocol.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@interface VimeoRemoteComposeViewController : _UIRemoteViewController <SLSheetViewHostProtocol, XPCProxyTarget>
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)userDidCancel;
-(void)userDidPost;
-(void)sheetFailedWithError:(id)arg1 ;
-(void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2 ;
-(void)shouldShowNetworkActivityIndicator:(id)arg1 ;
@end

