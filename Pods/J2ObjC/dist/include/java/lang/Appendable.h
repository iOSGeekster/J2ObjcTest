//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaLangAppendable_H_
#define _JavaLangAppendable_H_

@protocol JavaLangCharSequence;

#import "JreEmulation.h"

@protocol JavaLangAppendable < NSObject, JavaObject >
- (id<JavaLangAppendable>)appendWithChar:(unichar)c;
- (id<JavaLangAppendable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;
- (id<JavaLangAppendable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                                 withInt:(int)start
                                                 withInt:(int)end;
@end

#endif // _JavaLangAppendable_H_