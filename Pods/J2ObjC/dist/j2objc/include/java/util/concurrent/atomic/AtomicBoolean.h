//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicBoolean.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilConcurrentAtomicAtomicBoolean_H_
#define _JavaUtilConcurrentAtomicAtomicBoolean_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilConcurrentAtomicAtomicBoolean_serialVersionUID 4654671469794556979

@interface JavaUtilConcurrentAtomicAtomicBoolean : NSObject < JavaIoSerializable > {
 @public
  int value_;
}

- (id)initWithBoolean:(BOOL)initialValue;
- (id)init;
- (BOOL)get;
- (BOOL)compareAndSetWithBoolean:(BOOL)expect
                     withBoolean:(BOOL)update;
- (BOOL)weakCompareAndSetWithBoolean:(BOOL)expect
                         withBoolean:(BOOL)update;
- (void)setWithBoolean:(BOOL)newValue;
- (void)lazySetWithBoolean:(BOOL)newValue;
- (BOOL)getAndSetWithBoolean:(BOOL)newValue;
- (NSString *)description;
+ (void)memoryBarrier;
- (BOOL)compareAndSwapValueWithInt:(int)oldValue
                           withInt:(int)newValue;
- (void)copyAllFieldsTo:(JavaUtilConcurrentAtomicAtomicBoolean *)other;
@end

#endif // _JavaUtilConcurrentAtomicAtomicBoolean_H_
