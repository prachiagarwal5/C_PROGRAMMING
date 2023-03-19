#include <stdio.h>
#include <math.h>
int main(){
    int n,x,count;
    int m=0;
    printf("enter the number");
    scanf("%d",&n);
    count=log10(n);
    while(n!=0){
        m=m*10+n%10;
        n/=10;
    }
        while(m!=0){
        switch(m%10){
            case 1:
            printf("one");
            break;
            case 2:
            printf("two");
            break;
            case 3:
            printf("three");
            break;
            case 4:
            printf("four");
            break; 
            case 5:
            printf("five");
            break;
            case 6:
            printf("six");
            break; 
            case 7:
            printf("one");
            break; 
            case 8:
            printf("eight");
            break;
            case 9:
            printf("nine");
            break;
            case 0:
            printf("zero");
            break;
        }
        m=m/10;
    }
}
