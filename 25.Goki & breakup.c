#include <stdio.h>

int main(void) {
 int r,x,N,min;
 scanf("%d",&N);
  scanf("%d",&min);
while(N--)
{
  scanf("%d",&x);
  if(x>= min)
  {
    printf("YES\n");
  }
  else
  {
     printf("NO\n");
  }
}
 
return  0;

}