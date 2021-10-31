#include <bits/stdc++.h>
using namespace std;

//sample input
//1
//(()((())()))



int main() {

int t;
bool flag = true;
cin>>t;
string seq;

while(t--){
  stack<char> st;
  cin>>seq;

  for(char c: seq){
    if(c=='('){
      st.push(c);
    }
    else{          //if c= ')'
      if(st.empty()){
        flag = false;
        break;
      }

      if(st.top()=='('){
        st.pop();
      }
    }

  }

if(flag){

if(st.empty())
    cout<<"balanced!"<<endl;
else
    cout<<"not balanced"<<endl;
}
else
   cout<<"not balanced"<<endl;

}

return 0;
}

