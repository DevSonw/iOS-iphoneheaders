/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOURLManifestListenerCallback : NSObject {

	/*^block*/id _handler;
	CFRunLoopRef _runLoop;

}
-(void)dealloc;
-(void)performHandler:(char)arg1 ;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 handler:(/*^block*/id)arg2 ;
@end
