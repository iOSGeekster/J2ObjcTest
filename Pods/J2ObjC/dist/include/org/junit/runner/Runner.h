//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitRunnerRunner_H_
#define _OrgJunitRunnerRunner_H_

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

#import "JreEmulation.h"
#include "org/junit/runner/Describable.h"

@interface OrgJunitRunnerRunner : NSObject < OrgJunitRunnerDescribable > {
}

- (OrgJunitRunnerDescription *)getDescription;
- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;
- (int)testCount;
- (id)init;
@end

#endif // _OrgJunitRunnerRunner_H_