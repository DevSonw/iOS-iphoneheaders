/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, IKDOMNode, IKDOMNodeList, IKDOMDocument;


@protocol IKJSDOMNode <JSExport>
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) int nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@required
-(IKDOMDocument *)ownerDocument;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)lastChild;
-(IKDOMNode *)firstChild;
-(IKDOMNode *)parentNode;
-(IKDOMNode *)previousSibling;
-(id)removeChild:(id)arg1;
-(char)isSameNode:(id)arg1;
-(int)nodeType;
-(IKDOMNode *)nextSibling;
-(id)getFeature:(id)arg1 :(id)arg2;
-(NSString *)nodeValue;
-(NSString *)nodeName;
-(void)setNodeValue:(id)arg1;
-(NSString *)textContent;
-(void)setTextContent:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(id)appendChild:(id)arg1;
-(char)hasChildNodes;
-(id)cloneNode:(char)arg1;
-(char)isEqualNode:(id)arg1;

@end
