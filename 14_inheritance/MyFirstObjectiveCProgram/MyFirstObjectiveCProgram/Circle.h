//
//  Circle.h
//  MyFirstObjectiveCProgram
//
//  Created by Ethan Neff on 5/12/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "Shape.h"

@interface Circle : Shape // super class of Shape
@property(nonatomic) float radius;
-(float)area;
@end
