/*
LAB-WORK: 10
QUESTION: Write a C program to calculate the factorial of a number using Recursive and Iterative method.
*/
#include <stdio.h>
#include <stdlib.h>

int n;
int itration();
int recursion(int);

void main()
{
    printf("***************FACTORIAL USING ITERATION AND RECURSION***************\n\n");
    printf("Enter a number to find factorial:");
    scanf("%d",&n);

    int ch;
    printf("Press 1 for factorial using itration\n");
    printf("Press 2 for factorial using recusion\n");
    printf("Press 3 to EXIT\n");

    while(3)
    {
        printf("\nEnter your option:");
        scanf("%d",&ch);

        if(ch == 1)
            printf("Factorial of %d is %d using itration\n",n,itration());
        else if(ch == 2)
            printf("Factorial of %d is %d using recursion\n",n,recursion(n));
        else
        {
            printf("EXIT\n");
            break;
        }
    }
}

int itration()
{
    int fact=1;

    if(n>0)
    {
        for(int i=0; i<n; i++)
            fact = fact*(n-i);
    }
    else
        fact=1;
    return fact;
}
int recursion(int n)
{
   if(n>=1)
        return n*recursion(n-1);
   else
    return 1;
}
