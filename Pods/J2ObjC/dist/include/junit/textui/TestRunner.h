//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JunitTextuiTestRunner_H_
#define _JunitTextuiTestRunner_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaLangThrowable;
@class JunitFrameworkTestResult;
@class JunitTextuiResultPrinter;
@protocol JunitFrameworkTest;

#import "JreEmulation.h"
#include "junit/runner/BaseTestRunner.h"

#define JunitTextuiTestRunner_EXCEPTION_EXIT 2
#define JunitTextuiTestRunner_FAILURE_EXIT 1
#define JunitTextuiTestRunner_SUCCESS_EXIT 0

@interface JunitTextuiTestRunner : JunitRunnerBaseTestRunner {
 @public
  JunitTextuiResultPrinter *fPrinter_;
}

+ (int)SUCCESS_EXIT;
+ (int)FAILURE_EXIT;
+ (int)EXCEPTION_EXIT;
- (id)init;
- (id)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;
- (id)initWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;
+ (void)runWithIOSClass:(IOSClass *)testClass;
+ (JunitFrameworkTestResult *)runWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
+ (void)runAndWaitWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite;
- (void)testFailedWithInt:(int)status
   withJunitFrameworkTest:(id<JunitFrameworkTest>)test
    withJavaLangThrowable:(JavaLangThrowable *)t;
- (void)testStartedWithNSString:(NSString *)testName;
- (void)testEndedWithNSString:(NSString *)testName;
- (JunitFrameworkTestResult *)createTestResult;
- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite
                                              withBoolean:(BOOL)wait;
- (void)pauseWithBoolean:(BOOL)wait;
+ (void)mainWithNSStringArray:(IOSObjectArray *)args;
- (JunitFrameworkTestResult *)startWithNSStringArray:(IOSObjectArray *)args;
- (JunitFrameworkTestResult *)runSingleMethodWithNSString:(NSString *)testCase
                                             withNSString:(NSString *)method
                                              withBoolean:(BOOL)wait;
- (void)runFailedWithNSString:(NSString *)message;
- (void)setPrinterWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;
- (void)copyAllFieldsTo:(JunitTextuiTestRunner *)other;
@end

J2OBJC_FIELD_SETTER(JunitTextuiTestRunner, fPrinter_, JunitTextuiResultPrinter *)

#endif // _JunitTextuiTestRunner_H_
