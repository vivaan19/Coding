#include <stdio.h>                              //struct ram r1={0,1}; // Declaring and initializing variable name i.e r1
#include <stdlib.h>
#include <string.h>                                     //r1.x=110;
struct ram // Declaring The name structure that is ram.
{
    //int x,y;
    char name[50];
    int id[3];
};

void main()
{
    struct ram r1= {0,1,2};
    printf("The ID is %d",r1.id);
    strcpy(r1.name,"Vivaan");
    printf("Name is %s",r1.name);

}
