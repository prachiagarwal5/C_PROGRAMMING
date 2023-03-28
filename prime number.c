#include <stdio.h>
int main(){
    int x,c;
    c=0;
    printf("enter the number");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0)
        c++;
    }
    if(c==2)
    printf("the number is prime");
    else
    printf("the number is not prime");
}
