//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/Assume.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitAssume_H_
#define _OrgJunitAssume_H_

@class IOSObjectArray;
@class JavaLangThrowable;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"

@interface OrgJunitAssume : NSObject {
}

+ (void)assumeTrueWithBoolean:(BOOL)b;
+ (void)assumeNotNullWithNSObjectArray:(IOSObjectArray *)objects;
+ (void)assumeThatWithId:(id)actual
  withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;
+ (void)assumeNoExceptionWithJavaLangThrowable:(JavaLangThrowable *)t;
- (id)init;
@end

#endif // _OrgJunitAssume_H_
