#include <stdio.h>

int main(void) {
 int t,c=0,k=0;
 int r,x;
double p=3.1428;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d %d",&r,&x);
((2*p*r)<(100*x))?c++:k++;
 
 }

 printf("%d\n",c);

}