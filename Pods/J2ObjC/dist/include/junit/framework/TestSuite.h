//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JunitFrameworkTestSuite_H_
#define _JunitFrameworkTestSuite_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@class JavaLangThrowable;
@class JavaUtilVector;
@class JunitFrameworkTestResult;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "junit/framework/Test.h"
#include "junit/framework/TestCase.h"

@interface JunitFrameworkTestSuite : NSObject < JunitFrameworkTest > {
 @public
  NSString *fName_;
  JavaUtilVector *fTests_;
}

+ (id<JunitFrameworkTest>)createTestWithIOSClass:(IOSClass *)theClass
                                    withNSString:(NSString *)name;
+ (JavaLangReflectConstructor *)getTestConstructorWithIOSClass:(IOSClass *)theClass;
+ (id<JunitFrameworkTest>)warningWithNSString:(NSString *)message;
+ (NSString *)exceptionToStringWithJavaLangThrowable:(JavaLangThrowable *)t;
- (id)init;
- (id)initWithIOSClass:(IOSClass *)theClass;
- (void)addTestsFromTestCaseWithIOSClass:(IOSClass *)theClass;
- (id)initWithIOSClass:(IOSClass *)theClass
          withNSString:(NSString *)name;
- (id)initWithNSString:(NSString *)name;
- (id)initWithIOSClassArray:(IOSObjectArray *)classes;
- (id<JunitFrameworkTest>)testCaseForClassWithIOSClass:(IOSClass *)each;
- (id)initWithIOSClassArray:(IOSObjectArray *)classes
               withNSString:(NSString *)name;
- (void)addTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
- (void)addTestSuiteWithIOSClass:(IOSClass *)testClass;
- (int)countTestCases;
- (NSString *)getName;
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;
- (void)runTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
         withJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;
- (void)setNameWithNSString:(NSString *)name;
- (id<JunitFrameworkTest>)testAtWithInt:(int)index;
- (int)testCount;
- (id<JavaUtilEnumeration>)tests;
- (NSString *)description;
- (void)addTestMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)m
                              withJavaUtilList:(id<JavaUtilList>)names
                                  withIOSClass:(IOSClass *)theClass;
- (BOOL)isPublicTestMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)m;
- (BOOL)isTestMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)m;
- (void)copyAllFieldsTo:(JunitFrameworkTestSuite *)other;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkTestSuite, fName_, NSString *)
J2OBJC_FIELD_SETTER(JunitFrameworkTestSuite, fTests_, JavaUtilVector *)

@interface JunitFrameworkTestSuite_$1 : JunitFrameworkTestCase {
 @public
  NSString *val$message_;
}

- (void)runTest;
- (id)initWithNSString:(NSString *)arg$0
          withNSString:(NSString *)capture$0;
@end

J2OBJC_FIELD_SETTER(JunitFrameworkTestSuite_$1, val$message_, NSString *)

#endif // _JunitFrameworkTestSuite_H_
