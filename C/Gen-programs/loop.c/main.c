#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    printf("\tEnter two numbers other than -1\n");
    scanf("%d %d",&a,&b);


    while(a&&b!=-1)
    {
        sum=a+b;
        printf("If the numbers are other than -1 then the sum = %d\n",sum);
    }
    printf("If you entered number with -1 the sum is not printed\n");
    return 0;
}
