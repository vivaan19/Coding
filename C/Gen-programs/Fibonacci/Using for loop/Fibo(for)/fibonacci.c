#include <stdio.h>
#include <stdlib.h>
// Program to demostrate fibonacci series

int main()
{
    int n,t1=0,t2=1,i,nt;
    printf("How many terms till print ?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        // First printing the value of t1
        printf("%d ,",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
}
