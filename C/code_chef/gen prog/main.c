#include <stdio.h>
#include <stdlib.h>
/*

int main(void) {
	// your code goes here
	int t,a[3],max, i, j, k, second_max;

	scanf("%d",&t);

	for(i=0; i<t; i++)
	{
	    for(j=0; j<3; j++)
	    {
	        scanf("%d",&a[j]);
	    }

	    max=a[0];
	    for(j=0; j<3; j++)
	    {
	        if(a[j] > max)
	        max=a[j];
	    }

	    int c=1;
	    while(c != 0)
	    {
	        max--;
	        for(j=0; j<3; j++)
	        {
	            if(a[j] == max)
	            {
	            second_max = a[j];
	            c=-1;
	            }
	        }
	        c++;
	    }

	    printf("%d\n",second_max);
	}
	return 0;
}

*/

/*
int main(void) {
	// your code goes

	int n, i, j, r;
	scanf("%d",&n);

	int a[n][n];

	for(i=0; i<n; i++)
	{
	    for(j=0; j<n; j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}


	r=0;

    while(r<=(n/2))
    {

	for(i=r,j=r; j<n-r; j++) // left to right
    {
        printf("%d ",a[i][j]);
    }

    j=n-1-r;
    for(i=i+1; i<n-r; i++)  // top to bootom
    {
        printf("%d ",a[i][j]);
    }

    i=n-1-r;
    for(j=j-1; j>=0+r; j--)  // from right to left
    {
        printf("%d ",a[i][j]);
        // j=-1
    }

    for(j=r,i=n-2-r; i>=j+1; i--) // bottom to top
    {
        printf("%d ",a[i][j]);
    }

    r++;
    }

	return 0;
}
*/

/*
int main(void) {
	// your code goes here
	int n, rem, count=0;

	// enter number
	scanf("%d",&n);

	while(n != 0)
	{
	rem=n%10;
	count++;
	n=n/10;
	}

	if(count == 1)
	printf("1\n");

	else if(count == 2)
	printf("2\n");

	else if(count == 3)
	printf("3\n");

	else
	printf("More than 3");
	return 0;
}
*/

void main()
{
    int a[20], n, temp, i, j;
    printf("Enter size:");
    scanf("%d",&n);

    for(i=0; i<n ;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");

    for(i=0; i<n; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
