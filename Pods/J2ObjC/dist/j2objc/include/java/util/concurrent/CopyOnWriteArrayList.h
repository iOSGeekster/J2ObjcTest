//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CopyOnWriteArrayList.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilConcurrentCopyOnWriteArrayList_H_
#define _JavaUtilConcurrentCopyOnWriteArrayList_H_

@class IOSObjectArray;
@class JavaUtilConcurrentCopyOnWriteArrayList_Slice;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractList.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"

#define JavaUtilConcurrentCopyOnWriteArrayList_serialVersionUID 8673264195747942595

@interface JavaUtilConcurrentCopyOnWriteArrayList : NSObject < JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable > {
 @public
  IOSObjectArray *elements_;
}

- (id)init;
- (id)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id)initWithNSObjectArray:(IOSObjectArray *)array;
- (id)clone;
- (int)size;
- (id)getWithInt:(int)index;
- (BOOL)containsWithId:(id)o;
- (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
+ (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                        withNSObjectArray:(IOSObjectArray *)snapshot
                                  withInt:(int)from
                                  withInt:(int)to;
- (int)indexOfWithId:(id)object
             withInt:(int)from;
- (int)indexOfWithId:(id)object;
- (int)lastIndexOfWithId:(id)object
                 withInt:(int)to;
- (int)lastIndexOfWithId:(id)object;
- (BOOL)isEmpty;
- (id<JavaUtilIterator>)iterator;
- (id<JavaUtilListIterator>)listIteratorWithInt:(int)index;
- (id<JavaUtilListIterator>)listIterator;
- (id<JavaUtilList>)subListWithInt:(int)from
                           withInt:(int)to;
- (IOSObjectArray *)toArray;
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (NSString *)description;
- (BOOL)addWithId:(id)e;
- (void)addWithInt:(int)index
            withId:(id)e;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)addAllWithInt:(int)index
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (int)addAllAbsentWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)addIfAbsentWithId:(id)object;
- (void)clear;
- (id)removeWithInt:(int)index;
- (BOOL)removeWithId:(id)o;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (int)removeOrRetainWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                withBoolean:(BOOL)retain_
                                    withInt:(int)from
                                    withInt:(int)to;
- (id)setWithInt:(int)index
          withId:(id)e;
- (void)removeRangeWithInt:(int)from
                   withInt:(int)to;
+ (int)lastIndexOfWithId:(id)o
       withNSObjectArray:(IOSObjectArray *)data
                 withInt:(int)from
                 withInt:(int)to;
+ (int)indexOfWithId:(id)o
   withNSObjectArray:(IOSObjectArray *)data
             withInt:(int)from
             withInt:(int)to;
- (IOSObjectArray *)getArray;
- (id)copyWithZone:(NSZone *)zone;
- (void)copyAllFieldsTo:(JavaUtilConcurrentCopyOnWriteArrayList *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilConcurrentCopyOnWriteArrayList, elements_, IOSObjectArray *)

@interface JavaUtilConcurrentCopyOnWriteArrayList_CowSubList : JavaUtilAbstractList {
 @public
  JavaUtilConcurrentCopyOnWriteArrayList *this$0_;
  JavaUtilConcurrentCopyOnWriteArrayList_Slice *slice_;
}

- (id)initWithJavaUtilConcurrentCopyOnWriteArrayList:(JavaUtilConcurrentCopyOnWriteArrayList *)outer$
                                   withNSObjectArray:(IOSObjectArray *)expectedElements
                                             withInt:(int)from
                                             withInt:(int)to;
- (int)size;
- (BOOL)isEmpty;
- (id)getWithInt:(int)index;
- (id<JavaUtilIterator>)iterator;
- (id<JavaUtilListIterator>)listIterator;
- (id<JavaUtilListIterator>)listIteratorWithInt:(int)index;
- (int)indexOfWithId:(id)object;
- (int)lastIndexOfWithId:(id)object;
- (BOOL)containsWithId:(id)object;
- (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id<JavaUtilList>)subListWithInt:(int)from
                           withInt:(int)to;
- (id)removeWithInt:(int)index;
- (void)clear;
- (void)addWithInt:(int)index
            withId:(id)object;
- (BOOL)addWithId:(id)object;
- (BOOL)addAllWithInt:(int)index
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id)setWithInt:(int)index
          withId:(id)object;
- (BOOL)removeWithId:(id)object;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)copyAllFieldsTo:(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList, this$0_, JavaUtilConcurrentCopyOnWriteArrayList *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList, slice_, JavaUtilConcurrentCopyOnWriteArrayList_Slice *)

@interface JavaUtilConcurrentCopyOnWriteArrayList_Slice : NSObject {
 @public
  IOSObjectArray *expectedElements_;
  int from_;
  int to_;
}

- (id)initWithNSObjectArray:(IOSObjectArray *)expectedElements
                    withInt:(int)from
                    withInt:(int)to;
- (void)checkElementIndexWithInt:(int)index;
- (void)checkPositionIndexWithInt:(int)index;
- (void)checkConcurrentModificationWithNSObjectArray:(IOSObjectArray *)snapshot;
- (void)copyAllFieldsTo:(JavaUtilConcurrentCopyOnWriteArrayList_Slice *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilConcurrentCopyOnWriteArrayList_Slice, expectedElements_, IOSObjectArray *)

@interface JavaUtilConcurrentCopyOnWriteArrayList_CowIterator : NSObject < JavaUtilListIterator > {
 @public
  IOSObjectArray *snapshot_;
  int from_;
  int to_;
  int index_;
}

- (id)initWithNSObjectArray:(IOSObjectArray *)snapshot
                    withInt:(int)from
                    withInt:(int)to;
- (void)addWithId:(id)object;
- (BOOL)hasNext;
- (BOOL)hasPrevious;
- (id)next;
- (int)nextIndex;
- (id)previous;
- (int)previousIndex;
- (void)remove;
- (void)setWithId:(id)object;
- (void)copyAllFieldsTo:(JavaUtilConcurrentCopyOnWriteArrayList_CowIterator *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilConcurrentCopyOnWriteArrayList_CowIterator, snapshot_, IOSObjectArray *)

#endif // _JavaUtilConcurrentCopyOnWriteArrayList_H_
