#include<stdio.h>
int integer_right_most(float *);

int main(int argc, char const *argv[])
{
    /* code */
    float a;
    printf("Enter a number:");
    scanf("%f",&a);

    printf("The right most integral part of %f number is %d\n",a,integer_right_most(&a));
    return 0;
}

int integer_right_most(float *a)
{
    int d;
    d=(int)*a;
    
    d=d%10;
    return d;
}