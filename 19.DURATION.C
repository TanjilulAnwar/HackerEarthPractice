#include <stdio.h>

int main(void) {
int t,sh,sm,eh,em;
int h,m;
scanf("%d",&t);
while(t--)
{
  scanf("%d %d %d %d",&sh, &sm,&eh,&em);
  if(sm>em )
  {
    m=(em+60)-sm;
    eh--;
    h=eh-sh;

  }
  else
  {
    m=em-sm;
    h=eh-sh;
  }
  printf("%d %d\n",h, m);
  


}
return 0;
}