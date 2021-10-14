#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,b;
    cin>>t;
  while(t--){
    cin>>n;
    if(n<=10){
        a=n,b=0;
    }
    else{
        a= 10, b = n-10;
    }

   cout<<a<<" "<<b<<endl;
  }
    return 0;
}
