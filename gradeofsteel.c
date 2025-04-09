#include <stdio.h>

int main(){
    int hard,cc,ts;
    printf("enter the numbers:");
    scanf("%d %d %d",&hard,&cc,&ts);
    if(hard>50 && cc<0.7 && ts>5600){
        printf("Grade is : %d",10);
    }else if(hard>50 && cc<0.7 && ts<=5600){
        printf("Grade is : %d",9);
   }else if(hard<=50 && cc<0.7 && ts>5600){
        printf("Grade is : %d",8);
   }else if(hard>50 && ts>5600 && cc>=0.7){
        printf("Grade is : %d",7);
   }else if(hard>50 || cc<0.7 || ts>5600){
         printf("Grade is : %d",6);
   }else{
     printf("Grade is : %d",5);
   }
}