#include <stdio.h>

int main(){
    int class,fail;
    scanf("%d %d",&class,&fail);
    switch(class){
        case 1:
            if(fail>3){
                printf(" no grace marks ");
            }else{
                printf("grace marks : %d",5*fail);
            }
            break;
         case 2:
            if(fail>2){
                printf("no grace marks");
            }else{
                 printf("grace marks : %d",4*fail);
            }
            break;
         case 3:
            if(fail>1){
                printf("no grace marks");
            }else{
                printf("grace marks : %d",3*fail);
            }
            break;
        default:
            break;
    }
}