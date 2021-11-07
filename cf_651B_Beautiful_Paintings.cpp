#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x;
  cin >>n;
  map<int,int> count;


  for(int i=0 ; i<n ; i++){
    cin>>x;
    count[x]++ ;
  }
vector<int> seq;
int ans =0;
while(true){
  ans =0;
  for(auto it :count){
    if(it.second>0){
      seq.push_back(it.first);
      count[it.first]--;
      ans++;
    }
  }
  if(!ans) break;
}
ans =0;
for(int i =0; i<seq.size()-1;i++)
{
  if(seq[i]<seq[i+1])
    ans++;
}
cout<<ans<<endl;
return  0;
} 
