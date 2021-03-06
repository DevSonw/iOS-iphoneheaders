/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSWPRangeArray : NSObject <NSCopying> {

	void* _rangeVectorOpaque;

}

@property (nonatomic,readonly) unsigned rangeCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) unsigned start; 
@property (nonatomic,readonly) unsigned finish; 
-(void)enumerateRangesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithRangeVector:(const void*)arg1 ;
-(NSRange*)rangeReferenceAtIndex:(unsigned)arg1 ;
-(void)removeRange:(NSRange)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(unsigned)start;
-(unsigned)finish;
-(void)addRange:(NSRange)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)rangeCount;
-(NSRange)rangeAtIndex:(unsigned)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
@end

