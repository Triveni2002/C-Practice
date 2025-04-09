#include <stdio.h>
#include <math.h>
int main(){
    float weight,height;
    printf("enter the values");
    scanf("%f %f",&weight,&height);
    height=height*height;
    float bmi=weight/height;
    if(bmi<15){
        printf("starvation");
    }else if(bmi>=15.1 && bmi<=17.5){
        printf("anorexic");
    }else if(bmi>=17.6 && bmi<=18.5){
        printf("underweight");
    }else if(bmi>=18.6 && bmi<=24.9){
        printf("ideal");
    }else if(bmi>=25 && bmi<=25.9){
        printf("overweight");
    }else if(bmi>=30 && bmi<=30.9){
        printf("obese");
    }else if(bmi>=40){
        printf("morbidly obese");
    }
    return 0;
}