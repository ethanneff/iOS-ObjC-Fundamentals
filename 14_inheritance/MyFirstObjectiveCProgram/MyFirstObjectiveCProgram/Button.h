//
//  Button.h
//  MyFirstObjectiveCProgram
//
//  Created by Ethan Neff on 5/12/14.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Shape; // instead of import, b/c only referring, not importing

@interface Button : NSObject
@property(nonatomic,strong) Shape *shape;  // a component

@end
