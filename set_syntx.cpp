#include <bits/stdc++.h>

using namespace std;

int main() {

set<int> s;
s.insert(3);
s.insert(5);
s.insert(1);
s.insert(2);
s.insert(3);

//s.clear();

cout<<"size: "<<s.size()<<endl;


//s.erase(5);
cout<<"1st element: "<<*s.begin()<<endl;
cout<<"last element: "<<*s.rbegin()<<endl;
//*s.begin is value
//s.begin is pointer/iterator

//s.find(x) returns an iterator
if(s.find(3)==s.end())//not found
{
cout<<"not in the set";
}
else{
  cout<<"found ";
}

for(int i:s){
cout<<i<<" ";
}
cout<<endl;
 return 0;

} 
