#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter your alphabet in lower case only\n"); // Only lower case letter
    scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("%c is vowel\n",c);
else
    printf("%c is consonant\n",c);
    return 0;
}
