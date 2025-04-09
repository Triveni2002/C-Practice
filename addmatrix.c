#include <stdlib.h>
#include <stdio.h>

int main(){
    int mat1[2][2],mat2[2][2],mat3[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",&mat3[i][j]);
        }
        printf("\n");
    }
}