

#include <stdio.h>
int main(){
long x,y,z;
int n;
 x=0;
 y=1;
printf("enter the number :");
scanf("%d",&n);
printf("%ld",x);
printf("%ld",y);
for(int i=2;i<=n;i++){
    z=x+y;
    printf("%ld",z);
    x=y;
    y=z;
}
printf("\n");

    return 0;
}
