#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
char b[100];
printf("enter the first string");
gets(a);
printf("enter the second string");
gets(b);
if(strcmp(a,b)==0)
printf("both are equal");
else if(strcmp(a,b)>0)
printf("a is greater");
else if(strcmp(a,b)<0)
printf("b is greater");

    return 0;
}

