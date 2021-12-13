#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, a, c, *q;
    p=&a;
    printf("add of a:%p\n",p);
    scanf("%d",p);
    c=*p;

    printf("value of a:%d\n",c);

    q=&p;
    printf("Add of p:%p\n",q);


    printf("Value of p which is add of a:%p\n",*q);
}
