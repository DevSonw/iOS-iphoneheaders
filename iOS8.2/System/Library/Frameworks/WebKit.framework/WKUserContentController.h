/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSArray;

@interface WKUserContentController : NSObject {

	RefPtr<WebKit::WebUserContentControllerProxy>* _userContentControllerProxy;
	RetainPtr<NSMutableArray>* _userScripts;

}

@property (nonatomic,copy,readonly) NSArray * userScripts; 
-(id)init;
-(NSArray *)userScripts;
-(void)addUserScript:(id)arg1 ;
-(void)removeAllUserScripts;
-(void)addScriptMessageHandler:(id)arg1 name:(id)arg2 ;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
@end
