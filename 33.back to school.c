#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void) {
  int n,i,j=0,max=-1;
 for(i=0;i<3;i++)
 {
   scanf("%d",&n);
   if(n>max)
   {
max=n;
   }
 }
  printf("%d\n",max);
return 0;

}