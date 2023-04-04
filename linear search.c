#include <stdio.h>

int main()
{
   int n,a[n],ele,f,index;
   printf("enter the number of elements:");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
  printf("enter the elements of array");
   scanf("%d",&a[i]);
   }
   printf("enter the element to be found");
   scanf("%d",&ele);
   for(int i=0;i<n;i++){
   if(a[i]==ele){
   f=1;
   index=i+1;
   break;
}
}
if(f==1)
printf("element found in array at postion %d",index+1);
else
printf("element does bot found");
    return 0;
}
