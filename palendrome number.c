#include <stdio.h>
#include <math.h>
int main(){
    int a,c,count,m;
    int y=0;
    m=a;
    printf("enter the number");
    scanf("%d",&a);
    count=log10(a)+1;
    while(a!=0){
        c=a%10;
        y+=pow(10,count-1)*c;
        a/=10;
        count--;
        
    }
    if(m=y){
        printf("the number is palendrom");
    }
    else{
        ("the numer is not a palendrom");
    }
}
