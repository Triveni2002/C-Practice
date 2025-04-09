//without recursion
/*#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[10];
    int i=0;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}*/

//Recursion

#include <stdio.h>

int toBinary(int n,int i,int* a){
    a[i]=n%2;
    if(n==0){
        return i;
    }
    return toBinary(n/2,i+1,a);

}
int main(){
    int n;
    int a[10];
    int i=0;
    scanf("%d",&n);
    int l=toBinary(n,i,a);
    for(int j=l-1;j>=0;j--){
        printf("%d",a[j]);
    }
}
