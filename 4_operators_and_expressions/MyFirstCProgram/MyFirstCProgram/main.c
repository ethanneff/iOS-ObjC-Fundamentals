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
    int a=9;
    printf("a %d \n",a);
    
    int c = a++;
    printf("c %d a %d \n",c,a);  // a becomes 10
    
    int d = --a; // d = a - 1
    printf("d %d a %d \n",d,a);  // a becomes 9
    
    int b = a % 4;
    printf("b %d a %d \n",b,a); // 9 / 4 = 1
    
    float fa = 5.0 / .5;
    printf("fa %f \n",fa);
    
    fa *= 10;
    printf("fa %f \n",fa);
    
    return 0;       // because main is a function. must return an integer. 0 = concluded normally
}

