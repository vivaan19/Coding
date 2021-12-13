#include<stdio.h>
#include<math.h>

float c_intrest(float* p, float* r, int* t)
{
    float ci; // compound intrest

    ci = *p * pow((1+*r), *t);
    return ci;
}
float s_intrest(float *p, float *r ,int *t)
{
    float si; // simple intrest
    si= *p * *r * *t;
    return si;
}

int main(int argc, char const *argv[])
{
    int time;
    float princial, rate;
    
    printf("Enter pricipal, rate, time to find the intrest:");
    scanf("%f %f %d",&princial, &rate, &time);

    printf("The simple interest is:%f\n",s_intrest(&princial,&rate,&time));
    printf("The coumpound intrest is: %f\n",c_intrest(&princial,&rate,&time));
    return 0;
}
