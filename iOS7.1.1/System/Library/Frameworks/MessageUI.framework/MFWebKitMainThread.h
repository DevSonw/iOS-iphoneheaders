/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLock;

@interface MFWebKitMainThread : NSObject {

	CFDictionaryRef _visibleDict;
	MFLock* _visibleDictLock;

}
+(id)sharedInstance;
-(void)_mainThreadPopulateDictForMimeType:(id)arg1 ;
-(int)dictValueForMimeType:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

