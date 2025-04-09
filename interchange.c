#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    int t;
    t=a;
    a=b;
    b=t;
    printf("Numbers after interchange:");
    printf("%d %d",a,b);
}