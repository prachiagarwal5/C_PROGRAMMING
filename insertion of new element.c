#include <stdio.h>

int main()
{
    int m;
   int n,ele,pos,i;
   printf("enter the size of array:");
   scanf("%d",&n);
   printf("enter the number of elements");
   scanf("%d",&m);
   int a[n];
   if(m>=n)
   printf("insertion is not possible");
   else
   {
   for(i=0;i<m;i++){
  printf("enter the elements of array");
   scanf("%d",&a[i]);
   }
   printf("enter the element  and postion of element:");
   scanf("%d \n %d",&ele,&pos);
   for (i=m-1;i>=pos;i--)
   a[i+1]=a[i];


a[pos]=ele;
m++;
for(i=0;i<m;i++){
printf(" the new array is %d\n",a[i]);
}
}
}
