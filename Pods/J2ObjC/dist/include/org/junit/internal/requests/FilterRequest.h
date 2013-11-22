//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//
//  Created by Larry Tin <dev@goodow.com>
//

#ifndef _OrgJunitInternalRequestsFilterRequest_H_
#define _OrgJunitInternalRequestsFilterRequest_H_

@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRunner;

#import "JreEmulation.h"
#include "org/junit/runner/Request.h"

@interface OrgJunitInternalRequestsFilterRequest : OrgJunitRunnerRequest {
 @public
  OrgJunitRunnerRequest *fRequest_;
  OrgJunitRunnerManipulationFilter *fFilter_;
}

- (id)initWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)classRequest
withOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;
- (OrgJunitRunnerRunner *)getRunner;
- (void)copyAllFieldsTo:(OrgJunitInternalRequestsFilterRequest *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalRequestsFilterRequest, fRequest_, OrgJunitRunnerRequest *)
J2OBJC_FIELD_SETTER(OrgJunitInternalRequestsFilterRequest, fFilter_, OrgJunitRunnerManipulationFilter *)

#endif // _OrgJunitInternalRequestsFilterRequest_H_