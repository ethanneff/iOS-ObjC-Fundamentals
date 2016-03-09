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
    // for loop
    int many[] = {2,4,8};
    int sum = 0;
    for (int i=0; i < 3; i++) {
        sum += many[i];
        printf("i %d sum %d\n",i, sum);
    }
    printf("\n");
    
    // while do loop
    char letters[] = {'a', 'b', 'c'};
    int w = 0;
    while (w < 3) {
        printf("letter %d is %c\n", w, letters[w]);
        w++;
    }
    printf("\n");
    
    w = 0;
    // do while loop
    do {
        printf("letter %d is %c\n", w, letters[w]);
        w++;
    } while (w < 3);
    return 0;
}

