#include <stdio.h>
#include <string.h>
int main()
{
   int i;
    char a[100];
    char b[100];
printf("enter the string");
gets(a);
for( i=0;a[i];i++)
{
    b[i]=a[i];
}
printf("the original string is %s\n",a);
printf("the copied string is %s",b);
}
