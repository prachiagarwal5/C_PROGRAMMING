#include <stdio.h>
int main(){
    int a,rem[100],i;
    printf("enter the number");
    scanf("%d",&a);
    for( i=0;a>0;i++){
        rem[i]=a%2;
        a/=2;
    }
   printf("binary of a number is") ;
   for(i=i-1;i>=0;i--){
       printf("%d",rem[i]);
   }
}
