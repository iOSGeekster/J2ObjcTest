//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/SoftReference.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangRefSoftReference_H_
#define _JavaLangRefSoftReference_H_

@class JavaLangRefReferenceQueue;

#import "JreEmulation.h"
#include "java/lang/ref/Reference.h"

@interface JavaLangRefSoftReference : JavaLangRefReference {
 @public
  BOOL queued_;
}

- (id)initWithId:(id)r;
- (id)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;
- (void)copyAllFieldsTo:(JavaLangRefSoftReference *)other;
@end

#endif // _JavaLangRefSoftReference_H_
