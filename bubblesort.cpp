#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
vector<int> v;
int l,x;
cout << "enter array size : ";
cin>>l;
cout << "enter array elements : "<<endl;

for(int i=0;i<l;i++){
  cin>>x;
  v.push_back(x);
}

for(int i=1;i<l;i++){
for(int j=0;j<l-i;j++){
if(v[j]>v[j+1])
      swap(v[j],v[j+1]);
}

}

cout<<"after sorting: ";
for(int i : v)
    cout<<i<<" ";
cout<<endl;

}
