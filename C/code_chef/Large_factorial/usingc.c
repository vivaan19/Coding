#include <stdlib.h>
#include <stdio.h>
#define MAX 500

void facto(int);
int multiply(int x, int mularr[], int mulsize);

int main()
{
    int t, n;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
      scanf("%d",&n); 
      facto(n);
      printf("\n");
    }
    return 0;
}

void facto(int n)
{
    int mularr[MAX], mulsize=1, x;
    mularr[0]=1;

    for(x=2; x<=n; x++)
    {
        mulsize=multiply(x, mularr, mulsize);
    }

    for(int i=mulsize-1; i>=0; i--)
    {
        printf("%d",mularr[i]);
    }
}

int multiply(int x, int mularr[], int mulsize)
{
    int carry=0, mulres;

    for(int i=0; i<mulsize; i++)
    {
        mulres=x*mularr[i] + carry;

        mularr[i]=mulres%10;

        carry=mulres/10;
    }

    while(carry)
    {
        mularr[mulsize]=carry%10;
        mulsize++;
        carry=carry/10;
    }

    return mulsize;
}