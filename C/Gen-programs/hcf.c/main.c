#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,r,HCF;
    printf("Enter two numbers c,d: \n");
    scanf("%d %d",&c,&d);

    a=(c>d) ? c:d;
    b=(d>c) ? c:d;
    while(a%b!=0)
    {
        r=a%b;
        b=r;
        a=b;

    HCF=b;
    printf("%d is the required HCF\n",HCF);
    }
    return 0;
}
