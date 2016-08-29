//
//  STPShippingMethod.h
//  Stripe
//
//  Created by Ben Guo on 8/29/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface STPShippingMethod : NSObject

/**
 *  The shipping method's amount.
 */
@property (nonatomic, copy) NSDecimalNumber *amount;

/**
 *  A short, localized description of the shipping method.
 */
@property(nonatomic, copy) NSString *label;

/**
 *  A short, localized description of the shipping method's details.
 *  Use this property to differentiate the shipping methods you offer. 
 *  For example “Ships in 24 hours.” or “Arrives by 5pm on July 29.” 
 *  Don’t repeat the content of the label property.
 */
@property(nonatomic, copy) NSString *detail;

/**
 *  A unique identifier for the shipping method, used by the app.
 */
@property(nonatomic, copy) NSString *identifier;

- (instancetype)initWithPKShippingMethod:(nonnull PKShippingMethod *)method;

- (PKShippingMethod *)pkShippingMethod;

@end

NS_ASSUME_NONNULL_END
