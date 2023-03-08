#include <stdio.h>

int main()
{
    int a;
    printf("Enter the MONTH:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("31 DAYS");
        break;
        case 2:
        printf("28 DAYS");
        break;
        case 3:
        printf("31 DAYS");
        break;
        case 4:
        printf("30 DAYS");
        break;
        case 5:
        printf("31 DAYS");
        break;
        case 6:
        printf("30 DAYS");
        break; 
        case 7:
        printf("31 DAYS");
        break;
        case 8:
        printf("31 DAYS");
        break;
        case 9:
        printf("30 DAYS");
        break;
        case 10:
        printf("31 DAYS");
        break;
        case 11:
        printf("30 DAYS");
        break;
        case 12:
        printf("31 DAYS");
        break;
                                                
        default:
        printf("invalid month");
        break;
    }
 return 0;
}
