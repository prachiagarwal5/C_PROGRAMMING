#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number;" );
    scanf("%d",&a);
    printf("enter the second number;" );
    scanf("%d",&b);
    printf("enter the third number;" );
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("the greatest number is:");
        printf("%d",a);
    }
    else if(b>c && b>a){
    printf("the greatest number is;" );
    printf("%d",b);
    }
    else{
    printf("the greatest number is;" );
    printf("%d",c);
    }
}
