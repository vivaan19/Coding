#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,p,bin=0;
    printf("Enter your decimal number\n");
    scanf("%d",&num);
    p=num;
    i=1;
    /*
    for(j=num;j>0;j=j/2)    // Using for loop
    {
        bin=bin+(num%2)*i;
        i=i*10;
        num=num/2;
    }
    */
    /*
    while(num>0) //Condition  // Using while loop
    {
        bin=bin+(num%2)*i;
        i=i*10;
        num=num/2;      // Incrementation
    }
    */
    do{      // Using do while loop
        bin=bin+(num%2)*i;
        i=i*10;
        num=num/2;
    }while(num>0);
    printf("The Binary of %d is %d\n",p,bin);
    return 0;
}
