#include <stdio.h>
int main(){
 int m,n;
 int p=1;
 printf("enter the number");
 scanf("%d",&m);
 printf("enter the power");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
    p=p*m; ;
    
 }
 printf("%d raise to power  %d is %d",m,n,p);
}
