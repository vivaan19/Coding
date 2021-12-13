#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float a,b,temp;
    int ch;
    printf("Enter two numbers for basic math operation\n");
    scanf("%f%f",&a,&b);
    printf("\nEnter 1 for addition\nEnter 2 for multiply\nEnter 3 for division\nEnter 4 for substract\nEnter 5 for power(a^b)\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 : temp=a+b;
        printf("Addition :: %f\n",temp);
        break;
        case 2 : temp=a*b;
        printf("Multiplication :: %f\n",temp);
        break;
        case 3 : temp=a/b;
        printf("Division :: %f\n",temp);
        break;
        case 4 : temp=a-b;
        printf("Sbustraction :: %f\n",temp);
        break;
        case 5 : temp=pow(a,b);
        printf("Power answer :: %f\n",temp);
        break;
    }
printf("\*********THANK YOU******\n");
}
