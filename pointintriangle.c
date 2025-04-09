#include <stdio.h>
#include <math.h>
float distance(int x1,int x2,int y1,int y2){
    float d=pow((x2-x1),2)+pow((y2-y1),2);
    d=sqrt(d);
    return d;
}
float area(int a,int b,int c){
    float s,m,x;
    s=(a+b+c)/2;
    m=s*(s-a)*(s-b)*(s-c);
    x=sqrt(m);
    return x;
}
int main(){
    int x1,x2,x3,x;
    int y1,y2,y3,y;
    printf("enter the values:");
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x,&y);
    float a=distance(x1,x2,y1,y2);
    float b=distance(x1,x3,y1,y3);
    float c=distance(x2,x3,y2,y3);
    float a1=distance(x1,x,y1,y);
    float b1=distance(x2,x,y2,y);
    float c1=distance(x3,x,y3,y);
    float ar,ar1,ar2,ar3;
    ar=area(a,b,c);
    ar1=area(a,a1,b1);
    ar2=area(b,a1,c1);
    ar3=area(c,c1,b1);
    float t=ar1+ar2+ar3;
    if(t!=ar){
        printf("point outside the triangle\n");
    }else{
        printf("point inside the trianglr");
    }
}
