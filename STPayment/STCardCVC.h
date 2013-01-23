//
//  STCardCVC.h
//  STPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "STCardType.h"

@interface STCardCVC : NSObject {
    @private
    NSString* _number;
}

+ (id)cardCVCWithString:(NSString *)string;
- (id)initWithString:(NSString *)string;
- (NSString*)string;
- (BOOL)isValid;
- (BOOL)isValidWithType:(STCardType)type;
- (BOOL)isPartiallyValid;

@end