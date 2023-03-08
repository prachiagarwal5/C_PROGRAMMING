#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    for(int i=65;i<=69;i++){
        for(int j=65;j<=i;j++){
            
            printf("%c",(char)j);
            
        }
        printf(" \n");
    }
}
