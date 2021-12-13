#include <stdlib.h>
#include <stdio.h>
// combinations of a number to sum with target number
int main()
{
    int n, i, j, sum=0, t;

    printf("Size of array:");
    scanf("%d",&n);

    printf("Target number:");
    scanf("%d",&t);
    
    int a[n];

    for(i=0; i<n ;i++)
    {
        sum=sum+a[i];
    }

    if(sum < t)
    printf("No possible combinations\n");
    
    else
    {
        
    }
    
    return 0;
}