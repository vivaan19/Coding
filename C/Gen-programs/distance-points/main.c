#include <stdio.h>
#include<math.h>
int main(void){
    int x1,y1,x2,y2,pow1,pow2;
    float dist;
    printf("Coordinates of point 1 :: X1,Y1\n");
    scanf("%d%d",&x1,&y1);
    printf("Coordinates of point 2 :: X2,Y2\n");
    scanf("%d%d",&x2,&y2);
    pow1=pow((x2-x1),2);
    pow2=pow((y2-y1),2);
    dist=sqrt(pow1+pow2);
    printf("Distance between two points is %f\n",dist);

}
