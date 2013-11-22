//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilRandom_H_
#define _JavaUtilRandom_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilRandom_multiplier 25214903917
#define JavaUtilRandom_serialVersionUID 3905348978240129619

@interface JavaUtilRandom : NSObject < JavaIoSerializable > {
 @public
  BOOL haveNextNextGaussian_;
  long long int seed_;
  double nextNextGaussian_;
}

- (id)init;
- (id)initWithLong:(long long int)seed;
- (int)nextWithInt:(int)bits;
- (BOOL)nextBoolean;
- (void)nextBytesWithByteArray:(IOSByteArray *)buf;
- (double)nextDouble;
- (float)nextFloat;
- (double)nextGaussian;
+ (double)iOS_sqrtWithDouble:(double)a;
+ (double)iOS_logWithDouble:(double)a;
- (int)nextInt;
- (int)nextIntWithInt:(int)n;
- (long long int)nextLong;
- (void)setSeedWithLong:(long long int)seed;
- (void)copyAllFieldsTo:(JavaUtilRandom *)other;
@end

#endif // _JavaUtilRandom_H_