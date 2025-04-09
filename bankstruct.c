#include <stdio.h>
struct bank{
    int acc_num;char name[20];float balance;
};
void display(struct bank b[]){
    for(int i=0;i<200;i++){
        printf("%d %s %f",b[i].acc_num,b[i].name,b[i].balance);
    }
}
void withdraw_deposit(struct bank b[],int acc_num,int amount,int code){
    if(code==0){
        for(int i=0;i<200;i++){
            if(acc_num==b[i].acc_num){
                if(b[i].balance<1000){
                    printf("Insufficient balance to withdraw");
                }else{
                    b[i].balance-=amount;
                }
            }
        }
    }
}
int main(){
    struct bank b[200];
    for(int i=0;i<200;i++){
        scanf("%d",&b[i].name);
        scanf("%s",&b[i].name);
        scanf("%f",&b[i].balance);
    }
    int ac,amount,c;
    scanf("%d %d %d",&ac,&amount,&c);
    display(b);
    withdraw_deposit(b,ac,amount,c);
}