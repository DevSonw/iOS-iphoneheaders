/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DGLHandle;

@interface TSCH3DGLDefaultFramebuffer : TSCH3DGLFramebuffer {

	tvec2<int> mSize;
	unsigned mType;
	TSCH3DGLHandle* mHandle;
	BOOL mDisableDestroyAssertion;

}

@property (assign,nonatomic) tvec2<int> size; 
@property (assign,nonatomic) unsigned type; 
@property (assign,nonatomic) BOOL disableDestroyAssertion; 
@property (assign,nonatomic) unsigned framebufferHandle; 
+(id)currentlyBoundFramebufferWithContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 ;
-(void)bindColorbufferInSession:(id)arg1 ;
-(void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2 ;
-(void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(void)discardDepthBuffer;
-(void)disableSamplingInSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(void)destroyResourcesInSession:(id)arg1 ;
-(void)discardColorBuffer;
-(unsigned long long)estimatedMemroyInBytes;
-(id)initWithContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 ;
-(BOOL)isProtectedInSession:(id)arg1 ;
-(id)GLHandleForSession:(id)arg1 ;
-(void)discardBuffers;
-(void)setFramebufferHandle:(unsigned)arg1 ;
-(void)p_bindFramebuffer;
-(unsigned)framebufferHandle;
-(BOOL)disableDestroyAssertion;
-(void)setDisableDestroyAssertion:(BOOL)arg1 ;
-(void)dealloc;
-(tvec2<int>)size;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setSize:(tvec2<int>)arg1 ;
@end
