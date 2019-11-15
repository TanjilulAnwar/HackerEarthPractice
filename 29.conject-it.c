#include <stdio.h>

int main(void) {
  int t,f=0;
  unsigned long long int i;
  scanf("%d",&t);

  while(t)
  {
    
    scanf("%llu",&i);

    while(i>=1)
    {
      if(i%2==0)
      {
        i=i/2;
      }
      else 
      {
        i=3*i+1;
      }

      if(i==1)
      {
        f=1;
        break;

      }
    }
t--;
    if(f==1){
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
   f=0;
   
  }
  return 0;
}