#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1000000],e[1000000];
  int i, shift;
 scanf("%s",s);
  scanf("%d",&shift);

  int len_s=strlen(s);
  for(i=0;i<len_s;i++)
  {
    if( s[i]>=65 && s[i]<=90 )
    {
      e[i] = (s[i]+shift-65)%26 +65;
    }
    else if (s[i]>=97 && s[i]<=122)
    {
       e[i] = (s[i]+shift-97)%26 +97;

    }
    else if (s[i]>=48 && s[i]<=57 )
    {
      e[i] = (s[i]+shift-48)%10 +48;
    }
    else 
    {
      e[i]= s[i];
    }
   

  }
   printf("%s\n",e);
  return 0;
}