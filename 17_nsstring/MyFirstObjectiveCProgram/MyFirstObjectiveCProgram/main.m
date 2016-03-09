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
    NSString *alpha = @"hello";   // string literal
    NSString *beta = @"world";
    NSLog(@"%@ %@", alpha, beta);
    
    // string method
    NSString *concat = [[alpha stringByAppendingString:beta] stringByAppendingString:@"lots more"];
    NSLog(@"muahaha %@", concat);
    
    NSString *upper = [alpha uppercaseString];
    NSLog(@"upper %@", upper);
    
    return 0;
}
