#include <stdio.h>
struct engine{
    int s_no[3];int year;char material[30];float quan;
};
void display(struct engine e[]){
    for(int i=0;i<2;i++){
        printf("%x %d %s %f",e[i].s_no,e[i].year,e[i].material,e[i].quan);
    }
}
void sno(struct engine e[]){
    for(int i=0;i<2;i++){
        if(e[i].s_no>=0xbb1 && e[i].s_no<=0xcc6){
            printf("%x %d %s %f",e[i].s_no,e[i].year,e[i].material,e[i].quan);
        }
    }
}
int main(){
    struct engine e[60];
    for(int i=0;i<2;i++){
        scanf("%x",&e[i].s_no);
        fflush (stdin) ;
        scanf("%d",&e[i].year);
        fflush (stdin) ;
        scanf("%s",&e[i].material);
        fflush (stdin) ;
        scanf("%f",&e[i].quan);
        
    }
    display(e);
    sno(e);
}