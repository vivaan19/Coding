#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,c;
    printf("enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=n%i;
        if(k==0)
        {
            c++;
        }
        k=0;
    }
    if(c==2)
    {
        printf("Prime Number",n);
    }
}
