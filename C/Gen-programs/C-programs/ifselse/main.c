#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter your numbers a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("%d-->a is the greatest\n",a);
        }
        else{
            printf("%d-->c is the greatest\n",c);
        }
    }
    else{
        if(b>c){
            printf("%d-->b is the greatest\n",b);
        }
        else{
            printf("%d-->c is the greatest\n",c);
        }
    }
    return 0;
}
