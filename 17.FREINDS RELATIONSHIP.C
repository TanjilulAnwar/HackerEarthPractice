#include <stdio.h>//MY WAY

int main(void) {
  
int t,n,i,j,u;
scanf("%d",&t);
while(t>0)
{
  scanf("%d",&n);
  u=n;
 for(i=0;i<n;i++)
 {
   for(j=0;j<=i;j++)
   {
     printf("*");
   }
   if(i!=n-1){
    for(j=0;j<(u*2)-2;j++)
   {
     printf("#");
   }
   }
   for(j=0;j<=i;j++)
   {
     printf("*");
   }

u--;
printf("\n");

 }
  t--;
}

return 0;
}
//////////////////////////////////HIGHWAY
#include<stdio.h>
int main()
{ int i ,t,j,n;
scanf("%d",&t);
while(t--)
{ scanf("%d",&n);
for(i =1;i<=n;i++)
{ for(j=1;j <=2*n;j++)
{ if((j>=i+1) && (j <=2*n-i ))
printf("#");
else
{ printf("*");
}

}
printf("\n");
}
}
return 0;
}