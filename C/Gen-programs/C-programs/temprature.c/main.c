#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel,far,cf,fc;
    printf("Enter your celsius value converted to fahrenheit ::\n");
    scanf("%f",&cel);
    printf("Enter your fahrenheit value converted to celsius ::\n");
    scanf("%f",&far);

    cf=(cel*9/5)+32;
    fc=(far-32)*5/9;

    printf("Celsius to fahrenheit=%f\n",cf);
    printf("Fahrenheit to celsius=%f\n",fc);
    return 0;
}
