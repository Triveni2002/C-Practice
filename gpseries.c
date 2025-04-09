#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d",&x);
    float s=0;
    for(int i=1;i<=7;i++){
        if(i==1){
            s=s+(x-1.0)/x;
        }else{
            s=s+(1.0/2)*pow((x-1.0)/x,i);
        }
    }
    printf("%f",s);
   
return 0 ;
}