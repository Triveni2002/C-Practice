#include <stdio.h>
#include <math.h>

int main(){
    int x,y,r;
    printf("enter the numbers:");
    scanf("%d %d %d",&x,&y,&r);
    int d=x*x+y*y;
    int rad=r*r;
    if(d==rad){
        printf("point on circle");
    }else if(d<rad){
        printf("point inside the circle");
    }else{
        printf("point is outside of the circle");
    }
}