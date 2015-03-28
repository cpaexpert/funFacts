//
//  FactBook.h
//  FunFacts
//
//  Created by {} on 3/18/15.
//  Copyright (c) 2015 Appalicious. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *) randomFact;

@end
