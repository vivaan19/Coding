#include <stdio.h>
#include <stdlib.h>

int main() // First n natural numbers
{
    int n,i,sum=0;
    printf("Till how many the sum should go\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}
