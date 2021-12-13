#include<stdio.h>

void main()
{
    char str1[50];
    char str2[50];
    int i=0;

    printf("Enter your Strings\n");
    gets(str1);
    gets(str2);

    while(str1[i]==str2[i] && str1[i]!='\0')
        i++;
    if(str1>str2)
        printf("str1>str2\n");
    else if(str1<str2)
        printf("str1<str2\n");
    else
        printf("str1=str2\n");

}
