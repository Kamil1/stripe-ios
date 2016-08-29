//
//  STPShippingMethod.m
//  Stripe
//
//  Created by Ben Guo on 8/29/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import "STPShippingMethod.h"

@implementation STPShippingMethod

- (instancetype)initWithPKShippingMethod:(nonnull PKShippingMethod *)method {
    self = [super init];
    if (self) {
        self.amount = method.amount;
        self.label = method.label;
        self.detail = method.detail;
        self.identifier = method.identifier;
    }
    return self;
}

- (PKShippingMethod *)pkShippingMethod {
    PKShippingMethod *method = [[PKShippingMethod alloc] init];
    method.amount = self.amount;
    method.label = self.label;
    method.detail = self.detail;
    method.identifier = self.identifier;
    return method;
}

@end
