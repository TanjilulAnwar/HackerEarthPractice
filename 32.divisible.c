#include <stdio.h>//////////////////works for cases except 5 and 8
#include <math.h>
int firstDigit(long long int n) 
{ 
    
    while (n >= 10)  
        {n /= 10; }
  
    return n; 
} 

int lastDigit(long long int n) 
{ 
    
    return (n % 10); 
} 
  

int main(void) {
int ldig;
long long int num=0,n,i,j=0;

scanf("%lld",&n);
long long int arr[n];

j=n-1;
for(i=0;i<n;i++)
{
scanf("%lld",&arr[i]);

if(i<n/2){

  ldig =firstDigit(arr[i]);
num = (ldig*pow(10,j))+num;

}
else{

ldig =lastDigit(arr[i]);
num = (ldig*pow(10,j))+num;

}

 j--;
}

if(num%11==0)
{
  printf("OUI\n");
}
else{
  printf("NON\n");
}
return 0;
}

////////////////////////////////////////works for all
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int firstDigit(long long int n) 
{ 
    
    while (n >= 10)  
        {n /= 10; }
  
    return n; 
} 

int lastDigit(long long int n) 
{ 
    
    return (n % 10); 
} 
  

int main(void) {
int n,i,mid,evenDigit=0,oddDigit=0;


scanf("%d",&n);

int A[n+1];

for(i=0;i<n;i++)
scanf("%d",&A[i]);

mid=(n-1)/2;

for(i=0;i<=mid;i++)
{
while(A[i]/10!=0)
{ if(A[i]>=100000)
A[i]/=100000;

else if(A[i]>=10000)
A[i]/=10000;

else if(A[i]>=1000)
A[i]/=1000;

else if(A[i]>=100)
A[i]/=100;

else if(A[i]>=10)
A[i]/=10;

else if(A[i]>=1)
A[i]/=1;
}
if(i%2==0)
oddDigit=oddDigit+A[i];

else
evenDigit+=A[i];
}

for(i=mid+1;i<n;i++)
{

if(i%2==0)
oddDigit+=A[i]%10;

else
evenDigit+=A[i]%10;
}


if(((oddDigit>evenDigit) ? (oddDigit-evenDigit):(evenDigit-oddDigit))%11==0)
printf("OUI");

else
printf("NON");

return 0;
}////////////////////////