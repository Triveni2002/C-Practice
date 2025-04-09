#include <stdio.h>
#include <string.h>
int is_vowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        return 1;
    }
    return 0;
}
int is_succeed(char* str){
    int n=strlen(str);
    for(int i=0;i<n-1;i++){
        if(is_vowel(str[i]) && is_vowel(str[i+1])){
            return 1;
        }
    }
    return 0;
}

int main(){
    char str[80];
    scanf("%[^\n]s",str);
    char* token;
    token=strtok(str," ");
    int c=0;
    while(token!=NULL){
        if(is_succeed(token)){
            c++;
        }
        token=strtok(NULL," ");
    }
    printf("%d",c);
}