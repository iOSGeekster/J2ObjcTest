//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaUtilDate_H_
#define _JavaUtilDate_H_

@class IOSObjectArray;
@class JavaLangIllegalArgumentException;
@class JavaLangStringBuilder;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#define JavaUtilDate_serialVersionUID 7523967970034938905

@interface JavaUtilDate : NSObject < JavaIoSerializable, NSCopying, JavaLangComparable > {
 @public
  long long int milliseconds_;
}

+ (int)CREATION_YEAR;
- (id)init;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day
          withInt:(int)hour
          withInt:(int)minute;
- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day
          withInt:(int)hour
          withInt:(int)minute
          withInt:(int)second;
- (id)initWithLong:(long long int)milliseconds;
- (id)initWithNSString:(NSString *)string;
- (BOOL)afterWithJavaUtilDate:(JavaUtilDate *)date;
- (BOOL)beforeWithJavaUtilDate:(JavaUtilDate *)date;
- (id)clone;
- (int)compareToWithId:(JavaUtilDate *)date;
- (BOOL)isEqual:(id)object;
- (int)getDate;
- (int)getDay;
- (int)getHours;
- (int)getMinutes;
- (int)getMonth;
- (int)getSeconds;
- (long long int)getTime;
- (int)getTimezoneOffset;
- (int)getYear;
- (NSUInteger)hash;
+ (int)parseWithNSString:(NSString *)string
       withNSStringArray:(IOSObjectArray *)array;
+ (JavaLangIllegalArgumentException *)parseErrorWithNSString:(NSString *)string;
+ (long long int)parseWithNSString:(NSString *)string;
- (void)setDateWithInt:(int)day;
- (void)setHoursWithInt:(int)hour;
- (void)setMinutesWithInt:(int)minute;
- (void)setMonthWithInt:(int)month;
- (void)setSecondsWithInt:(int)second;
- (void)setTimeWithLong:(long long int)milliseconds;
- (void)setYearWithInt:(int)year;
- (NSString *)toGMTString;
- (NSString *)toLocaleString;
- (NSString *)description;
+ (void)appendTwoDigitsWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                                         withInt:(int)n;
+ (long long int)UTCWithInt:(int)year
                    withInt:(int)month
                    withInt:(int)day
                    withInt:(int)hour
                    withInt:(int)minute
                    withInt:(int)second;
+ (int)zoneWithNSString:(NSString *)text;
- (id)copyWithZone:(NSZone *)zone;
- (void)copyAllFieldsTo:(JavaUtilDate *)other;
@end

#endif // _JavaUtilDate_H_
