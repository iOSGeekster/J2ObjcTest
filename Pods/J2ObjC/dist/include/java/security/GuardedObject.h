//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _JavaSecurityGuardedObject_H_
#define _JavaSecurityGuardedObject_H_

@protocol JavaSecurityGuard;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaSecurityGuardedObject_serialVersionUID -5240450096227834308

@interface JavaSecurityGuardedObject : NSObject < JavaIoSerializable > {
 @public
  id object_;
  id<JavaSecurityGuard> guard_;
}

- (id)initWithId:(id)object
withJavaSecurityGuard:(id<JavaSecurityGuard>)guard;
- (id)getObject;
- (void)copyAllFieldsTo:(JavaSecurityGuardedObject *)other;
@end

J2OBJC_FIELD_SETTER(JavaSecurityGuardedObject, object_, id)
J2OBJC_FIELD_SETTER(JavaSecurityGuardedObject, guard_, id<JavaSecurityGuard>)

#endif // _JavaSecurityGuardedObject_H_
