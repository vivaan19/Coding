// Program to demostrate the use of malloc() in DMA

#include <stdio.h>
#include <stdlib.h> // This library function allows to use DMA functions.

void main()
{
	int *ptr;
	int n , i;

	printf("Enter how many elements to enter: ");
	scanf("%d",&n);

	// Now for "n" elements there will be space for it dynamically using malloc() function.

	ptr=(int*)malloc(n * sizeof(int));  // This allows to allocate memory according to "n".

	if(ptr==NULL)
	printf("Memory not allocated\n");

	else
	{
		printf("Yes ! Memory has been allocated\n");

		printf("Now please enter the elements inside the dynamic array\n");

		for(i=0 ; i<n ; ++i)
		{
			printf("\na[%d]= ",i);
			scanf("%d",&ptr[i]);
		}
		printf("The elements are:\n");
		for(i=0 ; i<n ; ++i)
		{
			printf("\na[%d]=%d\n",i,ptr[i]);
		}
	}
}
