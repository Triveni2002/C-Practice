#include <stdio.h>

int main(){
    int x,y,z;
    printf("enter the numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z && z==x){
        printf("equilateral triangle");
    }else if(x==y || y==z || z==x){
        printf("isosceless triangle");
    }else{
        if((x*x+y*y==z*z ) || y*y+z*z==x*x || z*z+x*x==y*y){
            printf("Right angled triangel");
        }else{
            printf("scalen tringle");
        }
    }
}