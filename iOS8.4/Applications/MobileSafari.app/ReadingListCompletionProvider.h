/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/CompletionProvider.h>

@class NSString;

@interface ReadingListCompletionProvider : CompletionProvider {

	unsigned _maxResults;
	NSString* _stringToComplete;
	char _onlyIncludeAvailableOffline;

}

@property (nonatomic,readonly) char onlyIncludeAvailableOffline;              //@synthesize onlyIncludeAvailableOffline=_onlyIncludeAvailableOffline - In the implementation block
-(void)setStringToComplete:(id)arg1 ;
-(unsigned)maximumCachedCompletionCount;
-(id)initWithMaximumNumberOfCompletions:(unsigned)arg1 onlyIncludeAvailableOffline:(char)arg2 ;
-(char)onlyIncludeAvailableOffline;
@end

