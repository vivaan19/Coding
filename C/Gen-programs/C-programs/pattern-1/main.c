#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    /*
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    /*
    i=1; // Initiation of i
    while(i<=4)
    {
        j=1;    // Initiation of j
        while(j<=i)
        {
            printf("*");
            j++;    // Incrementation of j
        }
        i++; // Incrementation of i
        printf("\n");
    }
    */
    i=1; // Initiation of i
    do{
            j=1; // Initiation of j
        do{
            printf("*");
            j++;      // Incrementation of j
        }while(j<=i); // condition of j
        i++;          // Incrementation of i
    printf("\n");
    }while(i<=4);   // Condition of i
    return 0;
}
