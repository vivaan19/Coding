#include <stdio.h>
#include <stdlib.h>
/*
    program to print the total sales price value of items salesmen sold,
    and total items were sold.
*/

void main()
{
  int A[5][3], i, j, sum_sales_emp, sum_sales;

  // For scanning price of items as per salesmen.

  for(i=0; i<5; i++)
  {
      printf("Enter the price of item for salesmen %d\n",i+1);

      for(j=0; j<3; j++)
      {
          printf("A[%d][%d]=",i,j);
          scanf("%d",&A[i][j]);
      }
      printf("\n");
  }

// (i)  For printing the sum of items sold by salesmen
// 00, 01, 02; 10, 11, 12; 20, 21, 22,; 30, 31, 32; 40,41,42

    for(i=0; i<5; i++)
    {
        sum_sales_emp=0;
        for(j=0; j<3; j++)
            sum_sales_emp=sum_sales_emp+A[i][j];

        printf("Sum of sales by salesmen %d = %d\n",i+1,sum_sales_emp);
    }

    // (ii) for printing the sum of items sold individually.

    // 00,10,20,30,40; 01,11,21,31,41; 02,12,22,32,42

    for(j=0; j<3; j++)
    {
        sum_sales=0;
        for(i=0;i<5;i++)
            sum_sales=sum_sales+A[i][j];

        printf("Sale Price for item %d = %d\n",j+1,sum_sales);
    }

}
