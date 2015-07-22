/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol AFProviderServiceDelegate;
@interface ASConnection : NSObject {

	id<AFProviderServiceDelegate> _providerServiceDelegate;

}
-(BOOL)_infoIsValid:(id)arg1 forPreAnchor:(id)arg2 ;
-(long long)defaultChunkBatchSize;
-(BOOL)_getChunkInfoWithHandler:(id)arg1 batchSize:(long long)arg2 lastAnchor:(id)arg3 updates:(id)arg4 deletes:(id)arg5 post:(id*)arg6 ;
-(BOOL)_sendChunkWithUpdates:(id)arg1 deletes:(id)arg2 pre:(id)arg3 post:(id)arg4 validity:(id)arg5 ;
-(id)initWithProviderServiceDelegate:(id)arg1 ;
-(void)runSyncWithHandler:(id)arg1 anchor:(id)arg2 validity:(id)arg3 count:(long long)arg4 key:(id)arg5 ;
@end
