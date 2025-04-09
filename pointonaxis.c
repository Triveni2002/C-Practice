#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    printf("enter the numbers:");
    scanf("%d %d",&x,&y);
    if(x==0 && (y>0 || y<0)){
        printf("point lies on y-axis");
    }else if(y==0 && (x>0 || x<0)){
        printf("point lies on x-axis");
    }else if(x==0 && y==0){
        printf("point is at origin");
    }else{
        printf("point on neither x-axis nor y-axis nor at origin");
    }
}