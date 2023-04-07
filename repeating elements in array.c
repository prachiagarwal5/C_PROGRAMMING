#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n],i,max,b[100]={0};
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    max++;
    for(i=0;i<n;i++)
        b[a[i]]++;
    
    for(i=0;i<max;i++){
if(b[i]>1)
        printf("repeating elements are:%d\n",i);
    }
 return 0;   
}

