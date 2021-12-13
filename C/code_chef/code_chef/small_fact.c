
// Problem Code: FCTRL2
#include <stdlib.h>
#include <stdio.h>
int main()
{
    unsigned int t, fact, i;
    scanf("%d",&t);
    unsigned int a[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
        fact=1;

        if(a[i] == 0)
        printf("%d\n",fact);

        else
        {
            while(a[i] != 0)
            {
                fact = fact*a[i];
                a[i]--;
            }
            printf("%d\n",fact);
        }
    }
    return 0;
}


/*
#include<stdio.h>
int a[1000];
int m=0;
int mult(int num)
{
    int index;
    int x=0;
    int temp=0;
    for(index=0;index<=m;index++)
    {
        x = a[index]*num+temp;
        a[index]=x%10;
        temp=x/10;
        if((m==index)&&(temp!=0))
        {
            while(temp!=0)
            {
            m++;
            a[m]=temp%10;
            temp=temp/10;
            }    
            index=m;
        }
    }
}  
void display()
{
    while(m>=0)
    {
        printf("%d",a[m]);
        m--;
    }
    printf("\n");
    m=0;
    a[0]=1;
}
void factorial(int num)
{
    while(num!=1)
    {
        mult(num);
        num--;
    }
}
int main()
{
    int t,i,num;
    a[0]=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        factorial(num);
        display();
    }    
    return 0;
}  
*/