#include<stdio.h>

void prime(int *m, int * n)
{
    int count,i, j;

    for(i=*m; i<=*n; i++)
    {
        count=0;

        for(j=1; j<=*n; j++)
        {
            if(i%j == 0)
            count++;
        }
        if(count == 2)
        printf("%d\n",i);
    }
}

int main(int argc, char const *argv[])
{
    int r1, r2;
    printf("Enter a given range:");
    scanf("%d %d",&r1,&r2);

    printf("Your range:[%d,%d]\n",r1,r2);

    printf("These are the required prime numbers in the given range\n");
    prime(&r1, &r2);  
    return 0;
}
