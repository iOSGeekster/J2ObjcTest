//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgXmlSaxEntityResolver_H_
#define _OrgXmlSaxEntityResolver_H_

@class OrgXmlSaxInputSource;

#import "JreEmulation.h"

@protocol OrgXmlSaxEntityResolver < NSObject, JavaObject >
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;
@end

#endif // _OrgXmlSaxEntityResolver_H_
