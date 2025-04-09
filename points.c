#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter the numbers:");
    scanf("%d %d %d %d %d %d", &x1,&x2,&x3,&y1,&y2,&y3);
    int s1,s2,s3;
    s1=(abs(y2-y1))/(abs(x2-x1));
    s2=(abs(y3-y2))/(abs(x3-x2));
    s3=(abs(y3-y1))/(abs(x3-x1));
    if(s1==s2 && s2==s3){
        printf("points on straight line");
    }else{
        printf("points are not on the straight line");
    }
}