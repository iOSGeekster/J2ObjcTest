//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaTextCollationKey_H_
#define _JavaTextCollationKey_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"

@interface JavaTextCollationKey : NSObject < JavaLangComparable > {
 @public
  NSString *source_;
}

- (id)initWithNSString:(NSString *)source;
- (int)compareToWithId:(JavaTextCollationKey *)value;
- (NSString *)getSourceString;
- (IOSByteArray *)toByteArray;
- (void)copyAllFieldsTo:(JavaTextCollationKey *)other;
@end

J2OBJC_FIELD_SETTER(JavaTextCollationKey, source_, NSString *)

#endif // _JavaTextCollationKey_H_