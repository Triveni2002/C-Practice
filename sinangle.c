#include <stdio.h>
#include <math.h>
int main(){
    float a[6],b[6],angle[6];
    for(int i=0;i<6;i++){
        scanf("%f\n%f\n%f\n",&a[i],&b[i],&angle[i]);
    }
    float area[6];
    for(int i=0;i<6;i++){
        area[i]=a[i]*b[i]*sin(angle[i])*(1.0/2);
    }
    float max=area[0];
    for(int i=1;i<6;i++){
        if(area[i]>max){
            max=area[i];
        }
    }
    printf("%f",max);
}