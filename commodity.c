#include <stdio.h>

void convert(int* kg,int* g,float* tons,float* pounds){
    *g=1000*(*kg);
    *tons=0.001*(*kg);
    *pounds=2.204*(*kg);

}
int main(){
    int kg,g;
    float tons,pounds;
    scanf("%d",&kg);
    convert(&kg,&g,&tons,&pounds);
    printf("%d %f %f",g,tons,pounds);
}