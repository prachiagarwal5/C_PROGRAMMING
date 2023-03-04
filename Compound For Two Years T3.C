#include <stdio.h>
#include <math.h>

int main() { 
    int p,r;
    float a;
    scanf("%d\n%d\n",&p,&r);
    a=(p*pow((1+r*.01),2));
    printf("%.2f",a-p);
    return 0;
}
