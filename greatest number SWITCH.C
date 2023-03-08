#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    switch(a>b){
        case 1:
        printf("the greatest number is %d",a);
        break;
        case 0:
        printf("the greatest number is %d",b);
        break;        

        default:
        printf("ERROR");
        break;
    }
 return 0;
}
