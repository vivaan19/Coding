/*
LAB-12:

QUESTION:Write a C program to perform ENQUEUE  and DEQUEUE operations on a circular queue using array representation.
*/

#include <stdio.h>
#include <stdlib.h>

#define max 5

int arr[max], front=-1, rear=-1, n;

void enqueue();
void dequeue();
void display();

void main()
{
    int ch;
    printf("The max size of queue is 5\n");

    printf("Press 1 to insert elements\n");
    printf("Press 2 to delete elements\n");
    printf("Press 3 to display elements\n");
    printf("Press 4 to EXIT\n");

    while(3)
    {
        printf("\nEnter option:");
        scanf("%d",&ch);

        if(ch == 1)
            enqueue();

        else if(ch == 2)
            dequeue();

        else if(ch == 3)
            display();

        else
        {
            printf("EXIT\n");
            break;
        }
    }
}

void enqueue()
{
    printf("\nEnter element to insert:");
    scanf("%d",&n);

    if(front == -1 && rear == -1)
    {
        front=rear=0;
        arr[rear]=n;
    }

    else if(rear == max-1 && front != 0)
    {
        rear=0;
        arr[rear]=n;
        printf("arr[%d]=%d\n",rear,arr[rear]);
    }

    else if(front == rear+1 || rear == max-1)
    {
        printf("Queue is full no element more to insert\n");
    }

    else
    {
        rear++;
        arr[rear]=n;
        printf("arr[%d]=%d\n",rear,arr[rear]);
    }
}

void dequeue()
{
    int val;

    if(front == -1 && rear == -1)
        printf("The queue is empty\n");

    else if(front == rear)
    {
        val=arr[front];
        printf("%d element is deleted\n",val);
        front=rear=-1;
    }

    else if(front == max-1)
    {
        val=arr[front];
        printf("%d element is deleted\n",val);
        front=0;
    }

    else
    {
        val=arr[front];
        printf("%d element is deleted\n",val);
        front++;
    }
}


void display()
{
    int i, j;
    printf("Front=%d\n",front);
    printf("Rear=%d\n",rear);

    if(front == -1 && rear ==-1)
        printf("queue is empty\n");

    else if(front == rear)
    {
        printf("Only one element present that is %d\n",arr[front]);
    }

    else
    {
            if(front > rear)
            {
                for(i=front; i<max; i++)
                {
                printf("arr[%d]=%d\n",i,arr[i]);
                }
                for(i=0; i<=rear; i++)
                {
                printf("arr[%d]=%d\n",i,arr[rear]);
                }
            }

            else
        {
            for(i=front; i<=rear; i++)
            {
                printf("arr[%d]=%d\n",i,arr[i]);
            }
                printf("\n");
        }

    }
}

