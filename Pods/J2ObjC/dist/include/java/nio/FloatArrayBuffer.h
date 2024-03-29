//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaNioFloatArrayBuffer_H_
#define _JavaNioFloatArrayBuffer_H_

@class IOSFloatArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/nio/FloatBuffer.h"

@interface JavaNioFloatArrayBuffer : JavaNioFloatBuffer {
 @public
  IOSFloatArray *backingArray_;
  int offset_;
}

- (id)initWithFloatArray:(IOSFloatArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
   withFloatArray:(IOSFloatArray *)backingArray
          withInt:(int)offset;
- (float)get;
- (float)getWithInt:(int)index;
- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dest
                                  withInt:(int)off
                                  withInt:(int)len;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
- (void)copyAllFieldsTo:(JavaNioFloatArrayBuffer *)other;
@end

J2OBJC_FIELD_SETTER(JavaNioFloatArrayBuffer, backingArray_, IOSFloatArray *)

#endif // _JavaNioFloatArrayBuffer_H_
