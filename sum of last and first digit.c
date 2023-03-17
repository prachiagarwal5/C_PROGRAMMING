#include <stdio.h>
int main()
{
    int a;
    int c;

    
    printf("enter the number");
    scanf("%d",&a);
 c=a%10;
    while(a>10){
 a=a/10;
     }
 printf("%d\n",a+c);

 }
