#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=2;
    b=3;
    c=1;        // Output :: a=1,b=2,c=3
    a=a+b-c;
    b=b-c;
    a=a-b-c;
    c=b+a;

    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}
