#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,alpha,special,ch,k;
    i=alpha=special=0;
    printf("\nenter the string");
    gets(a);
   
    k=strlen(a);
    for(i=0;i<k;i++){
         ch=a[i];

        alpha++;
        
    }
    printf("the number of words are =%d\n",alpha);

    

    return 0;
}
