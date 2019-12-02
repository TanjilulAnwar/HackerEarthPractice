#include <stdio.h>
#include<string.h>

int main(void) {
  int n,i,j,k,t;
  scanf("%d",&n);
signed long int a[n] ,sum=0,max=0;
for(int i =0 ;i<n; i++)
{
scanf("%li",&a[i]);

}

for(int i =0 ;i<n; i++)
{
////////////////////////////////
sum+=a[i];
j=i;

/**************/
k=2;
while(j+k<n)
  {
    for(t=1;t<=k;t++)
    {sum+=a[j+t];}
   
    j+=k;
    k++;

  }


/**************/

//   if(j+2<n)
//   {
//     sum+=a[i+1];
//     sum+=a[i+2];
//     j+=2;

//   }

//   if(j+3<n)
//   {
//     sum+=a[i+3];
//     sum+=a[i+4];
//     sum+=a[i+5];
//     j+=3;
    
//   }
//  if(j+4<n)
//   {
//     sum+=a[i+6];
//     sum+=a[i+7];
//     sum+=a[i+8];
//     sum+=a[i+9];
//     j+=4;
    
//   }

 


//////////////////////////
if(sum>max)
{
max=sum;

}
sum=0;
}

printf("%li\n", max);

  
  return 0;
}s