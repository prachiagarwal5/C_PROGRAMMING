#include <stdio.h>
int main()
{
    int a;
    int c=0;
    
    printf("enter the number");
    scanf("%d",&a);
 
    while(a!=0){
    a/=10;
    c++;
   
    
    }
      printf("%d",c);
 }
