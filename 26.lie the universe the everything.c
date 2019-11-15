#include <stdio.h>

int main(void) {
  int n=1,i;

  while(n)
  {
    scanf("%d",&i);
    if(i!=42)
    {
      printf("%d\n",i);
    }
    else
    {
      n=0;
    }
  }
  return 0;
}