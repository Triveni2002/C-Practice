#include <stdio.h>
int isPrime(int n){
    if(n==2){
        return 1;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a[100];
    int l=0;
     for(int i=2;i<=n;i++){
        if(isPrime(i) && n%i==0){
            while(n%i==0){
                a[l]=i;
                n=n/i;
                l++;
            }
        }
    }
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
}