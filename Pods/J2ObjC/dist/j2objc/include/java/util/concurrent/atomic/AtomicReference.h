//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReference.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilConcurrentAtomicAtomicReference_H_
#define _JavaUtilConcurrentAtomicAtomicReference_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilConcurrentAtomicAtomicReference_serialVersionUID -1848883965231344442

@interface JavaUtilConcurrentAtomicAtomicReference : NSObject < JavaIoSerializable > {
 @public
  id value_;
}

- (id)initWithId:(id)initialValue;
- (id)init;
- (id)get;
- (void)setWithId:(id)newValue;
- (void)lazySetWithId:(id)newValue;
- (BOOL)compareAndSetWithId:(id)expect
                     withId:(id)update;
- (BOOL)weakCompareAndSetWithId:(id)expect
                         withId:(id)update;
- (id)getAndSetWithId:(id)newValue;
- (NSString *)description;
+ (void)memoryBarrier;
- (BOOL)compareAndSwapValueWithId:(id)oldValue
                           withId:(id)newValue;
- (void)copyAllFieldsTo:(JavaUtilConcurrentAtomicAtomicReference *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilConcurrentAtomicAtomicReference, value_, id)

#endif // _JavaUtilConcurrentAtomicAtomicReference_H_
