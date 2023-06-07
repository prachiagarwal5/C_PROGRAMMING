#include <stdio.h>
int main(){
int m,r,x,sum;
printf("enter the number ");
scanf("%d",&m);
x=m;
while(m!=0){
    r=m%10;
    sum+=r;
m/=10;
}
if(x%sum==0){
    printf("it is harshad number");
}
else
printf("it is not a harshad number");
}
