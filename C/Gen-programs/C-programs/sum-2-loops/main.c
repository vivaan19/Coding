#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Till how many sum should go\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+((i*10)+i);
    }
    printf("sum=%d\n",sum);
    return 0;
}
