#include <stdio.h>
#include <stdlib.h>
// Program to perform deletion operation delete the first node.

struct node
{
    int data;
    struct node* link;
};

struct node* root = NULL;
struct node* temp;


void append();
void display();
void fdel();
void del();
void ldel();
int len();
void insert_before_fnode();
void insert_after_fnode();
void insert_at_last();

void main()
{
    int ch,length;
    printf("Enter 1 to insert elements in LL\n");
    printf("Enter 2 for DIsplay\n");
    printf("Enter 3 for delete first node\n");
    printf("Enter 4 for delete at loc\n");
    printf("Enter 5 for delete last node\n");
    printf("Enter 6 for find the length of node\n");
    printf("Enter 7 to insert node before first node\n");
    printf("Enter 8 to insert node after first node\n");
    printf("Enter 9 to insert node at the end\n");

    while(3)
    {
        printf("\nEnter option: ");
        scanf("%d",&ch);
        if(ch == 1)
            append();
        else if(ch == 2)
            display();
        else if(ch == 3)
            fdel();
        else if(ch == 4)
            del();
        else if(ch == 5)
            ldel();
        else if(ch == 6)
        {
            length=len();
            printf("The length is %d\n",length);
        }
        else if(ch == 7)
            insert_before_fnode();
        else if(ch == 8)
            insert_after_fnode();
        else if(ch == 9)
            insert_at_last();
    }
}

void append()
{
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Insert elements:\n");

    printf("Enter element: ");
    scanf("%d",&temp->data);

    temp->link = NULL;

    if(root == NULL)
    {
        root=temp;
    }

    else
    {
        struct node* p;

        p=root;

        while(p->link!=NULL)
        {
            p=p->link;
        }

        p->link=temp;
    }
}

void display()
{
    printf("The elements in LL are:\n");

    temp=root;

    while(temp != NULL)
    {
        printf("-->%d",temp->data);

        temp=temp->link;
    }
}

void fdel()
{
    struct node*p;
    p=root;
    root=p->link;
    p->link=NULL;
    free(p);
}

void del()
{
    int loc,i;
    printf("Location: ");
    scanf("%d",&loc);

    struct node*p,*q;
    i=1;
    p=root;
    while(i<loc-1)
    {
       p=p->link;
       i++;
    }

    q=p->link;
    p->link=q->link;
    q->link=NULL;
    free(q);

}

int len()
{
   int count=1;
   temp=root;

   while(temp->link != NULL)
   {
       count++;
       temp=temp->link;
   }

   return count;
}

void ldel()
{
    struct node*p, *q;

    p=root;
    int i=1;
    while(i<len()-1)
    {
        p=p->link;
        i++;
    }

    q=p->link;
    p->link=q->link;
    free(q);
}

void insert_before_fnode()
{
    struct node* p, *q;
    p=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data of new node: ");
    scanf("%d",&p->data);

    q=root;
    root=p;
    p->link=q;
}

void insert_after_fnode()
{

}

void insert_at_last()
{
    struct node* q = root, *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of node: ");
    scanf("%d",&p->data);
    int i=1;

    while(i<len())
    {
        q=q->link;
        i++;
    }

    q->link=p;
    p->link=NULL;
}
