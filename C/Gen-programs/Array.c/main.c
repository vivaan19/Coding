#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[4],j;
    int i;
    printf("Enter your marks in the array\n");
    for(i=0;i<=3;i++)
    {
        scanf("%f",&a[i]);t
    }
    j=a[0];
    for(i=0;i<=3;i++)
    {
        if(a[i]>j)
            {
                j=a[i];
            }
    }
    printf("The highest marks is %f",j);
}
