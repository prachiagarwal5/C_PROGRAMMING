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
for(i=0;i<n;i++){
printf("enter the elements of array");
scanf("%d",&b[i]);

}
array(n,a,b);
for(i=0;i<n;i++)
printf("%d",b[i]);
}
void array(int n,int*a,int*b){
    int i;
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
}
