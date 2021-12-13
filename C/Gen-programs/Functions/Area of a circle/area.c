#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
float area(float);
void main()
{
    float r,a;
    printf("Enter your radius:\n");
    scanf("%f",&r);

    a=area(r);
    printf("The area of circle of radius %f is %.2f\n",r,a) ;
}
float area(float x)
{
    float z = pie*x*x;
    return z;
}

