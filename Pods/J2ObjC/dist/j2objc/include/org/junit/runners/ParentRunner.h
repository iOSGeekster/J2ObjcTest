//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/runners/ParentRunner.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitRunnersParentRunner_H_
#define _OrgJunitRunnersParentRunner_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/Runnable.h"
#include "java/util/Comparator.h"
#include "org/junit/runner/Runner.h"
#include "org/junit/runner/manipulation/Filterable.h"
#include "org/junit/runner/manipulation/Sortable.h"
#include "org/junit/runners/model/RunnerScheduler.h"
#include "org/junit/runners/model/Statement.h"

@interface OrgJunitRunnersParentRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationSortable > {
 @public
  OrgJunitRunnersModelTestClass *fTestClass_;
  OrgJunitRunnerManipulationSorter *fSorter_;
  id<JavaUtilList> fFilteredChildren_;
  id<OrgJunitRunnersModelRunnerScheduler> fScheduler_;
}

- (id)initWithIOSClass:(IOSClass *)testClass;
- (id<JavaUtilList>)getChildren;
- (OrgJunitRunnerDescription *)describeChildWithId:(id)child;
- (void)runChildWithId:(id)child
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;
- (void)validatePublicVoidNoArgMethodsWithIOSClass:(IOSClass *)annotation
                                       withBoolean:(BOOL)isStatic
                                  withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateClassRulesWithJavaUtilList:(id<JavaUtilList>)errors;
- (OrgJunitRunnersModelStatement *)classBlockWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (OrgJunitRunnersModelStatement *)withBeforeClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (OrgJunitRunnersModelStatement *)withAfterClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (OrgJunitRunnersModelStatement *)withClassRulesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;
- (id<JavaUtilList>)classRules;
- (OrgJunitRunnersModelStatement *)childrenInvokerWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (void)runChildrenWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (NSString *)getName;
- (OrgJunitRunnersModelTestClass *)getTestClass;
- (void)runLeafWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement
                   withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
       withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (IOSObjectArray *)getRunnerAnnotations;
- (OrgJunitRunnerDescription *)getDescription;
- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;
- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;
- (void)validate;
- (id<JavaUtilList>)getFilteredChildren;
- (void)sortChildWithId:(id)child;
- (BOOL)shouldRunWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter
                                               withId:(id)each;
- (id<JavaUtilComparator>)comparator;
- (void)setSchedulerWithOrgJunitRunnersModelRunnerScheduler:(id<OrgJunitRunnersModelRunnerScheduler>)scheduler;
- (void)copyAllFieldsTo:(OrgJunitRunnersParentRunner *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fTestClass_, OrgJunitRunnersModelTestClass *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fSorter_, OrgJunitRunnerManipulationSorter *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fFilteredChildren_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fScheduler_, id<OrgJunitRunnersModelRunnerScheduler>)

@interface OrgJunitRunnersParentRunner_$1 : NSObject < OrgJunitRunnersModelRunnerScheduler > {
}

- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;
- (void)finished;
- (id)init;
@end

@interface OrgJunitRunnersParentRunner_$2 : OrgJunitRunnersModelStatement {
 @public
  OrgJunitRunnersParentRunner *this$0_;
  OrgJunitRunnerNotificationRunNotifier *val$notifier_;
}

- (void)evaluate;
- (id)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)capture$0;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$2, this$0_, OrgJunitRunnersParentRunner *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$2, val$notifier_, OrgJunitRunnerNotificationRunNotifier *)

@interface OrgJunitRunnersParentRunner_$3 : NSObject < JavaLangRunnable > {
 @public
  OrgJunitRunnersParentRunner *this$0_;
  id val$each_;
  OrgJunitRunnerNotificationRunNotifier *val$notifier_;
}

- (void)run;
- (id)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$
                                   withId:(id)capture$0
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)capture$1;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, this$0_, OrgJunitRunnersParentRunner *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, val$each_, id)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, val$notifier_, OrgJunitRunnerNotificationRunNotifier *)

@interface OrgJunitRunnersParentRunner_$4 : NSObject < JavaUtilComparator > {
 @public
  OrgJunitRunnersParentRunner *this$0_;
}

- (int)compareWithId:(id)o1
              withId:(id)o2;
- (id)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$;
@end

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$4, this$0_, OrgJunitRunnersParentRunner *)

#endif // _OrgJunitRunnersParentRunner_H_