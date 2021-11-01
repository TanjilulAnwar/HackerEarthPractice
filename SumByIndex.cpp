#include <bits/stdc++.h>
#include <time.h>
using namespace std;
/*
time limit: 1s
an array given of size N(5<N<10^5) and Q(1<Q<10^5) number of queries will be given to operate on the array such that 
query
-----
2 5   output: sum = a[2] + a[3] + a[4] + a[5] 
1 7   output: sum = a[1] + a[2] + .... + a[7]
0 9   output: sum = a[0] + a[1] + .... + a[9]
input:
n> 10
arr > 2 -1 3 5 7 8 -3 4 6 9
no of q > 3
q> 2 5
   1 7
   0 9
output:
   23
   23
   40
*/
int main() {

int n,q,sum=0;
cin >>n;
int arr[n],sum_arr[n];

for(int i =0; i<n ; i++)
{
 cin>>arr[i];
 sum += arr[i];
 sum_arr[i] =sum;
}

cin>>q;
clock_t begin = clock();
while(q--){
  int l,r;
  cin>>l>>r;
  sum = sum_arr[r] -sum_arr[l-1];
  cout << sum<< endl;
}
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
cout<< time_spent;
return 0;

} 
