#include <stdio.h>
#include <stdlib.h>
#define max 10

int st[max], top=-1;

void push(int, int st[]);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

void main()
{
    int ch, val;
    printf("***********STACK OPERATIONS***********\n\n");
    printf("Press 1 for Push\n");
    printf("Press 2 for pop\n");
    printf("Press 3 to peek\n");
    printf("Press 4 to display\n");

    while(3)
    {
        printf("\nEnter option:");
        scanf("%d",&ch);
        if(ch == 1)
        {
            printf("\nEnter the value to push:");
            scanf("%d",&val);
            push(val, st);
        }

        else if(ch == 2)
        {
            val = pop(st);
            printf("%d element is popped\n",val);
        }

        else if(ch == 3)
        {
            val=peek(st);
            printf("Topmost element is %d\n",val);
        }

        else if(ch == 4)
            display(st);

        else
        {
            printf("EXIT\n");
            break;
        }
    }
}


void push(int e, int st[])
{
    if(top == max-1)
        printf("OVERFLOW\n");
    else
    {
        top++;
        st[top]=e;
    }
}

int pop(int st[])
{
    int v;
    if(top == -1)
        printf("UNDERFLOW\n");

    else
    {
        v=st[top];
        top--;
        return v;
    }
}

int peek(int st[])
{
    if(top == -1)
        printf("No top element present\n");

    else
        return st[top];
}


void display(int st[])
{
    int i;
    if(top == -1)
        printf("No elements to display\n");

    else
    {
        for(i=0; i<=top; i++)
            {
                printf("st[%d]=%d\n",i,st[i]);
            }
    }
}
