#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[100], *p;

    printf("Enter a string:");
    gets(ch);
    p=ch;
    printf("%s",*p);

    return 0;
}
