#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,avg;
    printf("Enter your P,C,B marks\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    avg=avg/10;
    switch(avg)
    {
    case 9 :
        printf("Grade : S\n");
        break;
    case 8 :
        printf("Grade : A\n");
        break;
    case 7 :
        printf("Grade : B\n");
        break;
    case 6 :
        printf("Grade : C\n");
        break;
    case 5 :
        printf("Grade : D\n");
        break;
    case 4 :
        printf("Grade : E\n");
        break;
    case 3 :
        printf("Grade : F\n");
        break;
    case 2:
        printf("Grade : F\n");
        break;
    case 1 :
        printf("Grade : F\n");
        break;
    case 0 :
        printf("Grade : F\n");
        break;
    default :
        printf("Invalid marks\n");
        break;
    }
    return 0;
}
