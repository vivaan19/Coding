//Problem Code: FLOW007
#include <stdlib.h>
#include <stdio.h>
int main()
{
    unsigned int t, i, n, j, rem, rev=0;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        while(n != 0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        printf("%d\n",rev);
        rev=0;
    }
    return 0;
}