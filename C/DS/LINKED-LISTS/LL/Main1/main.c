/*
LAB WORK 4

PROGRAM NAME: Create a linked list with header node. Display the elements of the linked list. (The linked list must
              contain five nodes).
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

// This function prints contents of
// linked lists.

void printList(struct Node* n)
{
    printf("The list contains these elements:\n");
    while(n != NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
}

void main()
{
    struct Node* head = NULL;
    struct Node* one = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;
    struct Node* four = NULL;
    struct Node* five = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    one = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));


    head->next = one;

    one->data = 1;
    one->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = five;

    five->data = 5;
    five->next = NULL;


    printList(head->next);

}
