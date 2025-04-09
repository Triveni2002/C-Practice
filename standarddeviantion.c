#include <stdio.h>
#include <math.h>
int main(){
    int a[15];
    for(int i=0;i<15;i++){
        scanf("%d",&a[i]);
    }
    float mean;
    for(int i=0;i<15;i++){
        mean=mean+a[i];
    }
    float in;
    for(int i=0;i<15;i++){
        in=in+pow((a[i]-mean),2);
    }
    in=sqrt(in);
    float res=in/15;
    printf("%f",in);
}