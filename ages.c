#include <stdio.h>

int main(){
    int ram,shyam,ajay;
    printf("enter the ages:");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest");
    }else if(shyam<ram && shyam<ajay){
        printf("shyam is youngest");
    }else{
        printf("Ajay is youngest");
    }
}