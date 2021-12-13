#include <stdio.h>
#include <stdlib.h>

int main() // first squared n numbers
{
    int n,i,sum=0;
    printf("Till how many to sum\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum= %d\n",sum);
    return 0;
}
