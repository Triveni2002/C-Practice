#include <stdio.h>

struct crickters{
    char name[29];int age;int nom;float avgrun;
};
int compare_score(const void* a,const void* b){
    return (((struct crickters*) a)->avgrun)-(((struct crickters*) b)->avgrun);
}
int main(){
    struct crickters c[3];
    for(int i=0;i<3;i++){
        scanf("%s",&c[i].name);
        fflush(stdin);
        scanf("%d",&c[i].age);
        fflush(stdin);
        scanf("%f",&c[i].avgrun);
    }
    qsort(c,3,sizeof(struct crickters),compare_score);
    for(int i=0;i<3;i++){
        printf("%s %d %f",c[i].name,c[i].age,c[i].nom,c[i].avgrun);
    }
}