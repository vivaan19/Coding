#include <stdio.h>
#include <stdlib.h>

// Implementation of stack using array.
#define max 10

int A[max], i, n;

void create();
void push();
void pop();
void display();

void main()
{
    int ch;
   printf("**************STACK IMPLENTATION**************\n\n");
   printf("Enter 1 for creating a stack of size <= 10\n");
   printf("Enter 2 for pushing an element in stack\n");
   printf("Enter 3 for pop function in stack\n");
   printf("Enter 4 for displaying the final stack\n");
   printf("Enter 5 for EXIT\n");

   while(3)
   {
   printf("\nEnter your option: ");
   scanf("%d",&ch);

   if(ch == 1)
    create();
    else if(ch == 2)
    push();
    else if(ch == 3)
    pop();
    else if(ch == 4)
    display();
    else
    {
        printf("EXIT\n");
        break;
    }
   }
}

void create()
{
    printf("\nEnter the size of initial elements: ");
    scanf("%d",&n); // n=5

    printf("Enter the elements\n");

    for(i=0; i<n ; i++) // i=0 to i=4
    {
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    i--;
    // i=4
}

void push()
{
    i++; // i=5
    printf("\nEnter an element to push: ");
    scanf("%d",&A[i]); // A[5] , i=5
    printf("\n press 4 to display");
}

void pop()
{
    printf("%d element is popped at index %d\n",A[i],i);

    i--; // i=4
}

void display()
{
    int e;
    printf("The elements are:\n");

    for( e=0;e<=i;e++) // i=5, i=4
    {
        printf("A[%d]=%d\n",e,A[e]);
    }
}

