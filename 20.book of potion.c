#include <stdio.h>
#include <math.h>

int main(void) {
 int g,i,j=9,sum=0;
  int ar[10];
  
 scanf("%d",&g);


 for( i= 0; i<10; i++)
 {
   ar[i] =g %10;
   g/=10;
 }

for( i= 0; i<10; i++)
 {
   sum +=  ar[j]*(i+1);
  j--;
 }

(sum%11==0)?printf("Legal ISBN\n"):printf("Illegal ISBN\n");
return 0;
}