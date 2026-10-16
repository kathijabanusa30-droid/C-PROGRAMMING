#include <stdio.h>
int main() {
    float p,r,y,i,a,d,f;
    scanf("%f%f%f",&p,&r,&y);
    i=p*r*y/100;
    a=p+i;
    d=i*0.02;
    f=a-d;
    printf("%.2f\n%.2f\n%.2f\n%.2f",i,a,d,f);
    return 0;
}
