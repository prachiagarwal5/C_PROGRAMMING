#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char k=65;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%c",k);
            k++;
        }
        printf(" \n");
    }
}
