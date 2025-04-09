#include <stdio.h>

int isLeap(int year){
    if(year%4==0 || (year%100==0 && year%400==0)){
        return 1;
    }
    return 0;
}
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(isLeap(year)==1){
        printf("year is leap year");
    }else{
        printf("year is not a leap year");
    }
}