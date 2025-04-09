#include <stdio.h>
#include <math.h>
float distance(int x1,int x2,int y1,int y2){
    int d=pow((x2-x1),2)+pow((y2-y1),2);
    float fd=sqrt(d);
    return fd;
}
int main(){
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    int y[10]={0,1,2,3,4,5,6,7,8,9};
    float s=0.0;
    for(int i=0;i<9;i++){
        s+=distance(x[i],x[i+1],y[i],y[i+1]);
    }
    printf("%f",s);
}