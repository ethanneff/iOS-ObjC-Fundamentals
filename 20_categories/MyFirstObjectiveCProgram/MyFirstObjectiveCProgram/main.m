//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSArray+Mayhem.h"

int main()
{
    NSArray *letters = @[ @"alpha", @"beta", @"charlie"];
    NSLog(@"%@",letters);
    
    // how to capitalize manually
    NSMutableArray *cap = [NSMutableArray array];
    for (NSString *string in letters) {
        [cap addObject:[string capitalizedString]];
    }
    NSLog(@"%@",cap);
    
    // how to capitalize with a category (a custom method made within a pre-defined class)
    NSLog(@"%@",[cap capitalizeStrings]);
    
    return 0;
}
