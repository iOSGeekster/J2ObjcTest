//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/matchers/IsCollectionContaining.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalMatchersIsCollectionContaining_H_
#define _OrgJunitInternalMatchersIsCollectionContaining_H_

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/junit/internal/matchers/TypeSafeMatcher.h"

@interface OrgJunitInternalMatchersIsCollectionContaining : OrgJunitInternalMatchersTypeSafeMatcher {
 @public
  id<OrgHamcrestMatcher> elementMatcher_;
}

- (id)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher;
- (BOOL)matchesSafelyWithId:(id<JavaLangIterable>)collection;
- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;
+ (id<OrgHamcrestMatcher>)hasItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher;
+ (id<OrgHamcrestMatcher>)hasItemWithId:(id)element;
+ (id<OrgHamcrestMatcher>)hasItemsWithOrgHamcrestMatcherArray:(IOSObjectArray *)elementMatchers;
+ (id<OrgHamcrestMatcher>)hasItemsWithNSObjectArray:(IOSObjectArray *)elements;
- (void)copyAllFieldsTo:(OrgJunitInternalMatchersIsCollectionContaining *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalMatchersIsCollectionContaining, elementMatcher_, id<OrgHamcrestMatcher>)

#endif // _OrgJunitInternalMatchersIsCollectionContaining_H_
