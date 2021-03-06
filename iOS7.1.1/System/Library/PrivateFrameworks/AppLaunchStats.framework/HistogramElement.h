/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface HistogramElement : NSObject <NSCoding> {

	NSString* stringkey;
	double probability;
	unsigned long long count;
	unsigned long long queryID;

}

@property (nonatomic,retain) NSString * stringkey; 
@property (assign,nonatomic) double probability; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) unsigned long long queryID; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(void).cxx_destruct;
-(id)stringkey;
-(double)probability;
-(id)initWithString:(id)arg1 withProbability:(double)arg2 withQueryID:(unsigned long long)arg3 ;
-(unsigned long long)queryID;
-(id)initWithString:(id)arg1 withCount:(unsigned long long)arg2 withQueryID:(unsigned long long)arg3 ;
-(void)setStringkey:(id)arg1 ;
-(void)setProbability:(double)arg1 ;
-(void)setQueryID:(unsigned long long)arg1 ;
@end

