//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/InstantiationException.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangInstantiationException_H_
#define _JavaLangInstantiationException_H_

@class IOSClass;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaLangInstantiationException_serialVersionUID -8441929162975509110

@interface JavaLangInstantiationException : JavaLangException {
}

- (id)init;
- (id)initWithNSString:(NSString *)detailMessage;
- (id)initWithIOSClass:(IOSClass *)clazz;
@end

#endif // _JavaLangInstantiationException_H_
