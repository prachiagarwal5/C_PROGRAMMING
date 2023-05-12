#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
printf("enter the string");
gets(a);
for(int i=0;a[i];i++)
printf("the length of string is %d",i+1);
}
