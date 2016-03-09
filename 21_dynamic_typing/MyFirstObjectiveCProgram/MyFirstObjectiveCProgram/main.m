
#import <Cocoa/Cocoa.h>
#import "Shape.h"

int main()
{
    Shape *shape = [[Shape alloc] init];
    NSArray *mixed = @[ @23, @"tango", shape];
    NSLog(@"%@", mixed);
    for (id things in mixed) { // use id instead of NSString to grab different types
        NSLog(@"%@", things);
    }
    
    id test1 = nil;
    id test2 = @22; // NSNumber
    test2 = @"hello"; // NSString
    NSLog(@"%@ %@", test1, test2);
    
    return 0;
}
