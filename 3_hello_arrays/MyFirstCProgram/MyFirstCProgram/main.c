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
    float number_greeks_love[3]; // max 3
    number_greeks_love[0]=3.1415;
    number_greeks_love[1]=1.6190;
    number_greeks_love[2]=1.4142;
    
    printf("PI %f\n", number_greeks_love[0]);
    printf("Golden Ratio %f\n", number_greeks_love[1]);
    printf("Square root of two %f\n", number_greeks_love[2]);
    
    int primes[] = {1, 2, 3, 4};  // declare in primes[]  initalize {...}
    printf("the first prime numbers %d %d %d %d\n", primes[0], primes[1], primes[2], primes[3]);
    
    return 0;       // because main is a function. must return an integer. 0 = concluded normally
}

