#include<stdio.h>

int small_three(int *a, int *b, int* c)
{
    if(*a < *b)
    {
        if(*a < *c)
        {
            return *a;
        }
        else
        {
            return *c;
        }
        
    }
    else
    {
        if(*b < *c)
        return *b;

        else
        {
            return *c;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    printf("The smalles of three is %d\n",small_three(&a, &b, &c));
    return 0;
}
