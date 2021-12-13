#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp,rem,rev=0;
    printf("Enter your number to be reversed\n");
    scanf("%d",&num);
    temp=num;
    /*
    while(num>0)    // Using while loop
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    */
    /*for(rev=0;num>0;num=num/10)     // Using for loops
    {
        rem=num%10;
        rev=(rev*10)+rem;
    }
    */
    do{     // Using do while loop
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }while(num>0);

    printf("The actual number is %d\n",temp);
    printf("The reversed number is %d\n",rev);
    if(temp==rev)
        printf("The number is palindrome\n");
    else
        printf("The number is not a palindrome\n");
    return 0;
}
