#include <bits/stdc++.h>
using namespace std;

int main() {
int n,left,right,mid,key;
bool flag=false;
cout<<"input size of the array:";
cin>>n;
int arr[n];
cout<<"input elements of the array:";
for(int i = 0; i< n; i++)
cin>>arr[i];

cout<<"Enter a key for search:";
cin>>key;

left=0,right=n,mid=0;

while(left<=right){
mid = (left+right)/2;
if(arr[mid]==key){
  flag=true;
  break;
}
else if(arr[mid]<key){
  left= mid+1;
}
else{
  right = mid-1;
}
}


if(flag){
  cout<<"found at index: "<<mid;
}
else{
  cout<<"not found";
}

return 0;
} 
