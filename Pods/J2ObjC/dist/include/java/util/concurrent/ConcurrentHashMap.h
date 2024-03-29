//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilConcurrentConcurrentHashMap_H_
#define _JavaUtilConcurrentConcurrentHashMap_H_

@protocol JavaUtilMap;

#import "JreEmulation.h"
#include "java/util/Hashtable.h"
#include "java/util/concurrent/ConcurrentMap.h"

@interface JavaUtilConcurrentConcurrentHashMap : JavaUtilHashtable < JavaUtilConcurrentConcurrentMap > {
}

- (id)init;
- (id)initWithInt:(int)initialCapacity;
- (id)initWithInt:(int)initialCapacity
        withFloat:(float)loadFactor;
- (id)initWithJavaUtilMap:(id<JavaUtilMap>)t;
- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;
- (BOOL)removeWithId:(id)key
              withId:(id)value;
- (BOOL)replaceWithId:(id)key
               withId:(id)oldValue
               withId:(id)newValue;
- (id)replaceWithId:(id)key
             withId:(id)value;
@end

#endif // _JavaUtilConcurrentConcurrentHashMap_H_
