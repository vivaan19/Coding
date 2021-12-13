#include <stdio.h>
#include <stdlib.h>
// Program To demostrate length of a string without using <string.h>.
int main()
{
    char str[50];  // declaring charater variable str.
    int i=0,l=0; // initializing the index i and length l = 0

    printf("Enter your string\n");
    scanf("%s",&str);

    while(str[i]!='\0') // running the loop when the element not equals to null charater
    {
        l++;
        i++;
    }

    printf("The length of string is :: %d",l);
}
