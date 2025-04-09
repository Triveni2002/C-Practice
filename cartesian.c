#include  <stdio.h>
#include <math.h>
int main(){
    float x,y;
    printf("enter the numbers :");
    scanf("%d %d",&x,&y);
    float d,p;
    d=sqrt(x*x+y*y);
    p=atan2(y,x);
    printf("%f %f",d,p);
}