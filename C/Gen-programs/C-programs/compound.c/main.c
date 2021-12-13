#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float p,r,t,a,ci,div,div1;
    printf("Enter P,R,T\n");
    scanf("%f%f%f",&p,&r,&t);
    div=r/100;
    div1=1+div;
    a=p*pow(div1,t);
    ci=a-p;
    printf("Amount = %f\n");
    printf("CI= %f\n",ci);
    return 0;
}
