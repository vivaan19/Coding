#include<stdio.h>
void main()
{
    int A[100][100], i, j, m, n;

    printf("Enter the numbers of rows:");
    scanf("%d",&m);

    printf("Enter the number of coloumns:");
    scanf("%d",&n);

    // to read 

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    // to display

    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("\t %d",A[i][j]);
        }
    }
}