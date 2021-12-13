#include <stdio.h>
#include <stdlib.h>
#define max 5

int arr[max], front = -1, rear=-1;

// Program to perform enqueue and dequeue operation where the initial value of front and rear
// is NULL and when the operations are performed return the value of front and rear in each step.


void enqueue();
void dequeue();
void display();

void main()
{
    int ch ;

    printf("Press 1 to enqueue the queue\n");
    printf("Press 2 to dequeue the queue\n");
    printf("Press 3 to display the queue\n");
    printf("Press 4 to EXIT\n");

    while(3)
    {
        printf("Enter Option: ");
        scanf("%d",&ch);

        if(ch==1)
            enqueue();
        else if(ch==2)
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
    if(rear == -1)
    {
        rear=rear+1;
        printf("Enter the element to insert:");
        scanf("%d",&arr[rear]);
    }

    else if(rear == max-1)
    {
        printf("Size is completed\n");
    }

    else
    {
        printf("Enter the element to insert:");
        scanf("%d",&arr[rear]);
    }

    rear=rear+1;
}

void dequeue()
{
    if(front == -1)
    {
        printf("No elements present so no deleted\n");
        front=front+1;
    }
    else if(front>=rear)
        printf("Insert more elements\n");
    else
    {
        front=front+1;
        printf("element deleted\n");
    }
}

void display()
{
    printf("rear=%d\n",rear);
    printf("front=%d\n",front);

    if(front >= rear)
        printf("Insert more elements\n");

    else if(front == -1 || rear == -1)
        printf("No elements to display\n");

    else
    {
        for(int i = front; i<rear; i++)
            printf("arr[%d]=%d\n",i,arr[i]);
    }
}
