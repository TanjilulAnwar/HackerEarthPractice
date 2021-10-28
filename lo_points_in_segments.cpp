#include <bits/stdc++.h>
using namespace std;

int arr[1000005];


int lower_bound(int left, int right,int key){
int mid, i=0;

while(left<=right){
  mid= (left+right)/2;
  if(arr[mid] == key){
    i=mid;
    break;
  }
  else if(arr[mid]<key){
    i=mid;
    left= mid+1;
  }
  else{
    right =mid-1;
  }
}
return i;

}

int main() {

int t,n,q,l,r,a,b,ans;
cin>>t;

for(int j=1;j<=t;j++){

cin>>n>>q;

for(int i=0;i<n;i++){
  cin>>arr[i];
}

cout<<"Case "<<j<<":\n";
while(q--){
  cin>>l>>r;
  a=lower_bound(0,n-1,l);
  b=lower_bound(0,n-1,r);
ans = b-a;
if(arr[a]>=l){
  ans++;
}
cout<<ans<<endl;



}

} return 0;}
