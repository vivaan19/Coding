#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter your numbers a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

    a>b? (a>c?printf("%d-->a is grestest among three\n",a): printf("%d-->c is greatest among three\n",c))
        :(b>c?printf("%d-->b is greatest among three\n",b): printf("%d-->c is greatest among three\n",c));
    return 0;
}
