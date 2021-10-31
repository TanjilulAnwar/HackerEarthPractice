#include <bits/stdc++.h>
using namespace std;

int main() {

queue<string> q;
string s;
int i;

cout <<"enter number of people"<<endl;
cin>>i;
while(i--){
  cin>>s;
  q.push(s);

}
cout<<"size of the queue : "<<q.size()<<endl;
while(!q.empty()){
  cout<<q.front()<<" ";
  q.pop();
}
return 0;
}
