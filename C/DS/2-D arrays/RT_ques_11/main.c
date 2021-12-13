#include <stdio.h>
#include <stdlib.h>
//void even_odd(int cols, int rows, int (*)[cols]);

void main()
{
    int **arr, rows, cols, i, j;

    printf("Enter rows and cols:");
    scanf("%d %d",&rows,&cols);

    arr=(int **)malloc(rows*sizeof(int *));

    if(arr == NULL)
		printf("Memory not allocated\n");

    for(i=0; i<rows; i++)
	{
		arr[i]=(int *)malloc(cols*sizeof(int));
		if(arr[i] == NULL)
			printf("Memory not allocated\n");
	}

	printf("Enter elements:\n");

	int (*parr)[cols];

	parr=arr;

	for(i=0 ; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("\nA[%d][%d]=",i,j);
			scanf("%d",*(parr+i)+j);
		}
	}


	even_odd(rows, cols, parr);

}


void even_odd(int rows, int cols, int (*parr)[cols])

{
	int i, j, count_even=0, b[rows*cols], count_odd=0, c[rows*cols];
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if((*(*(parr+i)+j)%2) == 0)
			{
			b[count_even]=(*(*(parr+i)+j));
			count_even++;
			}
			else
			{
				c[count_odd]=(*(*(parr+i)+j));
				count_odd++;
			}
		}
	}

	printf("Even elements:\n");

	for(i=0; i<count_even; i++)
	{
		printf("%d ",b[i]);
	}

	printf("\nOdd elements:\n");

	for(i=0; i<count_odd; i++)
	{
		printf("%d ",c[i]);
	}
}



