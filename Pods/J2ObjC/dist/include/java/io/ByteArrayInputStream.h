//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaIoByteArrayInputStream_H_
#define _JavaIoByteArrayInputStream_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/InputStream.h"

@interface JavaIoByteArrayInputStream : JavaIoInputStream {
 @public
  IOSByteArray *buf_;
  int pos_;
  int mark__;
  int count_;
}

- (id)initWithByteArray:(IOSByteArray *)buf;
- (id)initWithByteArray:(IOSByteArray *)buf
                withInt:(int)offset
                withInt:(int)length;
- (int)available;
- (void)close;
- (void)markWithInt:(int)readlimit;
- (BOOL)markSupported;
- (int)read;
- (int)readWithByteArray:(IOSByteArray *)b
                 withInt:(int)offset
                 withInt:(int)length;
- (void)reset;
- (long long int)skipWithLong:(long long int)n;
- (void)copyAllFieldsTo:(JavaIoByteArrayInputStream *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoByteArrayInputStream, buf_, IOSByteArray *)

#endif // _JavaIoByteArrayInputStream_H_
