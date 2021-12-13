/*
LAB WORK:11

QUESTION: Write a C program to implement a queue using array, and perform enqueue and dequeue operations.
*/
#include <stdio.h>
#include <stdlib.h>

#define max 10

int arr[max],n,front, rear;

void create();
void enqueue();
void dequeue();
void display();

void main()
{
    int ch;
    printf("Enter size of queue(<=10):");
    scanf("%d",&n);

    rear=n-1;
    front=0;

    printf("\n**********QUEUE OPERATIONS**********\n\n");
    printf("Press 1 for creating a queue\n");
    printf("Press 2 for Enqueue\n");
    printf("Press 3 for Dequeue\n");
    printf("Press 4 to display\n");
    printf("Press 5 to EXIT\n");

    while(3)
    {
        printf("\nEnter option:");
        scanf("%d",&ch);

        if(ch == 1)
            create();
        else if(ch == 2)
            enqueue();
        else if(ch == 3)
            dequeue();
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
    printf("Enter elements\n");

    for(int i=0; i<n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}

void enqueue()
{
    int e;

    if(rear-1<=max)
    {
        printf("Enter element to insert:");
        scanf("%d",&e);

        rear=rear+1;

        arr[rear]=e;
    }

    else
        printf("No more insertion\n");
}

void dequeue()
{
    if(rear-1<=max)
    {
    printf("%d element will be ignored\n",arr[front]);
    front=front+1;
    }
    else
        printf("No more deletion\n");

}


void display()
{


    if(rear<=max)
    {
        printf("The elements are:\n");

        for(int i=front; i<=rear; i++)
        {
            printf("arr[%d]=%d\n",i,arr[i]);
        }
    }
    else
    {
        printf("Now the queue is full\n");
    }
}
