#include <bits/stdc++.h>

using namespace std;

int main() {

int n,m;

cin>> n >> m;
int arr[n+1],index[n+1];

for(int i=1;i<=n;i++){
    cin>>arr[i];
}

set<int> elements;
for(int i = n;i>=1;i--){
elements.insert(arr[i]);
index[i]=elements.size();
}


for(int i=1;i<=m;i++){
int idx;
cin>>idx;
cout<<index[idx]<<endl;
}


//non-optimized
// for(int i=1;i<=m;i++){
// int idx;
// cin>>idx;
// set<int> elements;
// for(int i = idx;i<=n;i++){
// elements.insert(arr[i]);
// }
// cout<<elements.size()<<endl;
// }


 return 0;

} 
