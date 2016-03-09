#include <stdio.h>


void increment(int *x);

int main()
{
    char x = 'x';
    char y = x;     // only locks x value above
    char *z = &x;   // locks into any change of x throughout the program (b/c looks at the address in memory)
    
    printf("%c %c %c \n", x, y, *z);
    
    x = 'z';
    printf("%c %c %c \n", x, y, *z);
    
    printf("\n");
    
    
    
    
    char c = 'k';
    char *letter; // pointer
    letter = &c;  // pointing at the address of c
    printf("letter %c pointer %c\n", c, *letter);
    
    c = 'q';
    printf("letter %c pointer %c\n", c, *letter); // *letter tracks that value
    
    char eldridge[] = "eldridge";
    letter = &eldridge[3];
    printf("%c is in the array pointer %s\n", *letter, eldridge);
    
    letter++;
    printf("%c is in the array pointer %s\n", *letter, eldridge);

    printf("\n");
    int i = 100;    // primative (static) integer variable (i = value) (&i = address)
    int *j = &i;    // pointer                             (*j = value) (j = address)
    printf("int i   %d address %p \npointer %d address %p \n", i, &i, *j, j); //%p address

    increment(&i); // pass the address
    printf("i equals %d \n", i);
    return 0;
}

// since passing a pointer, dont need to reutn anything
void increment(int *x) { //f unction with an integer pointer paramenter
    printf("address of x %p \n", x);
    *x = *x + 1;
}