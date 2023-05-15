#include <stdio.h>

int main()
{
    char a[100];
    int i,alpha,digit,special;
    i=alpha=digit=special=0;
    printf("\nenter the string");
    gets(a);
    while(a[i]!='\0'){
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
        alpha++;
        }
        else if(a[i]>='0'&&a[i]<='9'){
        digit++;
        }
        else{
        special++;
        }
        i++;
    }
    printf("the number of alphabets are =%d\n",alpha);
      printf("the number of digits are =%d\n",digit);
        printf("the number of special characters are =%d\n",special);
    

    return 0;
}
