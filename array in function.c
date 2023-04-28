#include <stdio.h>
void array(int,int*);
void main()
{
int n,i;
printf("enter the number of elements");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
array(n,a);
}
void array(int n,int*a){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);
}
