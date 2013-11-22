//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangReflectInvocationTargetException_H_
#define _JavaLangReflectInvocationTargetException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Exception.h"

#define JavaLangReflectInvocationTargetException_serialVersionUID 4085088731926701167

@interface JavaLangReflectInvocationTargetException : JavaLangException {
 @public
  JavaLangThrowable *target_;
}

- (id)init;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)exception;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)exception
                   withNSString:(NSString *)detailMessage;
- (JavaLangThrowable *)getTargetException;
- (JavaLangThrowable *)getCause;
- (void)copyAllFieldsTo:(JavaLangReflectInvocationTargetException *)other;
@end

J2OBJC_FIELD_SETTER(JavaLangReflectInvocationTargetException, target_, JavaLangThrowable *)

#endif // _JavaLangReflectInvocationTargetException_H_