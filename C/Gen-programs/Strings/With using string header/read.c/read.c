#include <stdio.h>
#include <stdlib.h>
// Program to read string from the user
void main()
{
    // declaring a string with name str.
    // Maximum of 50 characters can be stored
    char str[50];

    // reading a string from the user
    // If we don't use the "&" its okay
    scanf("%s",&str);

    // printing the string
    printf("Your String is :: %s\n",str);

}
