#include <stdio.h>
#include <string.h>
int main(){
    char isbn[10];
    scanf("%s",isbn);
    int n=strlen(isbn);
    int s=0;
    int j=1;
    for(int i=n-1;i>=0;i++){
        int t=isbn[i]-'0';
        s=s+j*t;
        j++;
    }
    if(s%11==0){
        printf("correct ISBN number");
    }else{
        printf("not a correct ISBN number");
    }
}