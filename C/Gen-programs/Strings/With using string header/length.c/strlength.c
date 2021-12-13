#include <stdio.h>
#include <stdlib.h>
// This program demostrate the string length
void main()
{
    // declaring a string with max, 50 charaters
    char str[50];

    // reading string from the user
    scanf("%s",str);

    //printing the string length which a user entered
    printf("The Length Of Your String is :: %d\n",strlen(str));
}
