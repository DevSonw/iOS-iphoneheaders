/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_EditScriptData.h>

@class NSArray;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {

	NSArray* _data;

}

@property (nonatomic,retain) NSArray * data;              //@synthesize data=_data - In the implementation block
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2 ;
+(id)EditScriptDataWithArray:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)length;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)stringValue;
-(id)initWithArray:(id)arg1 ;
-(id)initWithString:(id)arg1 chunkSize:(long long)arg2 ;
-(long long)lengthOfItem:(long long)arg1 ;
-(id)stringAtIndex:(long long)arg1 ;
-(long long)characterIndexForItem:(long long)arg1 ;
@end

