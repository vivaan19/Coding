#include<stdio.h>
// Program to print the count of even numbers bet 1-200, also print their sum

void count_even(int *, int *);

int main(int argc, char const *argv[])
{
    int count=0, sum=0;

    count_even(&count, &sum);

    printf("Total even numbers:%d\n",count);
    printf("Sum of all even numbers:%d\n",sum);
    return 0;
}

void count_even(int *c, int *s)
{
    // The main logic

    int i;
    for(i=1; i<=10; i++)
    {
        if(i%2 == 0)
        {
            (*c)++;
            *s+=i;
        }
    }
}