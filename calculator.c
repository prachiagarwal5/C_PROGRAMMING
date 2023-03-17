#include <stdio.h>
int main()
{
    int a,b;
    char c;
        printf("Enter the operator");
    scanf("%c",&c);
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
int d=a+b;
int e =a-b;
int f= a*b;
int g=a/b;
int h=a%b;
    switch(c){
     case '+':

    printf("%d",d);
    break;
     case '-':
    printf("%d",e); 
    break;
     case '*':
    printf("%d",f); 
    break;
     case '/':
    printf("%d",g); 
    break;

     case '%':
   printf("%d",h); 
    break;
    
}
 return 0;
}
