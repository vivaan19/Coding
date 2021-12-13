#include <stdio.h>
#include <stdlib.h>
// Program to demostrate use of simple calculator.

// Function declaration
int add(n1,n2);
int sub(n1,n2);
int mul(n1,n2);
int divi(n1,n2);
// main function
int main()
{
    int n1,n2,ch;
    printf("Enter your first and second number resp.\n");
    scanf("%d %d",&n1,&n2);
    printf("Enter your choice:: 0.Exit;1.Addition;2.Substraction;3.Multiplication;4.Division\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 0:
        printf("Thank You\n");
        break;
    case 1:
        printf("Your addition is :: %d",add(n1,n2));
            break;
    case 2:
        printf("Your substraction is :: %d",sub(n1,n2));
            break;
    case 3:

        printf("Your multiplication is :: %d",mul(n1,n2));
            break;
    case 4:

        printf("Your division is :: %d",divi(n1,n2));
            break;
    default:
        printf("Your choice is invalid\n");
            break;
    }
}
// Function Defination
// Function Defination for addition
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
int mul(int d,int e)
{
    int f=d*e;
    return f;
}
int divi(int g,int h)
{
    int i = g/h;
    return i;
}
