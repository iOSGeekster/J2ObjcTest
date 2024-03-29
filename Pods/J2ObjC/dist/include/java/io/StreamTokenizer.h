//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaIoStreamTokenizer_H_
#define _JavaIoStreamTokenizer_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoReader;

#import "JreEmulation.h"

#define JavaIoStreamTokenizer_TOKEN_COMMENT 1
#define JavaIoStreamTokenizer_TOKEN_DIGIT 16
#define JavaIoStreamTokenizer_TOKEN_QUOTE 2
#define JavaIoStreamTokenizer_TOKEN_WHITE 4
#define JavaIoStreamTokenizer_TOKEN_WORD 8
#define JavaIoStreamTokenizer_TT_EOF -1
#define JavaIoStreamTokenizer_TT_EOL 10
#define JavaIoStreamTokenizer_TT_NUMBER -2
#define JavaIoStreamTokenizer_TT_UNKNOWN -4
#define JavaIoStreamTokenizer_TT_WORD -3

@interface JavaIoStreamTokenizer : NSObject {
 @public
  double nval_;
  NSString *sval_;
  int ttype_;
  IOSByteArray *tokenTypes_;
  int lineNumber_;
  BOOL forceLowercase_;
  BOOL isEOLSignificant_;
  BOOL slashStarComments__;
  BOOL slashSlashComments__;
  BOOL pushBackToken_;
  BOOL lastCr_;
  JavaIoInputStream *inStream_;
  JavaIoReader *inReader_;
  int peekChar_;
}

+ (int)TT_EOF;
+ (int)TT_EOL;
+ (int)TT_NUMBER;
+ (int)TT_WORD;
- (id)init;
- (id)initWithJavaIoInputStream:(JavaIoInputStream *)is;
- (id)initWithJavaIoReader:(JavaIoReader *)r;
- (void)commentCharWithInt:(int)ch;
- (void)eolIsSignificantWithBoolean:(BOOL)flag;
- (int)lineno;
- (void)lowerCaseModeWithBoolean:(BOOL)flag;
- (int)nextToken;
- (void)ordinaryCharWithInt:(int)ch;
- (void)ordinaryCharsWithInt:(int)low
                     withInt:(int)hi;
- (void)parseNumbers;
- (void)pushBack;
- (void)quoteCharWithInt:(int)ch;
- (int)read;
- (void)resetSyntax;
- (void)slashSlashCommentsWithBoolean:(BOOL)flag;
- (void)slashStarCommentsWithBoolean:(BOOL)flag;
- (NSString *)description;
- (void)whitespaceCharsWithInt:(int)low
                       withInt:(int)hi;
- (void)wordCharsWithInt:(int)low
                 withInt:(int)hi;
- (void)copyAllFieldsTo:(JavaIoStreamTokenizer *)other;
@end

J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, sval_, NSString *)
J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, tokenTypes_, IOSByteArray *)
J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, inStream_, JavaIoInputStream *)
J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, inReader_, JavaIoReader *)

#endif // _JavaIoStreamTokenizer_H_
