#include <stdio.h>

int main(){
    int angle1,angle2,angle3;
    printf("enter the three angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if((angle1+angle2+angle3)==180){
        printf("Valid Triangle");
    }else{
        printf("not a valid triangle");
    }
}