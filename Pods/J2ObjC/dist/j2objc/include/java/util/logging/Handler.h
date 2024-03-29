//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/logging/Handler.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilLoggingHandler_H_
#define _JavaUtilLoggingHandler_H_

@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogRecord;

#import "JreEmulation.h"

@interface JavaUtilLoggingHandler : NSObject {
 @public
  JavaUtilLoggingFormatter *formatter_;
  JavaUtilLoggingLevel *level_;
}

- (void)close;
- (void)flush;
- (JavaUtilLoggingFormatter *)getFormatter;
- (JavaUtilLoggingLevel *)getLevel;
- (BOOL)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (void)setFormatterWithJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)newFormatter;
- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;
- (id)init;
- (void)copyAllFieldsTo:(JavaUtilLoggingHandler *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilLoggingHandler, formatter_, JavaUtilLoggingFormatter *)
J2OBJC_FIELD_SETTER(JavaUtilLoggingHandler, level_, JavaUtilLoggingLevel *)

#endif // _JavaUtilLoggingHandler_H_
