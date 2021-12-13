#include<stdio.h>

void main()
{
    // program to multiply two matrices
    
    int A[100][100], B[100][100], C[100][100], row1, col1, row2, col2, i, j, k;

    printf("Enter the row of matrix 1:");
    scanf("%d",&row1);
    printf("\nEnter the col of matrix 1:");
    scanf("%d",&col1);

    // enter elements in first matrix
    printf("Enter elements in matrix 1:\n");

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter the row in matrix 2:");
    scanf("%d",&row2);
    printf("\nEnter the col of matrix 2:");
    scanf("%d",&col2);

    // before entering the value in second matrix check that the col of matrix 1 should be equal
    // to row of matrix 2 

    if(col1 != row2)
     printf("Matrix multiplcation cannot happen\n");
    else
    {
        printf("Enter elements in matrix 2:\n");

        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
        }
    }
    
    // now comes the matrix multiplication
    // the resultant rows and cols of final matrix will be row1xcol2
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            C[i][j]=0;
            for(k=0; k<col2; k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    // to print the final matrix

    printf("The multiplied matrix is:\n");
    for(i=0; i<row1; i++)
    {
        printf("\n");
        for(j=0; j<col2; j++)
         printf("\t %d",C[i][j]);
    }
}