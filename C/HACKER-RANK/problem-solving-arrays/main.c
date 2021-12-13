#include <stdio.h>
#include <stdlib.h>

#define max 1000

// Array reversal through functions with return value.

int reverseArray(int a[max],int ar[max], int, int);

int main()
{
    int a[max], ar[max],n[max], e, i, count=0;
    scanf("%d",&e);

    for(i=0; i<e; i++)
        scanf("%d",&a[i]);

    for(i=0; i<e; i++)
    {
    n[i]=reverseArray(a, ar, e, count);
    count++;
    printf("%d ",n[i]);
    }


}

int reverseArray(int a[max], int ar[max], int e, int j)
{
    while(j != e)
    {
        ar[j]=a[e-1-j];
        return ar[j];
    }
}
