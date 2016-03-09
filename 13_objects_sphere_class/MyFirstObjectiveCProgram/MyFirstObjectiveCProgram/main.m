//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Sphere.h"

int main()
{
    Sphere *ball = [[Sphere alloc] init];

    
    ball.radius = 34;
    NSLog(@"ball radius %f", ball.radius);
    return 0;
}



//// old
// type function_name(paramtype param1name, paramtype, param2name);
// type foo = function_name(param1, param2);

//// new
// -(type)instanceMethodWithParam1:(param1Type)param1Name andParam2:(param2Type)param2Name
// type foo = [classInstance instanceMethodWithParam1];
