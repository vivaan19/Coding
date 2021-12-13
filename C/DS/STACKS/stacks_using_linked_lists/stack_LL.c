/*
LAB NUMBER-- 9

QUESTION-- Implement  the following elements of a stack using singly linked list:
5, 7,12, 8, 10, 1 The above elements are placed in a stack in the same order as they appear.  The top of stack is 1.
Perform the various operations of stack.
*/

#include <stdio.h>
#include <stdlib.h>

struct stacks_linked_lists
{
    int data;
    struct stacks_linked_lists *link;
};

typedef struct stacks_linked_lists node;

int n;
node* temp;

node* root=NULL;

void create_stack();
void push();
void pop();
void display();
void peek();
void count();

void main()
{
    int ch;
    printf("***********STACKS USING LINKED LISTS***********\n\n");
    printf("Press 1 to create a stack\n");
    printf("Press 2 to push a element in a stack\n");
    printf("Press 3 to pop in a stack\n");
    printf("Press 4 to display stack\n");
    printf("Press 5 to count elements in stack\n");
    printf("Press 6 to return the top element\n");

    printf("Press 5 to EXIT\n");


    while(4)
    {
        printf("\nEnter a option: ");
        scanf("%d",&ch);
        if(ch == 1)
            create_stack();

        else if(ch == 2)
            push();

        else if(ch == 3)
            pop();

        else if(ch == 4)
            display();
        
        else if(ch == 5)
         count();
        
        else if(ch == 6)
         peek();

        else
        {
            printf("EXIT\n");
            break;
        }
    }
}


void create_stack()
{
    printf("\nEnter the size of stack: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("Enter %d Element: ",i);
        scanf("%d",&temp->data);

        temp->link=NULL;

        if(root==NULL)
            root=temp;
        else
        {
            node* p;

            p=root;

            while(p->link != NULL)
            {
            p=p->link;
            }

            p->link=temp;
        }
    }

    printf("Press 4 to display\n");
}

void push()
{
    printf("You are in push function\n");

    temp=(node*)malloc(sizeof(node));

    printf("Enter Element to Push: ");
    scanf("%d",&temp->data);

    temp->link=root;
    root=temp;

    printf("Press 4 to display\n");
}

void pop()
{
    printf("You are in pop function\n\n");
    printf("The first element is the last element added in stack so it will be removed first\n");

    node* p=root;

    root=p->link;

    p->link=NULL;

    printf("\nFirst element is removed\n");

    printf("Press 4 to display\n");
}

void display()
{
    temp=root;

    while(temp != NULL)
    {
        printf("-->%d",temp->data);
        temp=temp->link;
    }
}
void peek()
{
    node* p = root;
    printf("First element=%d\n",p->data);
}