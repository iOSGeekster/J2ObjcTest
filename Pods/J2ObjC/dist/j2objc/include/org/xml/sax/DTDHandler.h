//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/DTDHandler.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgXmlSaxDTDHandler_H_
#define _OrgXmlSaxDTDHandler_H_

#import "JreEmulation.h"

@protocol OrgXmlSaxDTDHandler < NSObject, JavaObject >
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;
@end

#endif // _OrgXmlSaxDTDHandler_H_
