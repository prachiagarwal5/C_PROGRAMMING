#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int b[26]={0};
printf("enter the string");
scanf("%s",a);
int i;
for(i=0;a[i];i++){
    b[a[i]-97]++;
}
for(i=0;i<26;i++){
    if(b[i]!=0)
    printf("%c",i+97);
}

    return 0;
}
