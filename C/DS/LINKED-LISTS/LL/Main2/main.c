#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node * link;  
};

struct node * header = NULL;

int main()
{
    struct node * one;
    struct node * two;
    struct node * three;
    struct node * four;
    struct node * five;
    
    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));
    four = (struct node*)malloc(sizeof(struct node));
    five = (struct node*)malloc(sizeof(struct node));

    printf("Enter data in 1st node:");
    scanf("%d",&one->data);
    header = one;

    printf("Enter data in 2nd node:");
    scanf("%d",&two->data);
    one->link = two;

    printf("Enter data in 3rd node:");
    scanf("%d",&three->data);
    two->link = three;

    printf("Enter data in 4th node:");
    scanf("%d",&four->data);
    three->link = four;

    printf("Enter data in 5th node:");
    scanf("%d",&five->data);
    four->link = five;

    five->link = NULL;

    struct node * temp;
    temp = header;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }


    return 0;
}