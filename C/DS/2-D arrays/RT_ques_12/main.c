#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, size_1, size_2, *b, *pa, *pb;

    printf("Enter size of first array:");
    scanf("%d",&size_1);
    a=(int *)malloc(size_1*sizeof(int));

    printf("Enter elements of first array:\n");
    for(int i=0; i<size_1; i++)
	{
		printf("\nA[%d]=",i);
		scanf("%d",&a[i]);
	}

    printf("Enter size of second array:");
    scanf("%d",&size_2);
    b=(int *)malloc(size_2*sizeof(int));

    printf("Enter elements of second array:\n");
    for(int i=0; i<size_2; i++)
	{
		printf("\nB[%d]=",i);
		scanf("%d",&b[i]);
	}

	pa=a;
	pb=b;

	merge(size_1,size_2,pa,pb);

    return 0;
}

void merge(int s1, int s2, int *pa, int *pb)
{
	int *c, *pc, i, j;
	int s=s1+s2;

	c=(int *)malloc(s*sizeof(int));

	for(i=0; i<s1; i++)
	{
		c[i]=*(pa+i);
	}

	for(j=0,i=s1; j<s2; j++,i++)
	{
		c[i]=*(pb+j);
	}

	pc=c;
	display(s,pc);

}

void display(int s, int *pc)
{
	int i;
	printf("The elements are:\n");
	for(i=0; i<s; i++)
	{
		printf("C[%d]=%d\n",i,*(pc+i));
	}
}
