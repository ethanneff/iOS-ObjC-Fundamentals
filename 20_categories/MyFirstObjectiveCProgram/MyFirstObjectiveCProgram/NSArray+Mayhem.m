//
//  NSArray+Mayhem.m
//  MyFirstObjectiveCProgram
//
//  Created by Ethan Neff on 5/13/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "NSArray+Mayhem.h"

@implementation NSArray (Mayhem)
-(NSArray *)capitalizeStrings {
    NSMutableArray *cap = [NSMutableArray array];
    for (NSString *string in self) {
        [cap addObject:[string capitalizedString]];
    }
    return cap;
}



@end
