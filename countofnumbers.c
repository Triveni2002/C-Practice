#include <stdio.h>

int main(){
    int arr[25];
    for(int i=0;i<25;i++){
        scanf("%d\n",&arr[i]);
    }
    int pc=0,nc=0,ec=0,oc=0;
    for(int i=0;i<25;i++){
        if(arr[i]>0){
            pc++;
        }
        if(arr[i]<0){
            nc++;
        }
        if(arr[i]%2==0){
            ec++;
        }
        if(arr[i]%2==1){
            oc++;
        }
    }
    printf("Positive NUmbers count is: %d\n",pc);
    printf("Negative NUmbers count is: %d\n",nc);
    printf("Even NUmbers count is: %d\n",ec);
    printf("Odd NUmbers count is: %d\n",oc);
}