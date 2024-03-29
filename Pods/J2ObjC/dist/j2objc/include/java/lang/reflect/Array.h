//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Array.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangReflectArray_H_
#define _JavaLangReflectArray_H_

@class IOSClass;
@class IOSIntArray;
@class JavaLangIllegalArgumentException;
@class JavaLangRuntimeException;

#import "JreEmulation.h"

@interface JavaLangReflectArray : NSObject {
}

- (id)init;
+ (JavaLangIllegalArgumentException *)notAnArrayWithId:(id)o;
+ (JavaLangIllegalArgumentException *)incompatibleTypeWithId:(id)o;
+ (JavaLangRuntimeException *)badArrayWithId:(id)array;
+ (id)getWithId:(id)array
        withInt:(int)index;
+ (BOOL)getBooleanWithId:(id)array
                 withInt:(int)index;
+ (char)getByteWithId:(id)array
              withInt:(int)index;
+ (unichar)getCharWithId:(id)array
                 withInt:(int)index;
+ (double)getDoubleWithId:(id)array
                  withInt:(int)index;
+ (float)getFloatWithId:(id)array
                withInt:(int)index;
+ (int)getIntWithId:(id)array
            withInt:(int)index;
+ (int)getLengthWithId:(id)array;
+ (long long int)getLongWithId:(id)array
                       withInt:(int)index;
+ (short int)getShortWithId:(id)array
                    withInt:(int)index;
+ (id)newInstanceWithIOSClass:(IOSClass *)componentType
                 withIntArray:(IOSIntArray *)dimensions OBJC_METHOD_FAMILY_NONE;
+ (id)createMultiArrayWithIOSClass:(IOSClass *)componentType
                      withIntArray:(IOSIntArray *)dimensions;
+ (id)newInstanceWithIOSClass:(IOSClass *)componentType
                      withInt:(int)size OBJC_METHOD_FAMILY_NONE;
+ (id)createObjectArrayWithIOSClass:(IOSClass *)componentType
                            withInt:(int)length;
+ (void)setWithId:(id)array
          withInt:(int)index
           withId:(id)value;
+ (void)setBooleanWithId:(id)array
                 withInt:(int)index
             withBoolean:(BOOL)value;
+ (void)setByteWithId:(id)array
              withInt:(int)index
             withByte:(char)value;
+ (void)setCharWithId:(id)array
              withInt:(int)index
             withChar:(unichar)value;
+ (void)setDoubleWithId:(id)array
                withInt:(int)index
             withDouble:(double)value;
+ (void)setFloatWithId:(id)array
               withInt:(int)index
             withFloat:(float)value;
+ (void)setIntWithId:(id)array
             withInt:(int)index
             withInt:(int)value;
+ (void)setLongWithId:(id)array
              withInt:(int)index
             withLong:(long long int)value;
+ (void)setShortWithId:(id)array
               withInt:(int)index
             withShort:(short int)value;
@end

#endif // _JavaLangReflectArray_H_
