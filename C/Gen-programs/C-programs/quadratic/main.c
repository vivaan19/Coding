#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("Enter the three coeff.of the equation ax2+bx+c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;


    if(d>0){
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("%f and %f roots are distinct\n",r1,r2);

    }
    else if(d==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        r1=r2;
        printf("%f and %f roots are equal\n",r1,r2);
    }
        else{
                real=-b/(2*a);
                img=sqrt(-d)/(2*a);
            printf("%f+%fi and %f-%fi roots are imaginary\n",real,img,real,img);
        }

    return 0;
}
