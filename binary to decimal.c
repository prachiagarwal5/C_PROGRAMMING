#include <stdio.h>
int main(){
    int a,count,rem;
    int y=0;
    int base=1;
    printf("enter the number");
    scanf("%d",&a);
    while(a){
        rem=a%10;
        y+=rem*base;
        base=base*2;
        a/=10;
    }
    printf("%d",y);
}
