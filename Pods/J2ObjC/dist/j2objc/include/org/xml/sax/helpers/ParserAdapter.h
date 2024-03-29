//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/ParserAdapter.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxHelpersParserAdapter_H_
#define _OrgXmlSaxHelpersParserAdapter_H_

@class IOSCharArray;
@class IOSObjectArray;
@class OrgXmlSaxHelpersAttributesImpl;
@class OrgXmlSaxHelpersNamespaceSupport;
@class OrgXmlSaxHelpersParserAdapter_AttributeListAdapter;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributeList;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlSaxLocator;
@protocol OrgXmlSaxParser;

#import "JreEmulation.h"
#include "org/xml/sax/Attributes.h"
#include "org/xml/sax/DocumentHandler.h"
#include "org/xml/sax/XMLReader.h"

@interface OrgXmlSaxHelpersParserAdapter : NSObject < OrgXmlSaxXMLReader, OrgXmlSaxDocumentHandler > {
 @public
  OrgXmlSaxHelpersNamespaceSupport *nsSupport_;
  OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *attAdapter_;
  BOOL parsing_;
  IOSObjectArray *nameParts_;
  id<OrgXmlSaxParser> parser_;
  OrgXmlSaxHelpersAttributesImpl *atts_;
  BOOL namespaces_;
  BOOL prefixes_;
  BOOL uris_;
  id<OrgXmlSaxLocator> locator_;
  id<OrgXmlSaxEntityResolver> entityResolver_;
  id<OrgXmlSaxDTDHandler> dtdHandler_;
  id<OrgXmlSaxContentHandler> contentHandler_;
  id<OrgXmlSaxErrorHandler> errorHandler_;
}

+ (NSString *)FEATURES;
+ (NSString *)NAMESPACES;
+ (NSString *)NAMESPACE_PREFIXES;
+ (NSString *)XMLNS_URIs;
- (id)init;
- (id)initWithOrgXmlSaxParser:(id<OrgXmlSaxParser>)parser;
- (void)setupWithOrgXmlSaxParser:(id<OrgXmlSaxParser>)parser;
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(BOOL)value;
- (BOOL)getFeatureWithNSString:(NSString *)name;
- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;
- (id)getPropertyWithNSString:(NSString *)name;
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;
- (id<OrgXmlSaxEntityResolver>)getEntityResolver;
- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;
- (id<OrgXmlSaxDTDHandler>)getDTDHandler;
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;
- (id<OrgXmlSaxContentHandler>)getContentHandler;
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;
- (id<OrgXmlSaxErrorHandler>)getErrorHandler;
- (void)parseWithNSString:(NSString *)systemId;
- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)input;
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;
- (void)startDocument;
- (void)endDocument;
- (void)startElementWithNSString:(NSString *)qName
      withOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)qAtts;
- (void)endElementWithNSString:(NSString *)qName;
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(int)start
                        withInt:(int)length;
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(int)start
                                 withInt:(int)length;
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;
- (void)setupParser;
- (IOSObjectArray *)processNameWithNSString:(NSString *)qName
                                withBoolean:(BOOL)isAttribute
                                withBoolean:(BOOL)useException;
- (void)reportErrorWithNSString:(NSString *)message;
- (OrgXmlSaxSAXParseException *)makeExceptionWithNSString:(NSString *)message;
- (void)checkNotParsingWithNSString:(NSString *)type
                       withNSString:(NSString *)name;
- (void)copyAllFieldsTo:(OrgXmlSaxHelpersParserAdapter *)other;
@end

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, nsSupport_, OrgXmlSaxHelpersNamespaceSupport *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, attAdapter_, OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, nameParts_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, parser_, id<OrgXmlSaxParser>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, atts_, OrgXmlSaxHelpersAttributesImpl *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, locator_, id<OrgXmlSaxLocator>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, entityResolver_, id<OrgXmlSaxEntityResolver>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, dtdHandler_, id<OrgXmlSaxDTDHandler>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, contentHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, errorHandler_, id<OrgXmlSaxErrorHandler>)

@interface OrgXmlSaxHelpersParserAdapter_AttributeListAdapter : NSObject < OrgXmlSaxAttributes > {
 @public
  __weak OrgXmlSaxHelpersParserAdapter *this$0_;
  id<OrgXmlSaxAttributeList> qAtts_;
}

- (id)initWithOrgXmlSaxHelpersParserAdapter:(OrgXmlSaxHelpersParserAdapter *)outer$;
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)qAtts;
- (int)getLength;
- (NSString *)getURIWithInt:(int)i;
- (NSString *)getLocalNameWithInt:(int)i;
- (NSString *)getQNameWithInt:(int)i;
- (NSString *)getTypeWithInt:(int)i;
- (NSString *)getValueWithInt:(int)i;
- (int)getIndexWithNSString:(NSString *)uri
               withNSString:(NSString *)localName;
- (int)getIndexWithNSString:(NSString *)qName;
- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;
- (NSString *)getTypeWithNSString:(NSString *)qName;
- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;
- (NSString *)getValueWithNSString:(NSString *)qName;
- (void)copyAllFieldsTo:(OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *)other;
@end

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter_AttributeListAdapter, qAtts_, id<OrgXmlSaxAttributeList>)

#endif // _OrgXmlSaxHelpersParserAdapter_H_
