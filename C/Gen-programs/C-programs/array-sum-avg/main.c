#include <stdio.h>
#include <stdlib.h>

void main()
{
    float ram[100],sum=0.0;
    int i,n;

    printf("Enter the number of elements you want to insert\n");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter element %d:\n",i + 1);
        scanf("%f", &ram[i]);
        sum=sum+ram[i];
    }
    printf("Sum : %f\n",sum);
    printf("Average=%f",sum/n);

}
