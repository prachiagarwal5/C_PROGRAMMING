#include <stdio.h>

int main()
{
    int n;
int i=1;
int s=1;
printf("enter the number");
scanf ("%d",&n);
while(i<=n){

   s*=i;
    i++;
}
printf("%d\n",s);
    return 0;
}
