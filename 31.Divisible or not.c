#include <stdio.h>
#include <math.h>

int main(void) {

int num,n,i;

scanf("%d",&n);
int arr[1000000];

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
if(arr[n-1]%10==0)//just check the last digit
{
  printf("Yes\n");
}
else{
  printf("No\n");
}
return 0;
}