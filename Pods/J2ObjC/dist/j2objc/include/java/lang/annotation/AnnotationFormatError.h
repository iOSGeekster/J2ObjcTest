//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/AnnotationFormatError.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangAnnotationAnnotationFormatError_H_
#define _JavaLangAnnotationAnnotationFormatError_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/lang/Error.h"

#define JavaLangAnnotationAnnotationFormatError_serialVersionUID -4256701562333669892

@interface JavaLangAnnotationAnnotationFormatError : JavaLangError {
}

- (id)initWithNSString:(NSString *)message;
- (id)initWithNSString:(NSString *)message
 withJavaLangThrowable:(JavaLangThrowable *)cause;
- (id)initWithJavaLangThrowable:(JavaLangThrowable *)cause;
@end

#endif // _JavaLangAnnotationAnnotationFormatError_H_
