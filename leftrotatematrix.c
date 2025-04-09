#include <stdio.h>
#include <stdlib.h>
void rotate(int arr[4][5]){
    for(int k=0;k<2;k++){
        for(int i=0;i<4;i++){
            
            for(int j=0;j<5;j++){
                if(j==4){
                arr[i][4]=arr[i][0];
                }
                arr[i][j]=arr[i][j+1];
            }
            }
            
        }
    
    for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                printf("%d",arr[i][j]);
            }
    }
}
int main(){
    int mat[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
        }
        
    }
    rotate(mat);
    
}