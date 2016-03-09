//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>  // imports printf

int main()          // starting point of a program. int = returns and integer
{
    // fundamental c variable types
    int days_in_a_week=7;   // %d for the printf function
    float cm_to_in=2.54;    // %f
    char the_w='W';               // %c single alpha-numberical
    
    
    printf("%d days in a week\n", days_in_a_week);
    printf("%f cm per in\n", cm_to_in);
    printf("The %c is a cool hotel\n", the_w);
    return 0;       // because main is a function. must return an integer. 0 = concluded normally
}

