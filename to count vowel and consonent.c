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
        if(ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U'){
        alpha++;
        }
     
        else{
        special++;
        }
        
    }
    printf("the number of vowels are =%d\n",alpha);
        printf("the number of consonents are =%d\n",special);
    

    return 0;
}
