#include <stdio.h>

int main()
{
    float number[] = {1.11,3.21321,4.00};
    printf("float %ld bytes\n", sizeof(float));
    printf("numbers %ld bytes\n", sizeof(number));
    printf("array length %ld\n", sizeof(number)/sizeof(float));
    return 0;
}

