#include <stdio.h>
#include <stdlib.h>
int main()
{
    double ram[50],large,small;
    int i,num;
    printf("Enter the number of elements:\n");
    scanf("%d",&num);
    printf("\nInput the array elements:\n");
    for(i=0;i<num;++i)
        {
            scanf("%lf",&ram[i]);
        }
    large=small=ram[0];

    for(i=1;i<num;++i)
    {
        if(ram[i]>large)
            large=ram[i];

        if(ram[i]<small)
            small=ram[i];
    }

    printf("The smallest element is %lf\n",small);
    printf("The largest element is %lf\n",large);
}
