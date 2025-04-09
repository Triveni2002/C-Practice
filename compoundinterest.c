#include <stdio.h>
#include <math.h>
int main(){
    int p,n;
    float q,r;
     float a;
     for(int i=1;i<=10;i++){
        scanf("%d %d %f %f\n",&p,&n,&q,&r);
   
        a=p*pow((1+r/q),n*q);
        printf("%f\n",a);
     }
    
}