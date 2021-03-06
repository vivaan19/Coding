#include <stdio.h>
#include <math.h>

void squrtf(int n)
{
    int square=sqrt(n);
    printf("%d",square);
}
int main(void) 
{
	// your code goes here
	int t, n;
	scanf("%d",&t);
	
	for(int i=0; i<t; i++)
	{
	    scanf("%d",&n);
	    squrtf(n);
	    printf("\n");
	}
	
	return 0;
}

// ----------------------------------------

// without using built functions
#include<stdio.h>

void main()
{
    int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }

    printf("The square root of '%d' is '%f'", number, sqrt);
}

