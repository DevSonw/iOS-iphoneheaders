/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AADelegateResponseStore : NSObject
+(void)saveiCloudResponseParameters:(id)arg1 ;
+(void)restoreFinished;
+(void)saveiCloudToken:(id)arg1 faceTimeToken:(id)arg2 madridToken:(id)arg3 gameCenterToken:(id)arg4 ;
+(id)responseAndTokenRuntimeStore;
+(void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 itemDescription:(id)arg4 ;
@end
