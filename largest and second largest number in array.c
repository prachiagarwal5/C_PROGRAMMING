#include <stdio.h>

int main()
{
int n,max1,max2;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];

for(int i=0;i<n;i++)
scanf("%d",&a[i]);
max1=max2=a[0];
for( int i=1;i<n;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]<max1 && a[i]>max2)
    max2=a[i];
}
printf("largest number in array = %d\n",max1);
printf(" second largest number in array = %d",max2);
}
