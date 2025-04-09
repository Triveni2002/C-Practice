#include <stdio.h>
#include <math.h>

int main(){
    float a;
    printf("Enter the angle:");
    scanf("%f",&a);
    a=a*3.14/180;
    float s,c,t;
    s=sin(a);
    c=cos(a);
    t=tan(a);
    printf("Trignomatric ratios are :");
    printf("%f %f %f",s,c,t);
}