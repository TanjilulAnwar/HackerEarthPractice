#include <stdio.h>
#include <string.h>
int main(void) {
int t=0,i=0,len_s;
char s[100];
scanf("%s",s);
len_s=strlen(s);
for(i=0;i<len_s;i++)
{
  t+= s[i]-'a'+1;
  
  }
  printf("%d",t);
return  0;

}