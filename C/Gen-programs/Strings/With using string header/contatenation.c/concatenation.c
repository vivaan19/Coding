#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   // declaring two strings for joining
   char str1[50];
   char str2[50];

   printf("Enter your first string\n");
   scanf("%s",str1); // Reading the first string

   printf("Enter your second string\n");
   scanf("%s",str2); // Reading the second string

   strcat(str1,str2);// This means that str1 stores the content of str1+str2

    printf("The final string is :: %s",str1);
}
