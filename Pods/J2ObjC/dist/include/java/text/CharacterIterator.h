//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaTextCharacterIterator_H_
#define _JavaTextCharacterIterator_H_

#import "JreEmulation.h"

#define JavaTextCharacterIterator_DONE 0xffff

@protocol JavaTextCharacterIterator < NSCopying, NSObject, JavaObject >
- (id)clone;
- (unichar)current;
- (unichar)first;
- (int)getBeginIndex;
- (int)getEndIndex;
- (int)getIndex;
- (unichar)last;
- (unichar)next;
- (unichar)previous;
- (unichar)setIndexWithInt:(int)location;
- (id)copyWithZone:(NSZone *)zone;
@end

@interface JavaTextCharacterIterator : NSObject {
}
+ (unichar)DONE;
@end

#endif // _JavaTextCharacterIterator_H_