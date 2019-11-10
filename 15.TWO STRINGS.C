#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(void) {
char s1[100000];
char s2[100000];
char a[26];
int t,i;
scanf("%d",&t);
while (t>0)
{
 
  scanf("%s %s",s1,s2);
  int len_s1=strlen(s1);
  int len_s2=strlen(s1);
 
for(i=0;i<26;i++)
 {
   a[i]=0;
 }
for(i=0;i<len_s1;i++)
 {
   a[s1[i]-'a']++;//hashing
   a[s2[i]-'a']--;
 }

for(i=0;i<26;i++)
 {
   if(a[i]!=0)
   break;
 }
if(i==26)
{
  printf("YES\n");
}
  else
  {
    printf("NO\n");
  }
    t--;
}

}