#include <stdio.h>

int main()
{
        int n,i,j,m,l;
        int a[100][100],b[100][100],mul[100][100];
        printf("enter the number of rows");
        scanf("%d",&n);
        printf("enter the number of column");
        scanf("%d",&m);
        printf("enter the first matrix");
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        
        printf("enter the scalar multiple");
        scanf("%d",&l);
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            mul[i][j]=a[i][j] * l;
        }
        printf("the scalar multiple of matrix  is\n");
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",mul[i][j]);
        }
    printf("\n");
}
}
