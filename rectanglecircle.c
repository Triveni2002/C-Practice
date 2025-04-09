#include <stdio.h>
#include <stdlib.h>

int main(){
    int l,b;
    float r;
    printf("enter the numbers:");
    scanf("%d %d %f",&l,&b,&r);
    int ra,rp;
    float ca,cp;
    ra=(l*b);
    rp=2*(l+b);
    ca=(3.14)*r*r;
    cp=2*3.14*r;
    printf("area of rectangle :");
    printf("%d\n",ra);
    printf("perimeter of rectangle:");
    printf("%d\n",rp);
    printf("area of circle:");
    printf("%f\n",ca);
    printf("perimeter of circle");
    printf("%f",cp);
}