//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
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