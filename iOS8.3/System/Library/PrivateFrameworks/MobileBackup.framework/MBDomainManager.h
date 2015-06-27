/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MBDomainManager : NSObject {

	NSMutableDictionary* _domainsByName;

}
-(id)initWithDomains:(id)arg1 ;
-(id)domainForPath:(id)arg1 relativePath:(id*)arg2 ;
-(char)containsDomainName:(id)arg1 ;
-(void)addDomain:(id)arg1 ;
-(id)domainForName:(id)arg1 ;
-(id)redirectDomain:(id)arg1 forRelativePath:(id)arg2 ;
-(id)allDomains;
-(void)dealloc;
@end
