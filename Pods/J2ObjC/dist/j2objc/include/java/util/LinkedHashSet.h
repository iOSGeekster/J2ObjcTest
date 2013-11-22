//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/LinkedHashSet.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilLinkedHashSet_H_
#define _JavaUtilLinkedHashSet_H_

@class JavaUtilHashMap;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/HashSet.h"
#include "java/util/Set.h"

#define JavaUtilLinkedHashSet_serialVersionUID -2851667679971038690

@interface JavaUtilLinkedHashSet : JavaUtilHashSet < JavaUtilSet, NSCopying, JavaIoSerializable > {
}

- (id)init;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
        withFloat:(float)loadFactor;
- (id)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (JavaUtilHashMap *)createBackingMapWithInt:(int)capacity
                                   withFloat:(float)loadFactor;
@end

#endif // _JavaUtilLinkedHashSet_H_