#include <stdio.h>
int main() {
    int a,b,c,n;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(n%a==0)
        printf("Car %d goes into road A",n);
    else if(n%b==0)
        printf("Car %d goes into road B",n);
    else if(n%c==0)
        printf("Car %d goes into road C",n);
    else
        printf("No path exists");
    return 0;
}
