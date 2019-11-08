#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <strings.h>
#include <math.h>

int main(void) {
   int n,i=0;
   int a[1000];
   long ans = 1;
   scanf("%d",&n);
  int p= pow(10,9);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      ans =(ans* a[i])%(p +7);
   }
   printf("%d",ans);
   return 0;



}