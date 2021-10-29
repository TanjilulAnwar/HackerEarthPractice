#include <bits/stdc++.h>
using namespace std;


int factorial(int n){

if (n==0) return 1; //base case

return n*factorial(n-1);

}


int main() {
int t,n;
cin>>t;
while(t--){
cin>>n;
cout<<"value of n!: "<<factorial(n)<<endl;
}
return 0;
}

