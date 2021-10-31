#include <bits/stdc++.h>
using namespace std;


int main() {

stack<char> stk ;
string s = "()((()())))";
//cin>>s;
int len = s.size();

for(int i =0; i< len; i++){
if(s[i] == '('){
  stk.push(s[i]);
}
else if(s[i] == ')'){
  stk.pop();//this will  cause underflow if stack is empty
}
else{
//do nothing
}
}


if(!stk.empty())
    cout<<"Unbalanced!"<<endl;
else
    cout<<"Balanced!"<<endl;


return 0;
}
