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
    // dictionary = key-value pair
    
    NSDictionary *book = [[NSDictionary alloc] initWithObjectsAndKeys:@"The Cat in The Hat", @"title", @"Dr. Seuss", @"author", nil];
    NSLog(@"book %@", book);
    
    
    NSDictionary *book2 = @{ @"title":@"The Cat in the Hat", @"author":@"Dr. Seuss"};
    NSLog(@"book2 %@", book2);
    
    NSString *string = [book objectForKey:@"author"]; // pulls the value
    NSLog(@"string %@", string);
    
    NSMutableDictionary *mutablebook = [NSMutableDictionary dictionaryWithDictionary:book]; // editable dictionary
    [mutablebook setObject:@1959 forKey:@"year"];
    NSLog(@"mutablebook %@", mutablebook);
    
    
    for (NSString *string in [mutablebook allKeys]) {
        NSLog(@"key %@ value %@", string, [mutablebook objectForKey:string]);
    }
    
    return 0;
}
