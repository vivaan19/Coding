#include <stdio.h>
#include <stdlib.h>

void main()
{
    int marks[5][3], i, j, high;

    // first read the marks out of 20

    for(i=0; i<5; i++)
    {
        printf("Enter marks for student %d\n",i+1);
        for(j=0; j<3; j++)
        {
            printf("marks[%d][%d]=",i,j);
            scanf("%d",&marks[i][j]);
        }
    }

    // Second to find the highest marks in each subject.

    for(j=0; j<3; j++)
    {
        high=marks[0][j];
        for(i=0; i<5; i++)
        {
            if(marks[i][j]>=high)
                high=marks[i][j];
        }
        printf("Highest marks in subject %d=%d\n",j+1,high);
    }
}
