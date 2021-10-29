#include <bits/stdc++.h>
using namespace std;

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 
int fibonacci(int n){

if (n==0 ||n==1) return 1; //base case

return fibonacci(n-1)+fibonacci(n-2);

}


int main() {
int t,n;
cin>>t;
while(t--){
cin>>n;
cout<<"value of nth fibonacchi: "<<fibonacci(n)<<endl;
}
return 0;
}
