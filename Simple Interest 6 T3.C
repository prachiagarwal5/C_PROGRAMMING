#include <stdio.h>


int main() {  
    int p,r,t,s,m;
    scanf("%d\n%d\n%d\n",&p,&r,&t);
    s=(p*r*t)/100;
    m=p+s;
    printf("%d",m);
    return 0;
}
