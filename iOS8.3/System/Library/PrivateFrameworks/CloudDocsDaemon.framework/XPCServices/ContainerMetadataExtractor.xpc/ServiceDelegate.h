/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:04:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/XPCServices/ContainerMetadataExtractor.xpc/ContainerMetadataExtractor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContainerMetadataExtractor/NSXPCListenerDelegate.h>

@class NSString;

@interface ServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
