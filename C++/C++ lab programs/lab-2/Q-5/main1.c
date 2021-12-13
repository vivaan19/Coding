
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2], i, j, k, l;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("+");
            for(k=0; k<3; k++)
            {
                for(l=0; l<5; l++)
                {
                    printf(" ");
                }
            }
        }
    }
    return 0;
}

