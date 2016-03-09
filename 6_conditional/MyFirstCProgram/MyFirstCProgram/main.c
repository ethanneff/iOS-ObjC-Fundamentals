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
    
    int a = 11;
    int b = 9;
    int min = 0;
    char min_value;
    
    if (a < b) {
        min = a;
        min_value = 'a';
    } else {
        min = b;
        min_value = 'b';
        
    }
    printf("%c %d is the minimum value\n", min_value, min);
    
    
    char e = 'e';
    char f = 'f';
    char g = 'g';
    
    char letter = 'b';
    if (letter == e) printf("letter %c is %c\n", letter, e);
    else if (letter == f) printf("letter %c is %c\n", letter, f);
    else if (letter == g) printf("letter %c is %c\n", letter, g);
    else printf("letter %c is not found\n", letter);
    
    return 0;
}

