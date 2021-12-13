#include <stdio.h>
#include <stdlib.h>

/* memory allocations in C
1. block of memory using malloc()
2. contiguous memory using calloc()

void main()
{
	int *arr, i, n;

	printf("Enter the size of array:");
	scanf("%d",&n);

	//arr=(int *)malloc(n*sizeof(int));

	arr=(int *)calloc(n,sizeof(int));
	if(arr==NULL)
		printf("No values entered\n");
	else
	{

	for(i=0; i<n; i++)
	{
		printf("\n A[%d]=",i);
		scanf("%d",&arr[i]);
	}
	}
	free(arr);

}

void main()
{
	int *arr=malloc(4*sizeof(int));

	for(int i=0;i<4;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<4;i++)
		printf("%p\n",&arr[i]);
	free(arr);
	for(int i=0;i<4;i++)
		scanf("%d",&arr[i]);

}
*/

/*
void main()
{
	int arr[20], i,j;

	printf("Enter 20 elements in array:\n");

	for(i=0; i<20; i++)
	{
		printf("\nA[%d]=",i);
		scanf("%d",&arr[i]);
	}

	// to check pairs of two numbers summed to be 50

	for(i=0; i<20; i++)
	{
		for(j=i; j<20; j++)
		{
			if(arr[i]+arr[j] == 50)
				printf("Pair %d = (%d,%d)\n",i,arr[i],arr[j]);
		}
	}
}
*/


void read(int arr[20])
{
	int i;
	printf("Enter elements:\n");
	for(i=0; i<20; i++)
	{
		printf("\nA[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

void display(int arr[20])
{
	for(int i=0; i<20; i++)
	{
		for(int j=i; j<20; j++)
		{
			if(arr[i]+arr[j] == 50)
				printf("Pair = (%d,%d)\n",arr[i],arr[j]);
		}
	}
}
void main()
{
	int arr[20], i, j;

	read(arr);
	display(arr);
}
