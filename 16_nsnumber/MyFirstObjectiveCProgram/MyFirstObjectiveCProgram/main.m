//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

int main()
{
    NSNumber *mike;                                  // declare
    mike = [[NSNumber alloc] initWithInt:23];        // initalize as int
    NSLog(@"mike %@", mike);
    
    mike = @54;                                     // change value
    NSLog(@"mike %@", mike);
    
    NSNumber *pi = @3.145;
    NSLog(@"pi %@", pi);
    
    NSNumber *fancy = [NSNumber numberWithFloat:1231.123123];
    NSLog(@"fancy %@", fancy);
    
    
    
    return 0;
}
