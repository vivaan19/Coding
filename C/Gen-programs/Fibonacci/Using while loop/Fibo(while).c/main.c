#include <stdio.h>
#include <stdlib.h>

void main()
{
    int t1=0,t2=1,nt=0,n,i; // nt=next term;t1=first term;t2=second term
    // Till how many times to print the series

    printf("How many times to print ?\n");
    scanf("%d",&n);

    // printing t1 and t2 first

    printf("%d, %d ,",t1,t2);
    nt=t1+t2;

    while(nt<=n);
    {
        printf("%d ,",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }

}
