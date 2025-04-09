#include <stdio.h>
#define MEAN(a,b) ((a+b)/2)
#define ABSOLUTE(n) (n>0?n:-1*n)
#define TOLOWER(ch) (ch+32)
#define MAX(x,y,z) (x > y && x > z ? x : y > x && y > z ? y : z)

int main(){
    int a,b,c;
    char ch;
    scanf("%d %d %d %c",&a,&b,&c,&ch);
    float m=MEAN(a,b);
    int ab=ABSOLUTE(a);
    char c=TOLOWER(ch);
    int ma=MAX(a,b,c);
    printf("%f %d %c %d",m,ab,c,ma);
}