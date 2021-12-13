#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, i, j, sum[n], sum1[n];
    scanf("%d",&n);
    int arr[n][2];

    for(i=0; i<n; i++) // input
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    
    
    sum[0]=0;
    sum1[0]=0;
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i != 1)
            sum[j] = sum[j] + arr[i][j];
            if(i == 1)
            sum1[j] = sum1[j] + arr[i][j];
        }
    }
    for(i=0; i<n ; i++)
    printf("%d\n",sum[i]);

    for(i=0; i<n ; i++)
    printf("%d\n",sum1[i]);

    return 0;
}