#include <stdio.h>
#include <stdlib.h>
// Program to takes a string and a number between 0 to 9 as parameters,
// and then displays the string that many times, and returns the length of a string.

int func(char x[],int n)  // Function Declaration
{
    for(int i=0;i<n;i++)   // Function Defination
    {
        printf("%s\n",x);
    }
    return strlen(x);
}

void main() // Main function where function calling is done
{
    char a[80];
    int n;
    printf("Enter your string::\n");
    gets(a);
    printf("Enter the number from o to 9\n");
    scanf("%d",&n);

    int s=func(a,n);     // Function calling

    printf("The length of the string is %d\n",s);
}
