#include <stdio.h>

int main(){
    int l,b;
    printf("enter the values:");
    scanf("%d %d",&l,&b);
    int a=l*b;
    int p=2*(a+b);
    if(a>p){
        printf("Yes");
    }else{
        printf("no");
    }
}