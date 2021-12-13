/*
program to delete fisrt node in the linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* root = NULL;
struct node* temp;

void store();   // Function to store elements in LL.
void display();	// Functions to display the stored elements in LL.
void fdel();	// Delete the first node of LL.
void del();	// Delete the middle node.
void ldel();	// delete the last node.
int len();   // For count of number of nodes.
void search(); // Search an element in a LL.
void linsert();// Insertion at end

void main()
{
	int ch, l;
		printf("Press 1. For Storing element\n");
		printf("Press 2. For Display list element\n");
		printf("Press 3. For lenghth of node\n");
		printf("Press 4. For delete element at the first node element\n");
		printf("Press 5. For delete node at location loc\n");
		printf("Press 6. For Delete node at end\n");
		printf("Press 7. For Search an element in LL\n");
		printf("Press 8 to insert at end\n");
		printf("Press 9. For EXIT\n");


	while(1)
	{

		printf("\nEnter your option: ");
		scanf("%d",&ch);

		if (ch == 1)
		store();

		else if (ch == 2)
		display();

		else if (ch == 3)
		{
		l =len();
		printf("The length of node is %d\n",l);
		}

		else if(ch == 4)
		fdel();

		else if(ch == 5)
		del();

		else if(ch == 6)
		ldel();

		else if(ch == 7)
		search();

		else if(ch == 8)
		linsert();

		else
		{
		printf("EXIT\n");
		break;
		}

	}
}


void store()
{
	int size, i;
	printf("\nEnter the size of LL:");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
	temp = (struct node*)malloc(sizeof(struct node));

	printf("Enter data: ");
	scanf("%d",&temp->data);
	printf("\nYour data is stored");

	if(root == NULL)
	root = temp;

	else
	{
		struct node* r;

		r = root;

		while(r->link != NULL)
		{
			r = r->link;
		}

		r->link = temp;
	}

	}

}

void display()
{
	temp = root;

	if(temp == NULL)
	printf("The list is empty\n");

	else
	{
		printf("\nThe list is:\n\n");
		while(temp != NULL)
		{
			printf("--> %d",temp->data);
			temp = temp->link;
		}
	}

	printf("\n\n");

}


// FUnction to count the nodes.
int len()
{
	int count = 0;
	temp = root;

	while(temp != NULL)
	{
		count++;
		temp = temp->link;
	}

	return count;
}

void fdel()  // function to delete first node
{
	temp = root;

	if(temp == NULL)
	printf("The list is empty no element to delete\n");

	else
	{
		root = temp->link;

		temp->link = NULL;

		free(temp);

		printf("After deleting first node the list is: (press 2)\n");

		display();
	}

}

void del()   // Function to delete a node at location loc.
{
	int loc;
	printf("Enter the location of node to delete\n");
	scanf("%d",&loc);

	struct node* p = root, *q;
	// Two variables p points to first memory add. and q is used to store add. of deletion node.

	int i = 1;

	while(i<loc-1)
	{
		p = p->link;
		i++;
	}

	q = p->link;	// q points to the deletion node.

	p->link = q->link;  // The next node memory address is stored in p.

	q->link = NULL;

	free(q);

	printf("The List after deletion node at loc is:\n");

	display();
}

// Function to delete node from end.
void ldel()
{
	struct node* p = root, *q;

	int i= 1;

	while( i < len()-1)
	{
		p = p->link;
		i++;
	}

	q = p->link;

	p->link = NULL;

	free(q);

	printf("\n\nThe list after deletion last node is:\n\n");
	display();

}

// Function to search an element.

void search()
{
	int ser;
	printf("Enter the value to search: ");
	scanf("%d",&ser);

	struct node* pos;


	while(temp != NULL)
	{
		if(ser == temp->data)
		{
			pos = temp;
		}

		else
		{
			temp = temp->link;
		}
	}

	if(pos == NULL)
	printf("%d not in list\n",ser);

	else
	printf("%d found at %p location\n",ser,pos->link);
}

void linsert()
{
	temp= (struct node*)malloc(sizeof(struct node));

	printf("Enter element to insert at the end:");
	scanf("%d",&temp->data);

	struct node* p=root;

	while(p->link != NULL)
	p=p->link;

	p->link=temp;
	temp->link=NULL;
}
*/
