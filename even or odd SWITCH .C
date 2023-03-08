#include <stdio.h>

int main()
{
    int a;
    printf("Enter the first number");
    scanf("%d",&a);

    switch(a%2==0){
        case 1:
        printf("THE NUMBER IS EVEN");
        break;
        case 0:
        printf("THE NUMBER IS ODD");
        break;        

        default:
        printf("INVALID NUMBER");
        break;
    }
 return 0;
}
