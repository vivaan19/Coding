#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    int num;
    printf("Enter two numbers a,b\n");
    scanf("%f%f",&a,&b);
    printf("1 for add\n2 for multiply\n3 for substract\n4 for divide\n5 for power(a^b)\n");
    scanf("%d",&num);

    if(num==1){
        printf("Addition : %f\n",a+b);
    }
    else if(num==2){
        printf("Multiplication : %f\n",a*b);
    }
    else if(num==3){
        printf("Substraction : %f\n",a-b);
    }
    else if(num==4){
        printf("Quotion : %f\n",a/b);
    }
    else{
        printf("Power : %f\n",pow(a,b));
    }
    return 0;
}
