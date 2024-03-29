//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/Arrays.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilArrays_H_
#define _JavaUtilArrays_H_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@class JavaLangStringBuilder;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractList.h"
#include "java/util/List.h"
#include "java/util/RandomAccess.h"

#define JavaUtilArrays_SIMPLE_LENGTH 7

@interface JavaUtilArrays : NSObject {
}

- (id)init;
+ (id<JavaUtilList>)asListWithNSObjectArray:(IOSObjectArray *)array;
+ (int)binarySearchWithByteArray:(IOSByteArray *)array
                        withByte:(char)value;
+ (int)binarySearchWithByteArray:(IOSByteArray *)array
                         withInt:(int)startIndex
                         withInt:(int)endIndex
                        withByte:(char)value;
+ (int)binarySearchWithCharArray:(IOSCharArray *)array
                        withChar:(unichar)value;
+ (int)binarySearchWithCharArray:(IOSCharArray *)array
                         withInt:(int)startIndex
                         withInt:(int)endIndex
                        withChar:(unichar)value;
+ (int)binarySearchWithDoubleArray:(IOSDoubleArray *)array
                        withDouble:(double)value;
+ (int)binarySearchWithDoubleArray:(IOSDoubleArray *)array
                           withInt:(int)startIndex
                           withInt:(int)endIndex
                        withDouble:(double)value;
+ (int)binarySearchWithFloatArray:(IOSFloatArray *)array
                        withFloat:(float)value;
+ (int)binarySearchWithFloatArray:(IOSFloatArray *)array
                          withInt:(int)startIndex
                          withInt:(int)endIndex
                        withFloat:(float)value;
+ (int)binarySearchWithIntArray:(IOSIntArray *)array
                        withInt:(int)value;
+ (int)binarySearchWithIntArray:(IOSIntArray *)array
                        withInt:(int)startIndex
                        withInt:(int)endIndex
                        withInt:(int)value;
+ (int)binarySearchWithLongArray:(IOSLongArray *)array
                        withLong:(long long int)value;
+ (int)binarySearchWithLongArray:(IOSLongArray *)array
                         withInt:(int)startIndex
                         withInt:(int)endIndex
                        withLong:(long long int)value;
+ (int)binarySearchWithNSObjectArray:(IOSObjectArray *)array
                              withId:(id)value;
+ (int)binarySearchWithNSObjectArray:(IOSObjectArray *)array
                             withInt:(int)startIndex
                             withInt:(int)endIndex
                              withId:(id)value;
+ (int)binarySearchWithNSObjectArray:(IOSObjectArray *)array
                              withId:(id)value
              withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
+ (int)binarySearchWithNSObjectArray:(IOSObjectArray *)array
                             withInt:(int)startIndex
                             withInt:(int)endIndex
                              withId:(id)value
              withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
+ (int)binarySearchWithShortArray:(IOSShortArray *)array
                        withShort:(short int)value;
+ (int)binarySearchWithShortArray:(IOSShortArray *)array
                          withInt:(int)startIndex
                          withInt:(int)endIndex
                        withShort:(short int)value;
+ (void)checkBinarySearchBoundsWithInt:(int)startIndex
                               withInt:(int)endIndex
                               withInt:(int)length;
+ (void)fillWithByteArray:(IOSByteArray *)array
                 withByte:(char)value;
+ (void)fillWithByteArray:(IOSByteArray *)array
                  withInt:(int)start
                  withInt:(int)end
                 withByte:(char)value;
+ (void)fillWithShortArray:(IOSShortArray *)array
                 withShort:(short int)value;
+ (void)fillWithShortArray:(IOSShortArray *)array
                   withInt:(int)start
                   withInt:(int)end
                 withShort:(short int)value;
+ (void)fillWithCharArray:(IOSCharArray *)array
                 withChar:(unichar)value;
+ (void)fillWithCharArray:(IOSCharArray *)array
                  withInt:(int)start
                  withInt:(int)end
                 withChar:(unichar)value;
+ (void)fillWithIntArray:(IOSIntArray *)array
                 withInt:(int)value;
+ (void)fillWithIntArray:(IOSIntArray *)array
                 withInt:(int)start
                 withInt:(int)end
                 withInt:(int)value;
+ (void)fillWithLongArray:(IOSLongArray *)array
                 withLong:(long long int)value;
+ (void)fillWithLongArray:(IOSLongArray *)array
                  withInt:(int)start
                  withInt:(int)end
                 withLong:(long long int)value;
+ (void)fillWithFloatArray:(IOSFloatArray *)array
                 withFloat:(float)value;
+ (void)fillWithFloatArray:(IOSFloatArray *)array
                   withInt:(int)start
                   withInt:(int)end
                 withFloat:(float)value;
+ (void)fillWithDoubleArray:(IOSDoubleArray *)array
                 withDouble:(double)value;
+ (void)fillWithDoubleArray:(IOSDoubleArray *)array
                    withInt:(int)start
                    withInt:(int)end
                 withDouble:(double)value;
+ (void)fillWithBooleanArray:(IOSBooleanArray *)array
                 withBoolean:(BOOL)value;
+ (void)fillWithBooleanArray:(IOSBooleanArray *)array
                     withInt:(int)start
                     withInt:(int)end
                 withBoolean:(BOOL)value;
+ (void)fillWithNSObjectArray:(IOSObjectArray *)array
                       withId:(id)value;
+ (void)fillWithNSObjectArray:(IOSObjectArray *)array
                      withInt:(int)start
                      withInt:(int)end
                       withId:(id)value;
+ (int)hashCodeWithBooleanArray:(IOSBooleanArray *)array;
+ (int)hashCodeWithIntArray:(IOSIntArray *)array;
+ (int)hashCodeWithShortArray:(IOSShortArray *)array;
+ (int)hashCodeWithCharArray:(IOSCharArray *)array;
+ (int)hashCodeWithByteArray:(IOSByteArray *)array;
+ (int)hashCodeWithLongArray:(IOSLongArray *)array;
+ (int)hashCodeWithFloatArray:(IOSFloatArray *)array;
+ (int)hashCodeWithDoubleArray:(IOSDoubleArray *)array;
+ (int)hashCodeWithNSObjectArray:(IOSObjectArray *)array;
+ (int)deepHashCodeWithNSObjectArray:(IOSObjectArray *)array;
+ (BOOL)equalsWithByteArray:(IOSByteArray *)array1
              withByteArray:(IOSByteArray *)array2;
+ (BOOL)equalsWithShortArray:(IOSShortArray *)array1
              withShortArray:(IOSShortArray *)array2;
+ (BOOL)equalsWithCharArray:(IOSCharArray *)array1
              withCharArray:(IOSCharArray *)array2;
+ (BOOL)equalsWithIntArray:(IOSIntArray *)array1
              withIntArray:(IOSIntArray *)array2;
+ (BOOL)equalsWithLongArray:(IOSLongArray *)array1
              withLongArray:(IOSLongArray *)array2;
+ (BOOL)equalsWithFloatArray:(IOSFloatArray *)array1
              withFloatArray:(IOSFloatArray *)array2;
+ (BOOL)equalsWithDoubleArray:(IOSDoubleArray *)array1
              withDoubleArray:(IOSDoubleArray *)array2;
+ (BOOL)equalsWithBooleanArray:(IOSBooleanArray *)array1
              withBooleanArray:(IOSBooleanArray *)array2;
+ (BOOL)equalsWithNSObjectArray:(IOSObjectArray *)array1
              withNSObjectArray:(IOSObjectArray *)array2;
+ (BOOL)deepEqualsWithNSObjectArray:(IOSObjectArray *)array1
                  withNSObjectArray:(IOSObjectArray *)array2;
+ (BOOL)isSameWithDouble:(double)double1
              withDouble:(double)double2;
+ (BOOL)lessThanWithDouble:(double)double1
                withDouble:(double)double2;
+ (BOOL)isSameWithFloat:(float)float1
              withFloat:(float)float2;
+ (BOOL)lessThanWithFloat:(float)float1
                withFloat:(float)float2;
+ (int)med3WithByteArray:(IOSByteArray *)array
                 withInt:(int)a
                 withInt:(int)b
                 withInt:(int)c;
+ (int)med3WithCharArray:(IOSCharArray *)array
                 withInt:(int)a
                 withInt:(int)b
                 withInt:(int)c;
+ (int)med3WithDoubleArray:(IOSDoubleArray *)array
                   withInt:(int)a
                   withInt:(int)b
                   withInt:(int)c;
+ (int)med3WithFloatArray:(IOSFloatArray *)array
                  withInt:(int)a
                  withInt:(int)b
                  withInt:(int)c;
+ (int)med3WithIntArray:(IOSIntArray *)array
                withInt:(int)a
                withInt:(int)b
                withInt:(int)c;
+ (int)med3WithLongArray:(IOSLongArray *)array
                 withInt:(int)a
                 withInt:(int)b
                 withInt:(int)c;
+ (int)med3WithShortArray:(IOSShortArray *)array
                  withInt:(int)a
                  withInt:(int)b
                  withInt:(int)c;
+ (void)sortWithByteArray:(IOSByteArray *)array;
+ (void)sortWithByteArray:(IOSByteArray *)array
                  withInt:(int)start
                  withInt:(int)end;
+ (void)checkBoundsWithInt:(int)arrLength
                   withInt:(int)start
                   withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
      withByteArray:(IOSByteArray *)array;
+ (void)sortWithCharArray:(IOSCharArray *)array;
+ (void)sortWithCharArray:(IOSCharArray *)array
                  withInt:(int)start
                  withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
      withCharArray:(IOSCharArray *)array;
+ (void)sortWithDoubleArray:(IOSDoubleArray *)array;
+ (void)sortWithDoubleArray:(IOSDoubleArray *)array
                    withInt:(int)start
                    withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
    withDoubleArray:(IOSDoubleArray *)array;
+ (void)sortWithFloatArray:(IOSFloatArray *)array;
+ (void)sortWithFloatArray:(IOSFloatArray *)array
                   withInt:(int)start
                   withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
     withFloatArray:(IOSFloatArray *)array;
+ (void)sortWithIntArray:(IOSIntArray *)array;
+ (void)sortWithIntArray:(IOSIntArray *)array
                 withInt:(int)start
                 withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
       withIntArray:(IOSIntArray *)array;
+ (void)sortWithLongArray:(IOSLongArray *)array;
+ (void)sortWithLongArray:(IOSLongArray *)array
                  withInt:(int)start
                  withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
      withLongArray:(IOSLongArray *)array;
+ (void)sortWithNSObjectArray:(IOSObjectArray *)array;
+ (void)sortWithNSObjectArray:(IOSObjectArray *)array
                      withInt:(int)start
                      withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
  withNSObjectArray:(IOSObjectArray *)array;
+ (void)swapWithInt:(int)a
            withInt:(int)b
  withNSObjectArray:(IOSObjectArray *)arr;
+ (void)mergeSortWithNSObjectArray:(IOSObjectArray *)inArg
                 withNSObjectArray:(IOSObjectArray *)outArg
                           withInt:(int)start
                           withInt:(int)end;
+ (void)mergeSortWithNSObjectArray:(IOSObjectArray *)inArg
                 withNSObjectArray:(IOSObjectArray *)outArg
                           withInt:(int)start
                           withInt:(int)end
            withJavaUtilComparator:(id<JavaUtilComparator>)c;
+ (int)findWithNSObjectArray:(IOSObjectArray *)arr
      withJavaLangComparable:(id<JavaLangComparable>)val
                     withInt:(int)bnd
                     withInt:(int)l
                     withInt:(int)r;
+ (int)findWithNSObjectArray:(IOSObjectArray *)arr
                      withId:(id)val
                     withInt:(int)bnd
                     withInt:(int)l
                     withInt:(int)r
      withJavaUtilComparator:(id<JavaUtilComparator>)c;
+ (int)medCharWithInt:(int)a
              withInt:(int)b
              withInt:(int)c
    withNSStringArray:(IOSObjectArray *)arr
              withInt:(int)id_;
+ (int)charAtWithNSString:(NSString *)str
                  withInt:(int)i;
+ (void)copySwapWithNSObjectArray:(IOSObjectArray *)src
                          withInt:(int)from
                withNSObjectArray:(IOSObjectArray *)dst
                          withInt:(int)to
                          withInt:(int)len OBJC_METHOD_FAMILY_NONE;
+ (void)stableStringSortWithNSStringArray:(IOSObjectArray *)arr
                                  withInt:(int)start
                                  withInt:(int)end;
+ (void)stableStringSortWithNSStringArray:(IOSObjectArray *)arr
                        withNSStringArray:(IOSObjectArray *)src
                        withNSStringArray:(IOSObjectArray *)dst
                                  withInt:(int)start
                                  withInt:(int)end
                                  withInt:(int)chId;
+ (void)sortWithNSObjectArray:(IOSObjectArray *)array
                      withInt:(int)start
                      withInt:(int)end
       withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
+ (void)sortWithInt:(int)start
            withInt:(int)end
  withNSObjectArray:(IOSObjectArray *)array
withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
+ (void)sortWithNSObjectArray:(IOSObjectArray *)array
       withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
+ (void)sortWithShortArray:(IOSShortArray *)array;
+ (void)sortWithShortArray:(IOSShortArray *)array
                   withInt:(int)start
                   withInt:(int)end;
+ (void)sortWithInt:(int)start
            withInt:(int)end
     withShortArray:(IOSShortArray *)array;
+ (NSString *)toStringWithBooleanArray:(IOSBooleanArray *)array;
+ (NSString *)toStringWithByteArray:(IOSByteArray *)array;
+ (NSString *)toStringWithCharArray:(IOSCharArray *)array;
+ (NSString *)toStringWithDoubleArray:(IOSDoubleArray *)array;
+ (NSString *)toStringWithFloatArray:(IOSFloatArray *)array;
+ (NSString *)toStringWithIntArray:(IOSIntArray *)array;
+ (NSString *)toStringWithLongArray:(IOSLongArray *)array;
+ (NSString *)toStringWithShortArray:(IOSShortArray *)array;
+ (NSString *)toStringWithNSObjectArray:(IOSObjectArray *)array;
+ (NSString *)deepToStringWithNSObjectArray:(IOSObjectArray *)array;
+ (void)deepToStringImplWithNSObjectArray:(IOSObjectArray *)array
                        withNSObjectArray:(IOSObjectArray *)origArrays
                withJavaLangStringBuilder:(JavaLangStringBuilder *)sb;
+ (BOOL)deepToStringImplContainsWithNSObjectArray:(IOSObjectArray *)origArrays
                                           withId:(id)array;
+ (IOSBooleanArray *)copyOfWithBooleanArray:(IOSBooleanArray *)original
                                    withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSByteArray *)copyOfWithByteArray:(IOSByteArray *)original
                              withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSCharArray *)copyOfWithCharArray:(IOSCharArray *)original
                              withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSDoubleArray *)copyOfWithDoubleArray:(IOSDoubleArray *)original
                                  withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSFloatArray *)copyOfWithFloatArray:(IOSFloatArray *)original
                                withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSIntArray *)copyOfWithIntArray:(IOSIntArray *)original
                            withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSLongArray *)copyOfWithLongArray:(IOSLongArray *)original
                              withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSShortArray *)copyOfWithShortArray:(IOSShortArray *)original
                                withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSObjectArray *)copyOfWithNSObjectArray:(IOSObjectArray *)original
                                    withInt:(int)newLength OBJC_METHOD_FAMILY_NONE;
+ (IOSObjectArray *)copyOfWithNSObjectArray:(IOSObjectArray *)original
                                    withInt:(int)newLength
                               withIOSClass:(IOSClass *)newType OBJC_METHOD_FAMILY_NONE;
+ (IOSBooleanArray *)copyOfRangeWithBooleanArray:(IOSBooleanArray *)original
                                         withInt:(int)start
                                         withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSByteArray *)copyOfRangeWithByteArray:(IOSByteArray *)original
                                   withInt:(int)start
                                   withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSCharArray *)copyOfRangeWithCharArray:(IOSCharArray *)original
                                   withInt:(int)start
                                   withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSDoubleArray *)copyOfRangeWithDoubleArray:(IOSDoubleArray *)original
                                       withInt:(int)start
                                       withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSFloatArray *)copyOfRangeWithFloatArray:(IOSFloatArray *)original
                                     withInt:(int)start
                                     withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSIntArray *)copyOfRangeWithIntArray:(IOSIntArray *)original
                                 withInt:(int)start
                                 withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSLongArray *)copyOfRangeWithLongArray:(IOSLongArray *)original
                                   withInt:(int)start
                                   withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSShortArray *)copyOfRangeWithShortArray:(IOSShortArray *)original
                                     withInt:(int)start
                                     withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSObjectArray *)copyOfRangeWithNSObjectArray:(IOSObjectArray *)original
                                         withInt:(int)start
                                         withInt:(int)end OBJC_METHOD_FAMILY_NONE;
+ (IOSObjectArray *)copyOfRangeWithNSObjectArray:(IOSObjectArray *)original
                                         withInt:(int)start
                                         withInt:(int)end
                                    withIOSClass:(IOSClass *)newType OBJC_METHOD_FAMILY_NONE;
@end

#define JavaUtilArrays_ArrayList_serialVersionUID -2764017481108945198

@interface JavaUtilArrays_ArrayList : JavaUtilAbstractList < JavaUtilList, JavaIoSerializable, JavaUtilRandomAccess > {
 @public
  IOSObjectArray *a_;
}

- (id)initWithNSObjectArray:(IOSObjectArray *)storage;
- (BOOL)containsWithId:(id)object;
- (id)getWithInt:(int)location;
- (int)indexOfWithId:(id)object;
- (int)lastIndexOfWithId:(id)object;
- (id)setWithInt:(int)location
          withId:(id)object;
- (int)size;
- (void)copyAllFieldsTo:(JavaUtilArrays_ArrayList *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilArrays_ArrayList, a_, IOSObjectArray *)

#endif // _JavaUtilArrays_H_
