/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIIndexBarEntry.h>

@class NSAttributedString, NSDictionary;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {

	BOOL _hasValidSynthesizedAttributedString;
	NSAttributedString* _synthesizedAttributedString;
	NSAttributedString* _attributedString;
	NSDictionary* _defaultTextAttributes;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                        //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)_synthesizedAttributedString;
-(void)_invalidateSynthesizedAttributedString;
@end
