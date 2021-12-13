#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,sum,minus,pro,quo,rem;
    printf("Enter two values\n");
    scanf("%d%d",&a,&b);

    sum=a+b;
    minus=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;

    printf("SUM = %d\nSUB=%d\nPRO=%d\nQUO=%d\nREM=%d\n",sum,minus,pro,quo,rem);
}
