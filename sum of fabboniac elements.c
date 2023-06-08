#include <stdio.h>
int main(){
    int n,z;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    int x=0;
    int y=1;
    printf("%d",x);
    printf("%d",y);
    for(int i=2;i<=n;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d",z);
        sum+=z;
        
    }
    printf("\n%d",(sum+1));
}
