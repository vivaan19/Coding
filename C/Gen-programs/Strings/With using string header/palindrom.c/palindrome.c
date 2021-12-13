#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[50];
    int i=0,length;
    int flag=0;

    printf("Enter your string\n");
    scanf("%s",str);


    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }

    }

    if(flag)
        printf("Your Sring is not a palindrome\n");
    else
        printf("Your String is a palindrome\n");
}
