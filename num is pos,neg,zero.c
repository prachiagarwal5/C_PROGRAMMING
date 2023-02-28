#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the number" );
    scanf("%d",&a);

    
    if(a>0){
        printf("the greatest number is positive");
    }
    else{
        if(a==0){
            printf("the number is zero");
        }
        else{
            printf("the number is negative");
        }

    }
}
