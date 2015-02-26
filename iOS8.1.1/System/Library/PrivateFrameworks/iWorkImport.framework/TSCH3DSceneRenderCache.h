/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableSet, TSCH3DDictionaryOfDictionary;

@interface TSCH3DSceneRenderCache : NSObject {

	NSMutableSet* mEnabledKeys;
	TSCH3DDictionaryOfDictionary* mCache;

}
+(id)cacheFromScene:(id)arg1 ;
+(id)cache;
-(void)enableCache:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)cacheEnabledForKey:(id)arg1 ;
-(id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(BOOL*)arg3 ifAbsent:(/*^block*/id)arg4 ;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
