#include <stdlib.h>
#include <stdio.h>

void read(void); // to read the elements
void display(void); // to display elements
int search(int); // to search for an element
void defdelf(void); // deletes the first element
void defdell(void); // deletes the last element
void insert(int); // insert at any location 

int c=0;
struct node
{
    int data;
    struct node* link;
};

struct node * root=NULL;

// to make function of reading a linked list and displaying it.

void read(void)
{
    struct node * ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->link = NULL;

    printf("Enter element: ");
    scanf("%d",&ptr->data);

    if(root == NULL)
    root = ptr;

   else
    {
        struct node * p = root;
        while (p->link != NULL)
        {
            p=p->link;
        }
        p->link = ptr;
    } 

}

void display()
{
    struct node * temp = root;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        c++;
        temp = temp->link;
    }
    printf("\n----------------------");
}

int search(int num)
{
    int count = 0, flag = 0;
    struct node * temp = root;
    while(temp != NULL)
    {
        count++;
        if(temp->data == num)
        {
            printf("Element %d found at location %d\n",temp->data,count);
            flag = 1;
            return (flag);
        }
        temp=temp->link;
    }
    return (flag);
}

void defdelf(void)
{
    struct node * temp = root;

    root=temp->link;
    temp->link = NULL;
    free(temp);
}

void defdell(void)
{
    struct node * temp1 = root;
    struct node * p;
    while(temp1->link != NULL)
    {
        p=temp1;
        temp1 = temp1->link;
    }
    
    p->link = NULL;
    free(temp1);
}

void randominsert(int num)
{
    int loc, value;
    printf("Enter location and value of the node:");
    scanf("%d %d",&loc,&value);
    if (loc > c)
    {
        /* code */
        printf("Location exceeds the total elements\n");
    }
    else
    {
        struct node * temp = root;
        struct node * newnode;

    }
    
}
int main()
{
    int n, ser, veri, i, val;
    i=1;

    while(i)
    {
    printf("\nEnter 1 to insert elements\n"); 
    printf("Enter 2 to Delete first node\n"); 
    printf("Enter 3 to Delete last node\n"); 
    printf("Enter 4 to display\n"); 
    printf("Enter 5 to Search an element\n"); 
    printf("Enter 6 to Exit\n");

    scanf("%d",&val);

        if(val == 1)
        read();
        else if(val == 2)
        defdelf();
        else if(val == 3)
        defdell();
        else if(val == 4)
        display();
        else if(val == 5)
        {
        printf("To search:");
        scanf("%d",&ser);
        veri=search(ser);

        if(veri == 0)
        printf("No such element found\n");
        else
        printf("The above line is the result\n");
        }

        else if(val == 6)
        {
            printf("EXIT\n");
            i=0;
        }
    }
    
    return 0;
}