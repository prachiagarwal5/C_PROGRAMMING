#include <stdio.h>
#include <string.h>
int main()
{
   int i;
    char a[100];
    char b[100];
printf("enter the string");
gets(a);
printf("enter the second string");
gets(b);
strcat(a,b);
printf("the concatenate string is %s\n",a);

}
