#include <stdio.h>
#include<string.h>

int main(void) {
char s[100];
int i = 0;
scanf("%s",s);
int len_s =strlen(s);
for(i = 0;i<len_s;i++)
{ 
  int x= s[i];
  if (x>=65&&x<=90)//A-Z(65-90),a-z(97-122) ASCII value
  {
    s[i]=x+32;

  }
  else{
    s[i]=x-32;
  }
}

printf("%s",s);

 return 0;
}