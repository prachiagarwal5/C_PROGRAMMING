#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
c=(a>b)?a:b;
while(1){
if((c%a==0) && (c%b==0)){
printf("%d",c);
break;
}
++c;
}
    return 0;
}
