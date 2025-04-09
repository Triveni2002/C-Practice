#include <stdio.h>
#include <stdlib.h>

int main(){
    float f;
    printf("enter the number :");
    scanf("%f",&f);
    float c;
    c=(f-32)*(5/9);
    printf("%.2f",c);
}