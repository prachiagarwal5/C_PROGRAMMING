#include <stdio.h>
int main()
{

  int i;
  char ar[]="PraChi";
 
  for(i=0;ar[i]!='\0';i++){
      if(ar[i]>='a' && ar[i]<='z'){
          ar[i]=ar[i]-32;
      }
      else if(ar[i]>='A' && ar[i]<='Z'){
          ar[i]=ar[i]+32;
      }
  }
printf("%s",ar);
    return 0;
}
