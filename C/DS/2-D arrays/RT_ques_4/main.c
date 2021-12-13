#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *arr, size, sum;

	printf("Enter size of array:");
	scanf("%d",&size);

	arr=(int *)malloc(size*sizeof(int));

	if(arr == NULL)
		printf("Memory not allocated\n");
	else
	{
		read(arr,size);
		sum=sum_square(arr,size);
		printf("\nSum of squares of %d size array is:%d",size,sum);
	}
	free(arr);

}

void read(int arr[], int size)
{
	int i;

	for(i=0; i<size; i++)
	{
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

int sum_square(int arr[], int size)
{
	int i, sum_1=0;

	for(i=0; i<size; i++)
	{
		sum_1=sum_1+(arr[i]*arr[i]);
	}
	return sum_1;
}
