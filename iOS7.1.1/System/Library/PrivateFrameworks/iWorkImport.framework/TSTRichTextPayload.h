/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* mStorage;

}

@property (nonatomic,retain) TSWPStorage * storage; 
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setStorage:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(bool)requiresRichText;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(void)dealloc;
-(id)string;
@end
