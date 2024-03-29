//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TimerTask.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilTimerTask_H_
#define _JavaUtilTimerTask_H_

#import "JreEmulation.h"
#include "java/lang/Runnable.h"

@interface JavaUtilTimerTask : NSObject < JavaLangRunnable > {
 @public
  id lock_;
  BOOL cancelled_;
  long long int when_;
  long long int period_;
  BOOL fixedRate_;
  long long int scheduledTime_;
}

- (long long int)getWhen;
- (void)setScheduledTimeWithLong:(long long int)time;
- (BOOL)isScheduled;
- (id)init;
- (BOOL)cancel;
- (long long int)scheduledExecutionTime;
- (void)run;
- (void)copyAllFieldsTo:(JavaUtilTimerTask *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilTimerTask, lock_, id)

#endif // _JavaUtilTimerTask_H_
