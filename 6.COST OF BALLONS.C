#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <strings.h>
#include <math.h>

int main(void) {
  int t=0;
  int n,i,j;
  int a[10][2];
  int g,p;
  scanf("%d",&t);
  
  while(t>0)
 {
   scanf("%d %d",&g ,&p);
   int sum=0;
   int sum2 =0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=0;j<2;j++)
     {
       scanf("%d",&a[i][j]);
     }
   }


for(i=0;i<n;i++)
   {
     for(j=0;j<2;j++)
     {
       if(j==0)
       {
         sum+= g*a[i][j];
         sum2+= p*a[i][j];
       }
       else
       {
         sum+= p*a[i][j];
         sum2+= g*a[i][j];
       }

     }
    
   }
if(sum>sum2){
    
   printf("%d\n",sum2);
   }
   else {
     printf("%d\n",sum);
   }


   t--;
 } 


}