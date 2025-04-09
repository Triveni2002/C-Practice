#include <stdio.h>
void shift(int* x,int* y,int* z){
    int t,q;
    t=*x;
    q=*y;
    *x=*z;
    *y=t;
    *z=q;
}
int main(){
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    shift(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}