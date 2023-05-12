#include <stdio.h>
#include <string.h>
int main()
{
   int i;
    char a[100];
    char b[100];
printf("enter the string");
gets(a);
strcpy(b,a);
printf("the original string is %s\n",a);
printf("the copied string is %s",b);
}
