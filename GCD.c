#include <stdio.h>

int main()
{
    int a,b,c,j;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);

for(int i=1;i<=a && i<=b;i++){
if(a%i==0 && b%i==0)
j=i;
}
printf("%d",j);
    return 0;
}
