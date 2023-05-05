
#include <stdio.h>

int main()
{
int n,m,i,j,k=0;
printf("enter the value of m and n");
scanf("%d%d",&n,&m);
int a[n][m],(*p)[2];
printf("enter the values in array");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}
p=a;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d",p[i][j]);
    }
    printf("\n");
}
    return 0;
}
