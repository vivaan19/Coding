#include <stdio.h>
#include <stdlib.h>

int main()  // To find sum of the digits in number
{
    int number,remainder,sum=0;
    printf("Enter a number to find sum of digits\n");
    scanf("%d",&number);
    /*for(sum=0;number>0;number=number/10)  // Using for loop
    {
        remainder=number%10;
        sum=sum+remainder;
    }
    */
    /*while(number>0) // condition // Using While loop
    {
        remainder=number%10;
        sum=sum+remainder;
        number=number/10; // Incrementation
    }
    */
    do{  // Using do while loop
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;  // Incrementation
    }while(number>0); // Condition
    printf("The sum is %d\n",sum);
    return 0;
}
