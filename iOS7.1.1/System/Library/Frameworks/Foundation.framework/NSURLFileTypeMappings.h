/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {

	NSURLFileTypeMappingsInternal* _internal;

}
+(id)sharedMappings;
-(id)MIMETypeForExtension:(id)arg1 ;
-(id)_UTIMIMETypeForExtension:(id)arg1 ;
-(id)_UTIextensionForMIMEType:(id)arg1 ;
-(id)preferredExtensionForMIMEType:(id)arg1 ;
-(id)extensionsForMIMEType:(id)arg1 ;
-(id)_init;
@end
