#include <stdio.h>
void array(int,int*,int*);
void main()
{
int n,i;
printf("enter the number of elements");
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
    printf("enter the elements");
scanf("%d",&a[i]);
}
array(n,a,b);

for(i=0;i<n;i++)
printf("%d",b[i]);
}
void array(int n,int*a,int*b){
    int i,j=0;
    for(i=(n-1);i>=0;i--){
        b[j]=a[i];
        j++;
    }
}
