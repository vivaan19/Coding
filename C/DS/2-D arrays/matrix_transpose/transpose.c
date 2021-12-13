#include<stdio.h>
// Converting a matrix into a transposed matrix
void main()
{
    int mat[100][100], i, j, m, n, transposed_mat[100][100];

    printf("Enter Rows:");
    scanf("%d",&m);

    
    printf("Enter Cols:");
    scanf("%d",&n);

    // to scan elements

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    // to print original matrix

    printf("The original matrix is:\n");

    
    for(i=0; i<m; i++)
    {
        printf("\n");

        for(j=0; j<n; j++)
        {
            printf("\t %d",mat[i][j]);
        }
    }

    // if mxn==> original matrix then transposed matrix==> nxm with B(transposed)ij=A(original)ji

    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<m; j++)
        {
            transposed_mat[i][j]=mat[j][i];
        }
    }

    // To print the transposed matrix
    printf("\n The transposed matrix is:");

    for(i=0; i<n; i++)
    {
        printf("\n");
        
        for(j=0; j<m; j++)
        {
            printf("\t %d",transposed_mat[i][j]);
        }
    }
}