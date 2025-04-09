#include <stdio.h>

int main(){
    float r,g,b;
    printf("enter the nmbers:");
    scanf("%f %f %f",&r,&g,&b); 
    float w,c,m,y,b1;
    if(r==0 && g==0 && b==0){
        c=0,m=0,y=0,b1=1;
        printf("CMYK : %f %f %f %f",c,m,y,b1);
    }else{
    r=r/255;
    g=g/255;
    b=b/255;
   
    float max=r;
    if(g>max){
        max=g;
    }
    if(b>max){
        max=b;
    }
    w=max;
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    b1=1-w;
    printf("CMYK : %f %f %f %f %f",w,c,m,y,b1);
    }
}