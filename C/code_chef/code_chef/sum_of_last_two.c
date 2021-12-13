#include <stdlib.h>
#include <stdio.h>
// Problem Code: FLOW004
unsigned long sum_lasttwo(unsigned long *p)
{
    unsigned long rem, count=0, sum=0;
    while(*p != 0)
        {
            rem=*p%10;
            count++;
            if(count == 1)
             sum=sum+rem;
            *p=*p/10;
        }
        sum=sum+rem;
        return sum;

}

int main()
{
    unsigned long t, *a, i;
    
    scanf("%d",&t);

    a= (unsigned long *)malloc(t*sizeof(unsigned long));

    //sum=0;
    //count=0;
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);

        printf("sum=%d\n",sum_lasttwo(&a[i]));

    }

    return 0;
}