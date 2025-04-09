#include <stdio.h>
void modify(int* arr){
    for(int i=0;i<10;i++){
        arr[i]=arr[i]*3;
    }
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    modify(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}