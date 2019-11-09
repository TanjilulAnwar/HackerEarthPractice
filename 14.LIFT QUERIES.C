#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void) {
 int t,i,call,a=0,b=7,x,y;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&call);
x=abs(a-call);
y= abs(b-call);
if(x<y)
{
  a=call;
  printf("A\n");

}
else if(x>y)
{
  b=call;
  printf("B\n");
}


else if (x==y && call>a)
{
 
    a=call;
    printf("A\n");
 

}
else if (x==y && call>b)
{
    
    b=call;
    printf("B\n");
}

t--;
}

 return 0;
}