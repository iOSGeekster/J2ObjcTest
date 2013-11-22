//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/net/URI.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNetURI_H_
#define _JavaNetURI_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

@interface JavaNetURI : NSObject < JavaLangComparable, JavaIoSerializable > {
 @public
  NSString *string_;
  NSString *scheme_;
  NSString *schemespecificpart_;
  NSString *authority_;
  NSString *userinfo_;
  NSString *host_;
  int port_;
  NSString *path_;
  NSString *query_;
  NSString *fragment_;
  BOOL opaque_;
  BOOL absolute_;
  BOOL serverAuthority_;
  int hash__;
}

+ (NSString *)unreserved;
+ (NSString *)punct;
+ (NSString *)reserved;
+ (NSString *)someLegal;
+ (NSString *)queryLegal;
+ (NSString *)allLegal;
- (id)init;
- (id)initWithNSString:(NSString *)uri;
- (id)initWithNSString:(NSString *)scheme
          withNSString:(NSString *)ssp
          withNSString:(NSString *)frag;
- (id)initWithNSString:(NSString *)scheme
          withNSString:(NSString *)userinfo
          withNSString:(NSString *)host
               withInt:(int)port
          withNSString:(NSString *)path
          withNSString:(NSString *)query
          withNSString:(NSString *)fragment;
- (id)initWithNSString:(NSString *)scheme
          withNSString:(NSString *)host
          withNSString:(NSString *)path
          withNSString:(NSString *)fragment;
- (id)initWithNSString:(NSString *)scheme
          withNSString:(NSString *)authority
          withNSString:(NSString *)path
          withNSString:(NSString *)query
          withNSString:(NSString *)fragment;
- (NSString *)quoteComponentWithNSString:(NSString *)component
                            withNSString:(NSString *)legalset;
- (int)compareToWithId:(JavaNetURI *)uri;
+ (JavaNetURI *)createWithNSString:(NSString *)uri;
- (JavaNetURI *)duplicate;
- (NSString *)convertHexToLowerCaseWithNSString:(NSString *)s;
- (BOOL)equalsHexCaseInsensitiveWithNSString:(NSString *)first
                                withNSString:(NSString *)second;
- (BOOL)isEqual:(id)o;
- (NSString *)getAuthority;
- (NSString *)getFragment;
- (NSString *)getHost;
- (NSString *)getPath;
- (int)getPort;
- (NSString *)getQuery;
- (NSString *)getRawAuthority;
- (NSString *)getRawFragment;
- (NSString *)getRawPath;
- (NSString *)getRawQuery;
- (NSString *)getRawSchemeSpecificPart;
- (NSString *)getRawUserInfo;
- (NSString *)getScheme;
- (NSString *)getSchemeSpecificPart;
- (NSString *)getUserInfo;
- (NSUInteger)hash;
- (BOOL)isAbsolute;
- (BOOL)isOpaque;
- (NSString *)normalizeWithNSString:(NSString *)path;
- (JavaNetURI *)normalize;
- (JavaNetURI *)parseServerAuthority;
- (JavaNetURI *)relativizeWithJavaNetURI:(JavaNetURI *)relative;
- (JavaNetURI *)resolveWithJavaNetURI:(JavaNetURI *)relative;
- (void)setSchemeSpecificPart;
- (JavaNetURI *)resolveWithNSString:(NSString *)relative;
- (NSString *)encodeOthersWithNSString:(NSString *)s;
- (NSString *)decodeWithNSString:(NSString *)s;
- (NSString *)toASCIIString;
- (NSString *)description;
- (NSString *)getHashString;
- (void)copyAllFieldsTo:(JavaNetURI *)other;
@end

J2OBJC_FIELD_SETTER(JavaNetURI, string_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, scheme_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, schemespecificpart_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, authority_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, userinfo_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, host_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, path_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, query_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetURI, fragment_, NSString *)

@interface JavaNetURI_Helper : NSObject {
 @public
  JavaNetURI *this$0_;
}

- (void)parseURIWithNSString:(NSString *)uri
                 withBoolean:(BOOL)forceServer;
- (void)validateSchemeWithNSString:(NSString *)uri
                      withNSString:(NSString *)scheme
                           withInt:(int)index;
- (void)validateSspWithNSString:(NSString *)uri
                   withNSString:(NSString *)ssp
                        withInt:(int)index;
- (void)validateAuthorityWithNSString:(NSString *)uri
                         withNSString:(NSString *)authority
                              withInt:(int)index;
- (void)validatePathWithNSString:(NSString *)uri
                    withNSString:(NSString *)path
                         withInt:(int)index;
- (void)validateQueryWithNSString:(NSString *)uri
                     withNSString:(NSString *)query
                          withInt:(int)index;
- (void)validateFragmentWithNSString:(NSString *)uri
                        withNSString:(NSString *)fragment
                             withInt:(int)index;
- (void)parseAuthorityWithBoolean:(BOOL)forceServer;
- (void)validateUserinfoWithNSString:(NSString *)uri
                        withNSString:(NSString *)userinfo
                             withInt:(int)index;
- (BOOL)isValidHostWithBoolean:(BOOL)forceServer
                  withNSString:(NSString *)host;
- (BOOL)isValidDomainNameWithNSString:(NSString *)host;
- (BOOL)isValidIPv4AddressWithNSString:(NSString *)host;
- (BOOL)isValidIP6AddressWithNSString:(NSString *)ipAddress;
- (BOOL)isValidIP4WordWithNSString:(NSString *)word;
- (BOOL)isValidHexCharWithChar:(unichar)c;
- (id)initWithJavaNetURI:(JavaNetURI *)outer$;
@end

J2OBJC_FIELD_SETTER(JavaNetURI_Helper, this$0_, JavaNetURI *)

#endif // _JavaNetURI_H_