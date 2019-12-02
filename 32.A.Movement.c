#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
  int n,i,j=0,k;
  scanf("%d",&n);
  if(n<=5)
    {
      k=1;
      printf("%d",k);
    }
    else if(n%5==0){
  for(i=1;i<=n;i++)
  {
    
    if(i%5==0)
    {
      j++;
    }
   
    
  }
        
         printf("%d",j);
    }
  else{
for(i=1;i<=n;i++)
  {
    
    if(i%5==0)
    {
      j++;
    }}
    j++;
    printf("%d",j);
  }
  
  
return 0;

}