#include <stdio.h>

int main(void)
{

int n, q, l, h,g;
scanf("%d %d",&n,&q);
long int arr[n], sum[n];
for(int i=0; i<n; i++){
scanf("%ld",&arr[i]);
sum[i] = sum[i-1]+ arr[i];
}
for( int i =0; i<q; i++){
scanf("%d %d",&l,&h);
g=( sum[h-1] - sum[l-2] )/(h-l+1);
printf("%d\n",g);
}
return 0;
}