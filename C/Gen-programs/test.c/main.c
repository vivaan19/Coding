#include <stdio.h>
#include <stdlib.h>


struct account
{
   char name[5];
   int number;
};

int main()
{
    struct account profile;

 profile.number = 99;

 profile.name[5] = "jack";

 unsigned int i;

 for(i =0; i < 5; i++);
   printf(" name %s \n",profile.name[i]);

   printf(" name %d \n",profile.number);

   return 0;
}
}
