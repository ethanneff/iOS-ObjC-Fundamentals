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
    printf("Hello, World!\n");
    
    
    char x[] = "HELLO())(";
    printf("%s\n",x);
    int left = 0;
    int right = 0;

    for (int i=0; i < sizeof(x)-1;i++) {
        if (x[i]=='(') {
            left++;
        }
        if (x[i]==')') {
            right++;
            if (right > left) return 0;
        }
    }
    if (left==0 && right== 0) return 2;
    if (left==right) return 1;
    return 0;
    
//    printf("%c\n", x[i]);
    
      // because main is a function. must return an integer. 0 = concluded normally
}

