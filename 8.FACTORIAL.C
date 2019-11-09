#include <stdio.h>

int main(void) {
 int N,i,fact=1;


 scanf("%d",&N);

 for(i=1;i<=N;i++)
 {
fact = fact*i;
 }

 printf("%d",fact);
 return 0;
}