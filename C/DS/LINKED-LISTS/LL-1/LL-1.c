#include <stdio.h>
#include <stdlib.h>

// Program to create a linked list with 3 members in it.

struct node
{
    int data;
    struct node* link;
};

void main()
{
    struct node* one = NULL;
    struct node* two = NULL;
    struct node* three = NULL;
    struct node* root = NULL;

    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));
    root = (struct node*)malloc(sizeof(struct node));

    one->data = 1;
    root->link = one;
    one->link = two;

    two->data = 2;
    two->link = three;

    three->data = 3;
    three->link = NULL;

    struct node* temp;
    temp = root->link;

    while(temp != NULL)
    {
        printf("-->%d",temp->data);
        temp = temp->link;

    }
}
