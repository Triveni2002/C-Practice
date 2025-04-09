#include <stdio.h>

int main(){
    for(int i=0;i<=23;i++){
        if(i==0){
            printf("%d midnight\n",i);
        }
        if(i>0 && i<12){
            printf("%d AM\n",i);
        }
        if(i==12){
            printf("%d NOON\n",i);
        }
        if(i>12 && i<24){
            printf("%d PM\n",i);
        }
    }
    return 0;
}