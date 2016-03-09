//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int funky_math(int a, int b); // declare (have to since main() is at the top

int main()
{
    int foo = 24;
    int bar = 35;
    int lots = funky_math(foo, bar) + funky_math(foo, 22);
    printf("the number is %d\n", lots);
    return 0;
}

int funky_math(int a, int b) {  // initalize (implementation)
    return a + b + 342;
}
