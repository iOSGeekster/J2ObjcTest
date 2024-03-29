//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/junit/framework/TestListener.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JunitFrameworkTestListener_H_
#define _JunitFrameworkTestListener_H_

@class JavaLangThrowable;
@class JunitFrameworkAssertionFailedError;
@protocol JunitFrameworkTest;

#import "JreEmulation.h"

@protocol JunitFrameworkTestListener < NSObject, JavaObject >
- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)t;
- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;
- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
@end

#endif // _JunitFrameworkTestListener_H_
