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
    NSArray *foo = [[NSArray alloc] initWithObjects:@"f", @"o", @"o", nil]; // alloc init approach
    NSArray *foo2 = @[@"f", @"o", @"o"]; // literal way (not mutable... cannot editable)
    
    NSLog(@"foo %@", foo);
    NSLog(@"foo %@", foo2);
    
    for (NSString *string in foo) {
        NSLog(@"%@", string);
    }
    
    NSString *thang = foo[2];
    NSLog(@"%@", thang);
    

    NSMutableArray *lots = [[NSMutableArray alloc] init]; // editable array declare
    lots[0] = @"bravo";
    lots[1] = @"lima";
    lots[2] = @"charlie";
    NSLog(@"%@", lots);

    [lots removeObjectAtIndex:1];
    NSLog(@"%@", lots);
    
    NSMutableArray *lots2 = [ @[ @"hahah", @"uahahah"] mutableCopy]; // mutable literal
    NSLog(@"%@", lots2);
    
    
    NSArray *booksArray = [NSArray arrayWithObjects:@"Hamlet", @"King Lear", @"Orthello", @"Macbeth", nil];
    NSString *bookTitle = [booksArray objectAtIndex:3];
    bookTitle = [bookTitle uppercaseString];
    NSLog(@"%@", bookTitle );
    return 0;
}
