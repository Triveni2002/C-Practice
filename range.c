#include <stdio.h>

int main(){
    int n;
    int a[20];
    int l=0;
    while(n!=-1){
        scanf("%d",&n);
        a[l]=n;
        l++;
    }
    int min=a[0],max=a[0];
    for(int i=1;i<l-1;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    int d=max-min;
    printf("%d",d);
}