#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a[10];
    int l=0;
    while(n>0){
        int r=n%8;
        printf("%d\n",r);
        a[l]=r;
        l++;
       
        n=n/8;
      
        
    }
    for(int i=l-1;i>=0;i--){
        printf("%d",a[i]);
    }
 
}