//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/ReadOnlyShortArrayBuffer.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioReadOnlyShortArrayBuffer_H_
#define _JavaNioReadOnlyShortArrayBuffer_H_

@class IOSShortArray;
@class JavaNioShortBuffer;

#import "JreEmulation.h"
#include "java/nio/ShortArrayBuffer.h"

@interface JavaNioReadOnlyShortArrayBuffer : JavaNioShortArrayBuffer {
}

+ (JavaNioReadOnlyShortArrayBuffer *)copy__WithJavaNioShortArrayBuffer:(JavaNioShortArrayBuffer *)other
                                                               withInt:(int)markOfOther OBJC_METHOD_FAMILY_NONE;
- (id)initWithInt:(int)capacity
   withShortArray:(IOSShortArray *)backingArray
          withInt:(int)arrayOffset;
- (JavaNioShortBuffer *)asReadOnlyBuffer;
- (JavaNioShortBuffer *)compact;
- (JavaNioShortBuffer *)duplicate;
- (BOOL)isReadOnly;
- (IOSShortArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioShortBuffer *)putWithJavaNioShortBuffer:(JavaNioShortBuffer *)buf;
- (JavaNioShortBuffer *)putWithShort:(short int)c;
- (JavaNioShortBuffer *)putWithInt:(int)index
                         withShort:(short int)c;
- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src
                                  withInt:(int)off
                                  withInt:(int)len;
- (JavaNioShortBuffer *)slice;
@end

#endif // _JavaNioReadOnlyShortArrayBuffer_H_
