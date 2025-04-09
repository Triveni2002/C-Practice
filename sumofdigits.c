#include <stdio.h>

int main(){
    int num;
    printf("enter five digit number:");
    scanf("%d",&num);
    int sum=0;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num=num/10;
    sum+=num%10;
    printf("sum of five digit number is :");
    printf("%d",sum);
}