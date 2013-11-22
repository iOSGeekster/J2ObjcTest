//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/io/BufferedWriter.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaIoBufferedWriter_H_
#define _JavaIoBufferedWriter_H_

@class IOSCharArray;

#import "JreEmulation.h"
#include "java/io/Writer.h"

@interface JavaIoBufferedWriter : JavaIoWriter {
 @public
  JavaIoWriter *out_;
  IOSCharArray *buf_;
  int pos_;
  NSString *lineSeparator_;
}

- (id)initWithJavaIoWriter:(JavaIoWriter *)outArg;
- (id)initWithJavaIoWriter:(JavaIoWriter *)outArg
                   withInt:(int)size;
- (void)close;
- (void)flush;
- (void)flushInternal;
- (BOOL)isClosed;
- (void)newLine OBJC_METHOD_FAMILY_NONE;
- (void)writeWithCharArray:(IOSCharArray *)cbuf
                   withInt:(int)offset
                   withInt:(int)count;
- (void)writeWithInt:(int)oneChar;
- (void)writeWithNSString:(NSString *)str
                  withInt:(int)offset
                  withInt:(int)count;
- (void)copyAllFieldsTo:(JavaIoBufferedWriter *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoBufferedWriter, out_, JavaIoWriter *)
J2OBJC_FIELD_SETTER(JavaIoBufferedWriter, buf_, IOSCharArray *)
J2OBJC_FIELD_SETTER(JavaIoBufferedWriter, lineSeparator_, NSString *)

#endif // _JavaIoBufferedWriter_H_