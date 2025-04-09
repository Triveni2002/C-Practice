#include <stdio.h>

int main(){
    int i=21;
    int x;
    while(i!=0){
        printf("pick the number:");
        scanf("%d",&x);
        if(x>4 || x<1){
            continue;
        }
        if(i==1){
            printf("you lost the game");
            break;
        }
        int t=5-x;
        i=i-(t+x);
    }
}