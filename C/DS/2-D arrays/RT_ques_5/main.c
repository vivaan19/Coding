#include <stdio.h>
#include <stdlib.h>

//sum and mean of a 2-D array
void main()
{
	int **arr, rows, cols, i, j;
	printf("Enter the value of rows and coloumns resp:");
	scanf("%d %d",&rows,&cols);

	arr=(int **)malloc(rows*sizeof(int *));

	if(arr == NULL)
	{
		printf("Memory not allocated\n");
	}


	for(i=0; i<rows; i++)
		{
			arr[i]=(int *)malloc(cols*sizeof(int));
			if(arr[i] == NULL)
				printf("Memory not allocated\n");
		}
	read(arr, rows, cols);
	sum_mean_row_major(arr, rows, cols);
	sum_mean_col_major(arr, rows, cols);




	for(i=0; i<rows; i++)
		free(arr[i]);

	free(arr);
}

void read(int (*parr)[], int rows, int cols)
{
	int i, j;
	int arr[rows][cols];
	parr=arr;
	printf("Enter the elements:\n");

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("\nA[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void sum_mean_row_major(int (*parr)[], int rows, int cols)
{
	int arr[rows][cols], sum=0,mean,i,j;
	parr=arr;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			sum=sum+ (*(*(arr+i)+j));
		}

		mean=sum/cols;

		printf("Sum of %d row is %d\n",i+1,sum);
		printf("Mean of %d row is %d\n",i+1,mean);
	}
}

void sum_mean_col_major(int (*parr)[], int rows, int cols)
{
	int arr[rows][cols], sum=0, mean, i, j;
	parr=arr;

	for(j=0; j<cols; j++)
	{
		for(i=0; j<rows; i++)
		{
			sum=sum + (*(*(arr+i)+j));
		}

		mean=sum/rows;

		printf("Sum of %d coloumn is %d\n",j+1,sum);
		printf("Mean of %d coloumn is %d\n",j+1,mean);
	}
}
