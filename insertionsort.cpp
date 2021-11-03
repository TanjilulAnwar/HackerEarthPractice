#include<bits/stdc++.h>
#include<vector>

using namespace std;

/*
0   1 2 3 4 5 6
|5|-1|3|2|8|4|6|
ALGORITHM Insertion sort
---------------
1.Place marker at index 1
2.Take the immediate element at the right of the marker
3.Compare element with the left side of marker. If the elementis less than any element of left side swap them
4.move marker right and continue to step 2

*/
int main()
{
vector<int> v;
int n,x;
cout << "enter array size : ";
cin>>n;
cout << "enter array elements : "<<endl;

for(int i=0;i<n;i++){
  cin>>x;
  v.push_back(x);
}


int j;//marker
for(int i=1;i<n;i++){
j = i-1;
while(j>=0 && v[j]>v[j+1])
{
  swap(v[j],v[j-1]);
  j--;
}

}



cout<<"after sorting: ";
for(int i : v)
    cout<<i<<" ";
cout<<endl;

}
