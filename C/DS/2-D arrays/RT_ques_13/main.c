#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={2, 4, 5, 8,10, 9}, i, j, max, min;

    max=a[0];

    for(i=0; i<6; i++)
	{
		if(a[i]>max)
			max=a[i];
	}

	min=a[0];
	for(i=0; i<6; i++)
	{
		if(a[i]<min)
			min=a[i];
	}

	int c=1, second_max, second_min, d=1;
	while(c != 0)
	{
		max--;
		for(j=0; j<6; j++)
		{
			if(a[j] == max)
			{
				second_max=a[j];
				c=-1;;
			}
		}
		c++;
	}

	printf("Second max=%d\n",second_max);

	while(d != 0)
	{
		min++;
		for(j=0; j<6; j++)
		{
			if(a[j] == min)
			{
				second_min=a[j];
				d=-1;;
			}
		}
		d++;
	}

	printf("Second min=%d\n",second_min);

    return 0;
}
