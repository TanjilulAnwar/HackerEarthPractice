#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
string name;
map<string, int> db;
while(t--){
  cin>>name;
if(db.find(name) == db.end()){
  cout<<"OK"<<endl;
db[name] = 1;
}
else{
cout<<name<<db[name]<<endl;
db[name]++;
}


}

return 0;
} 
