//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangSystem_H_
#define _JavaLangSystem_H_

@class JavaIoInputStream;
@class JavaIoPrintStream;
@class JavaLangSecurityManager;
@class JavaLangThrowable;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@class JavaUtilProperties;

#import "JreEmulation.h"

@interface JavaLangSystem : NSObject {
}

+ (JavaUtilProperties *)props;
+ (void)setProps:(JavaUtilProperties *)props;
+ (JavaIoInputStream *)in;
+ (JavaIoPrintStream *)out;
+ (JavaIoPrintStream *)err;
+ (JavaUtilLoggingLogger *)systemLogger;
+ (void)setSystemLogger:(JavaUtilLoggingLogger *)systemLogger;
+ (void)setInWithJavaIoInputStream:(JavaIoInputStream *)newIn;
+ (void)setOutWithJavaIoPrintStream:(JavaIoPrintStream *)newOut;
+ (void)setErrWithJavaIoPrintStream:(JavaIoPrintStream *)newErr;
+ (long long int)currentTimeMillis;
+ (int)identityHashCodeWithId:(id)anObject;
+ (void)arraycopyWithId:(id)src
                withInt:(int)srcPos
                 withId:(id)dest
                withInt:(int)destPos
                withInt:(int)length;
+ (long long int)nanoTime;
+ (void)exitWithInt:(int)status;
+ (JavaUtilProperties *)getProperties;
+ (void)setSystemPropertiesWithJavaUtilProperties:(JavaUtilProperties *)props;
+ (NSString *)getPropertyWithNSString:(NSString *)key;
+ (NSString *)getPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)defaultValue;
+ (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)value;
+ (void)setPropertiesWithJavaUtilProperties:(JavaUtilProperties *)properties;
+ (NSString *)clearPropertyWithNSString:(NSString *)key;
+ (JavaLangSecurityManager *)getSecurityManager;
+ (NSString *)lineSeparator;
+ (void)logEWithNSString:(NSString *)message;
+ (void)logEWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;
+ (void)logIWithNSString:(NSString *)message;
+ (void)logIWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;
+ (void)logWWithNSString:(NSString *)message;
+ (void)logWWithNSString:(NSString *)message
   withJavaLangThrowable:(JavaLangThrowable *)th;
+ (void)logWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level
                       withNSString:(NSString *)message
              withJavaLangThrowable:(JavaLangThrowable *)thrown;
- (id)init;
@end

#endif // _JavaLangSystem_H_
