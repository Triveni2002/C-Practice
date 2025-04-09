#include <stdio.h>

int sum(int n,int s){
    
    
    if(n==0){
        return s;
    }
    return sum(n-1,s+n);
}
int main(){
    int n;
    scanf("%d",&n);
   
    
    printf("%d",sum(n,0));
}