#include <stdio.h>

int main(){
    int arr[25];
    for(int i=0;i<25;i++){
        scanf("%d\n",&arr[i]);
    }
    int m=arr[0];
    for(int i=1;i<25;i++){
        if(arr[i]<m){
            m=arr[i];
        }
    }
    printf(" minimum element of the array is :%d",m);
}