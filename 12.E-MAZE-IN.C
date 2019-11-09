#include stdio.h
#includestring.h

int main(void) {
char s[200];
scanf(%s,s);
int len_s=strlen(s);
 int x=0,y=0,i=0;
 for(i=0;ilen_s;i++)
 {
if(s[i]=='L')
{
x--;
}
if(s[i]=='R')
{
  x++;
}
if(s[i]=='U')
{
  y++;
}
if(s[i]=='D')
{
  y--;
}
 }
 printf(%d %dn,x,y);

 return 0;
}