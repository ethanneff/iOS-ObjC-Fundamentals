#include <stdio.h>

// struct is a structure (your own unique data type)
typedef struct {
    float center[3];
    float radius;
} Sphere;

// function outputting the new data type we created
Sphere makeSphere(float *c, float r); // pass an array with the *star notation (not a pointer)

int main()
{
    float c[] = { 23, 24, 25};
    float r = 30;
    
    Sphere ball = makeSphere(c,r);
    
    printf("center %f %f %f radius %f\n", ball.center[0],ball.center[1],ball.center[2],ball.radius);
    return 0;
}

Sphere makeSphere(float *c, float r) {
    Sphere sphere;
    sphere.center[0] = c[0];
    sphere.center[1] = c[1];
    sphere.center[2] = c[2];
    sphere.radius = r;
    return sphere;
}