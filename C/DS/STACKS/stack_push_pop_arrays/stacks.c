#include <stdio.h>

// Implementing stacks data structures. (DS LAB - 8)

#define max 10

int stack[max], top;

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

   while(4)
  {
   printf("Enter Choice: ");
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
    int n;
    printf("You are in create function\n\n");
    printf("Enter the max. size of stack: ");
    scanf("%d",&n);

    if(n > max)
    {
        top = n;
        printf("\nElements exceeds the range\n\n");
    }

    else if(n<0)
    {
        top = n;
        printf("Not Sufficent size\n\n");
    }
    else
    {

        printf("Now enter your elements in the stack\n");

        for(top=0; top<n; top++)   // If n is 5 then loop will go to 0 to 4.
        {
            printf("stack[%d]= ",top);
            scanf("%d",&stack[top]);
        }
    }
    // when loop terminates top will be 5.

    top=top-1; // Now it once again becomes 4.
}

void push()
{
    printf("You are in push function\n\n");

    if(top > max)  // Overflow condition
    {
        printf("Not suffient space for storing more element\n");
    }

    else if(top < 0)
    {
        printf("The size cannot be negetive\n\n");
    }

    else
    {
        top=top+1;
        printf("Enter your new element which can be pushed in stack: ");
        scanf("%d",&stack[top]);
    }
}

void pop()
{
    printf("You are in pop function\n");

    if(top < 0)  // Underflow condition
    {
        printf("The stack is empty no element can be removed\n\n");
    }

    else if(top > max)
    {
        printf("SIze should be less than equal to 10\n\n");
    }
    else
    {
        top--;      // if pop function is invoked then top again becomes 4.
    }

    printf("The element is poped (Press 4 to display)\n\n");
}

void display()
{
    int p;

    printf("You are in display function\n");

    if(top > max)
    {
        printf("Elements exceed range\n");
    }

    else if(top < 0)
    {
        printf("Cannot Display for negetive range\n\n");
    }
    else
    {
        printf("Your elements are:\n\n");

        for(p=top; p >=0;p--)  // Elements prints from end to first.
        {
        printf("stack[%d]=%d\n",p,stack[p]);
        }
        printf("The element at top position is %d\n\n",stack[top]);  // the current position of top.

    }
}
