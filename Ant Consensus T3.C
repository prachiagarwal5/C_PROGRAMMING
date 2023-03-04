#include <math.h>
#include <stdio.h>

int main() {  
    int c,k,n;
    scanf("%d\n%d\n%d",&c,&k,&n);
    
    long long l=pow(k,n)*c;
    printf("%lli",l);
    
    
    return 0;
}
