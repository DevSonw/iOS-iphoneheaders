/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isConcurrent;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)acceptsGzipEncoding;
@end
