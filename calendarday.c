#include <stdio.h>

int main(){
    int givenYear=2001;
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    int totalYears=year-givenYear;
    int leapYear = totalYears/4;
    int nonLeap=totalYears-leapYear;
    int day=leapYear*366 + nonLeap*365 + 1;
    if(day%7==0){
        printf("sunday");
    }if(day%7==1){
        printf("monday");
    }if(day%7==2){
        printf("tuesday");
    }if(day%7==3){
        printf("wednesday");
    }if(day%7==4){
        printf("thursday");
    }if(day%7==5){
        printf("friday");
    }if(day%7==6){
        printf("saturday");
    }
    return 0;
}