#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,r,t,c,si;

    printf("Enter Principal,rate,time respectively");
    scanf(%d%d%d,&p,&r,&t);

    c=p*r*t;
    si=c/100;

    printf("The required Simple interest is : %d",si);

}
