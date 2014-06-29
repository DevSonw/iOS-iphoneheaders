/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RTFCPZArchiveInputStream;
#import <QuickLook/QuickLook-Structs.h>
@class NSMutableDictionary, NSString;

@interface RTFCPZArchive : NSObject {

	NSMutableDictionary* mEntries;
	<RTFCPZArchiveInputStream>* mInput;
	NSString* mRootName;

}
-(RTFCPZEndOfCentralDirectory)readEndOfCentralDirectory;
-(const char*)searchForEndOfCentralDirectory;
-(void)readEntries;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)rootName;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)entryWithName:(id)arg1 ;
@end
