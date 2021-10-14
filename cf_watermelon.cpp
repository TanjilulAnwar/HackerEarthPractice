#include<bits/stdc++.h>
using namespace std;

int main(){
  int w;
  cin>>w;
  string res = (w%2==0 && w!=0 && w!=2)?"YES":"NO";
  cout<<res;
    return 0;
}