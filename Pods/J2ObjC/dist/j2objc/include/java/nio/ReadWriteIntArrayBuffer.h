//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadWriteIntArrayBuffer.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioReadWriteIntArrayBuffer_H_
#define _JavaNioReadWriteIntArrayBuffer_H_

@class IOSIntArray;
@class JavaNioIntBuffer;

#import "JreEmulation.h"
#include "java/nio/IntArrayBuffer.h"

@interface JavaNioReadWriteIntArrayBuffer : JavaNioIntArrayBuffer {
}

+ (JavaNioReadWriteIntArrayBuffer *)copy__WithJavaNioIntArrayBuffer:(JavaNioIntArrayBuffer *)other
                                                            withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithIntArray:(IOSIntArray *)array;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
     withIntArray:(IOSIntArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioIntBuffer *)asReadOnlyBuffer;
- (JavaNioIntBuffer *)compact;
- (JavaNioIntBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSIntArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioIntBuffer *)putWithInt:(int)c;
- (JavaNioIntBuffer *)putWithInt:(int)index
                         withInt:(int)c;
- (JavaNioIntBuffer *)putWithIntArray:(IOSIntArray *)src
                              withInt:(int)off
                              withInt:(int)len;
- (JavaNioIntBuffer *)slice;
@end

#endif // _JavaNioReadWriteIntArrayBuffer_H_
