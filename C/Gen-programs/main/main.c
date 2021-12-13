#include <stdio.h>
#include <stdlib.h>
// Program To demostrate probelm of scanf()using in c
void main()
{
   int x;
   char a[20];
    printf("Enter your integer\n");
   scanf("%d\n",&x);
   printf("Enter your charater\n");
   fgets(a,20,stdin);

   printf("x=%d,a=%s",x,a);
}
