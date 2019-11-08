#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <strings.h>

int main(void) {
   char s[100];
   int i=0;
    scanf("%s",s);
    int len_s=strlen(s);
    int h =0;
    int t =len_s-1;
    int f=0;
    for(i=0;i<len_s;i++)
    {
      if(s[h]==s[t])
      {

      }
      else 
      {
        f=1;
        break;
      }
      h++;
      t--;
      if(h==t)
      {
        break;
      }

    }

    if(f==1)
    {
      printf("NO");
    }
    else{
      printf("YES");
    }
  return 0;
}