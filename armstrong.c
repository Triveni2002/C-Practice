#include <stdio.h>

int isarmstrong(int n){
    int s=0;
    int t=n;
    while(n>0){
        int r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==t){
        return 1;
    }
    return 0;
}
int main(){
    for(int i=1;i<=500;i++){
        if(isarmstrong(i)){
            printf("%d\n",i);
        }
    }
}