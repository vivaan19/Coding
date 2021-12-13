#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[]={5, 4, 3, 6, 7}, *q;
 // a stores the base address of array
    q=a;

    printf("%d\n",*(q+2));
    printf("%p\n",q);

    printf("%d\n",*a+1);
    printf("%p\n",a);
}
