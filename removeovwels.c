#include <stdio.h>
#include <string.h>
void remove_vowel(char* str){
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='i' || str[i]=='o' || str[i]=='e' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            for(int j=i;j<n;j++){
                str[j]=str[j+1];
            }
            
        }
        n--;
        
    }
}
int main(){
    char s[80];
    fgets(s,sizeof(s),stdin);
    char* token;
    token=strtok(s," \n");
    while(token!=NULL){
        remove_vowel(token);
        printf("%s ",token);
        token=strtok(NULL," \n");
    }
    
}
/*#include <stdio.h>
#include <string.h>

void remove_vowels(char* str) {
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!(str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char s[80];
    fgets(s, sizeof(s), stdin);
    char* token;
    token = strtok(s, " \n"); // Added newline character to remove it from the string
    while (token != NULL) {
        remove_vowels(token);
        printf("%s ", token); // Print space after each word
        token = strtok(NULL, " \n");
    }
    printf("\n"); // Print newline at the end
    return 0;
}*/
