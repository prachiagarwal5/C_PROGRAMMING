
#include <stdio.h>

int main()
{
int n,m,i,j,k=0;
printf("enter the value of m and n");
scanf("%d%d",&n,&m);
int a[n][m],*b[m*n];
printf("enter the values in array");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[k++] = &a[i][j];
}}
for(i=0;i<(n*m);i++){
printf("%d",*b[i]);
}
    return 0;
}
