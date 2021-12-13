#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ram[100],i,x,num;
	printf("Enter the size of array\n");
	scanf("%d",&num);
	printf("Enter %d array elements\n",num);
	for(i=0;i<num;++i)
	{
		scanf("%d",&ram[i]);
	}
	printf("Enter element to search\n");
	scanf("%d",&x);
	for(i=0;i<num;++i)
	{
		if(ram[i]==x)
		break;
	}
	if(i<num)
	printf("Element found at %d index\n",i);
	else
	printf("Element not found\n");

    return 0;
}
