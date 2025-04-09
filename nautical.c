#include <stdio.h>
#include <math.h>

int main(){
    float l1,l2,g1,g2;
    printf("enter the numbers:");
    scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
    l1=l1*180/3.14;
    l2=l2*180/3.14;
    g1=g1*180/3.14;
    g2=g2*180/3.14;
    float d;
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("distance between two places on earth :");
    printf("%f",d);
}