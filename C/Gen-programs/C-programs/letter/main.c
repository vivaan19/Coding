#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter your letter\n");
    scanf("%c",&ch);
    ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U' ? printf("%c is vowle\n",ch):printf("%c is consonant\n",ch);

    return 0;
}
