#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct ram                                                      // This is the syntax of structure
                                                                // struct ram is the variable type and r1 is the variable to it
{
        int x,y;                                                // This is the two integers in structure
        char name[10];                                          // This is the charater string named as name
}r1;
void main()                                                     // This is the main function
{

        struct ram r1={0,10,"Random"};                               // The string is accessed by string copy function
                                             // The integers are initialized as 0 and 10 in order of x,y
               // This is for diplaying the string
        printf("x=%d,y=%d,%s\n",r1.x,r1.y,r1.name);                        // This is for displaying the integers
}


