#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char *ch;
    unsigned int t, i,count=0, j;

    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        ch=(char *)malloc(100*sizeof(char));
        scanf("%s",ch);
        j=0;
        while(ch[j] != '\0')
        {
            if(ch[j] == '4')
            {
                count++;
            }
            j++;
        }
        printf("count=%d\n",count);
        count=0;
        free(ch);
    }

    return 0;
}






//Problem Code: LUCKFOUR
/*
int luck(unsigned int *p)
{
    int rem,count=0;

    while(*p != 0)
    {
        rem=*p%10;

        if(rem == 4)
         count++;
        *p=*p/10;
    }
    return count;
} 

int main()
{
    unsigned int t,*a, i;
    scanf("%d",&t);

    a=(int *)malloc(t*sizeof(int));

    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
        printf("count=%d\n",luck(&a[i]));
    }
    return 0;
}
*/