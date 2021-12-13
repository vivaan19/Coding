#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,c,b,avg;
    printf("Enter your marks in Physics,Chemistry,Biology\n");
    scanf("%d%d%d",&p,&c,&b);
    avg=(p+c+b)/3;

    if(avg>=90){
        printf("Average marks:%d\n",avg);
        printf("Grade:S\n");
    }
    else if(avg>=80){
        printf("Average marks:%d\n",avg);
        printf("Grade:A\n");
    }
    else if(avg>=70){
        printf("Average marks:%d\n",avg);
        printf("Grade:B\n");
    }
    else if(avg>=60){
        printf("Average marks:%d\n",avg);
        printf("Grade:C\n");
    }
    else if(avg>=50){
        printf("Average marks:%d\n",avg);
        printf("Grade:D\n");
    }
    else if(avg>=40){
        printf("Average marks:%d\n",avg);
        printf("Grade:E\n");
    }
    else{
        printf("Average marks:%d\n",avg);
        printf("Grade:F\n");
    }
    return 0;
}
