// matrix addition of two matrices and storing the result in third matrix.

#include<stdio.h>

void main()
{
    int A[100][100], B[100][100], C[100][100], i, j, m, n;

    printf("Enter the number of rows:");
    scanf("%d",&m);

    printf("Enter the number of cols:");
    scanf("%d",&n);

    printf("ENter the elements in first matrix\n");
    // scanning elements

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the elements in second matrix:\n");

    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            C[i][j]=A[i][j] + B[i][j];
        }
    }

    printf("The resultant matrix is:\n");

    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
            printf("\t %d",C[i][j]);
    }

}