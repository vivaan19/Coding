// Program to demostrate to read, display,add, substract complex numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{

	typedef struct student
	{
		int real;
		int img;
	}COMPLEX;

	COMPLEX c1, c2, sum, sub;
	int o;


	do{

		printf("\n*********MENU***********\n");

		printf("Press 1 for reading the input\n");
		printf("Press 2 for displaying the input\n");
		printf("Press 3 for addition\n");
		printf("Press 4 for substraction\n");
		printf("Press 5 for EXIT\n");

		printf("Enter your option: ");
		scanf("%d",&o);

		switch(o)
		{

			case 1:

				printf("Enter your first complex number\n");
				printf("Enter the real part and imaginary part respectively: ");
				scanf("%d %d",&c1.real,&c1.img);
				printf("Enter your second complex number\n");
				printf("Enter the real and complex part: ");
				scanf("%d %d",&c2.real,&c2.img);
				break;

			case 2:

				printf("Fist complex number = %d+%di\n",c1.real,c1.img);
				printf("Second complex number = %d+%di\n",c2.real,c2.img);
				break;

			case 3:

				sum.real = c1.real+c2.real;
				sum.img =  c1.img + c2.img;
				printf("The sum is: %d+%di\n",sum.real,sum.img);
				break;

			case 4:

				sub.real = c1.real - c2.real;
				sub.img = c1.img - c2.img;

				printf("The difference is: %d+%di\n",sub.real,sub.img);
				break;
		}

	}while(o!=5);

return 0;

}
