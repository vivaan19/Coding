#include <stdio.h>
#include <stdlib.h>

void sum(int rows, int cols, int (*)[cols]);

void main()
{
    int **a, rows, cols, i, j;

    printf("Enter rows and cols:");
    scanf("%d %d",&rows,&cols);

    a=(int **)malloc(rows*sizeof(int *));

    if(a == NULL)
		printf("Memory not allocated\n");

	for(i=0; i<rows; i++)
	{
		a[i]=(int *)malloc(cols*sizeof(int));
		if(a[i] == NULL)
			printf("Memory not allocated\n");
	}

	printf("Enter elements:\n");

	int (*pa)[cols];

	pa=a;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("\nA[%d][%d]=",i,j);
			scanf("%d",*(pa+i)+j);
		}
	}

	sum(rows,cols,pa);

}

void sum(int rows, int cols, int (*pa)[cols])
{
	int i, j, sum_1=0, sum_2=0, sum_3=0;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(i == j)
			{
				sum_1=sum_1+(*(*(pa+i)+j));
			}
			else if(i<j)
			{
				sum_2=sum_2+(*(*(pa+i)+j));
			}
			else if(i>j)
			{
				sum_3=sum_3+(*(*(pa+i)+j));
			}
		}
	}

	printf("The sum of diagonal elements are:%d\n",sum_1);
	printf("The sum of above diagonal elements are:%d\n",sum_2);
	printf("The sum of lower diagonal elements are:%d\n",sum_3);
}
