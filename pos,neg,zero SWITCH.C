#include <stdio.h>

int main()
{
    int a;
    printf("Enter the first number");
    scanf("%d",&a);

    switch(a>0){
        case 1:
        printf("THE NUMBER IS POSITIVE");
        break;
        case 0:
        switch(a<0){
        case 1:
        printf("THE NUMBER IS NEGATIVE");
        break;
        case 0:
        printf("THE NUMBER IS ZERO");
        break;        
}
}
 return 0;
}
