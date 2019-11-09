#include <stdio.h>
#include<string.h>

int main(void) {
int p,m,i,N,f,count=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
count +=i;
if(count>=N )
{
  f=1;
  break;
}
count+=i*2;
if(count>=N)
{
  f=0;
  break;
}
}

if(f)
{
  printf("Patlu");
}
else 
{
   printf("Motu");
}

 return 0;
}