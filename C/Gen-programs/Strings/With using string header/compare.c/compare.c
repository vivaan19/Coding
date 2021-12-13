#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Program to demostrate string comparision

void main()
{
    // Declaring two strings which is used to compare
    char str1[50];
    char str2[50];
    int comp;

    printf("Enter your first string\n");
    scanf("%s",str1); // Reading first string from the user

    printf("Enter your second string\n");
    scanf("%s",str2); // Reading second string from the user

    comp=strcmp(str1,str2); // This is the Function of comparing two strings

    printf("The answer would be :: %d\n",comp);

    /* -->If the ASCII value of str1 > str2 then the output will be ASCII value of str1-str2,
       in this case the return value will be positive.

       -->If the Ascii valu of str1<str2 , then the output will be ASCII value of str1-str2
       in this case return value will be negetive.

       -->If the ASCII value of str1=str2 , then the returning value will be 0.
    */

}
