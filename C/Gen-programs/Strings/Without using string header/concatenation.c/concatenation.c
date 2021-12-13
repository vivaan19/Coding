#include <stdio.h>
#include <stdlib.h>
// Program to demostrate string concatenation without <string.h>

void main()
{
    char str1[50]="Hello";
    char str2[50]="World";
    char str3[50];

    int i=0,j=0;

    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;

    while(str2[i]!='\0')
    {
       str3[j]=str2[i];
       i++;
       j++;
    }

    str3[j]='\0';

    printf("The final string :: %s\n",str3);
}
