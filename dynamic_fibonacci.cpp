#include <bits/stdc++.h>
using namespace std;

long long int memo[100] ;

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 
long long int fibonacci(int n){

if (n==0 ||n==1) return memo[n]; //base case

else if(memo[n] != -1) return memo[n];

//recursive case
memo[n] = fibonacci(n-1) + fibonacci (n-2);
return memo[n];

}


int main() {
for(int i =0; i<100;i++){
  memo[i] =-1;
}

memo[0] = memo[1] = 1;
int n;

cin>>n;
cout<<"value of nth fibonacchi: "<<fibonacci(n)<<endl;

return 0;
}
