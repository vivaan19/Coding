#include<stdio.h>

int add(float *, float *, int *);

int main(int argc, char const *argv[])
{
    float a, b;
    int c;

    printf("Enter first number:");
    scanf("%f",&a);

    printf("Enter second number:");
    scanf("%f",&b);
    printf("Value of a:%f\n",a);
    
    printf("Value of b:%f\n",b);
    
    printf("The value of addition is %d\n",add(&a, &b, &c));
    
    return 0;
}

int add(float *a,float *b,int *c)
{
    *c = *a + *b;
    return *c;
}
