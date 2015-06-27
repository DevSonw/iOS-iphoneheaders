/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:33:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsDaemon/ACDAuthenticationDialogManagerProtocol.h>

@class NSXPCListener, ACDQueueDictionary, NSString;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {

	NSXPCListener* _authenticationDialogListener;
	ACDQueueDictionary* _dialogRequestQueues;
	NSString* _activeAccountID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)contextForAuthenticationDialog:(/*^block*/id)arg1 ;
-(void)authenticationDialogDidFinishWithSuccess:(char)arg1 response:(id)arg2 ;
-(void)authenticationDialogCrashed;
-(void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(char)arg3 completion:(/*^block*/id)arg4 ;
@end
