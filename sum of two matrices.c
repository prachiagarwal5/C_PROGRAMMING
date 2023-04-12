#include <stdio.h>

int main()
{
        int n,i,j,m;
        int a[100][100],b[100][100],sum[100][100];
        printf("enter the number of rows");
        scanf("%d",&n);
        printf("enter the number of column");
        scanf("%d",&m);
        printf("enter the first matrix");
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        printf("enter the second matrix");
         for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
        printf("the sum of two matrices is");
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }
    printf("\n");
}
}
