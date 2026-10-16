#include <stdio.h>
int main() {
    float m;
    int p,d;
    scanf("%f%d%d",&m,&p,&d);
    if(m*p>=d)
        printf("Can reach");
    else
        printf("Cannot reach");
    return 0;
}
