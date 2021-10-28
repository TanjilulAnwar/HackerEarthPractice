#include <bits/stdc++.h>
using namespace std;

//str.begin , str.rbegin() , str.end() are pointers
 //  |b|a|n|g|l|a|d|e|s|h|/0|<-str.end()
 //   ^                 ^
 //str.begin       str.rbegin()

int main() {
string str = "bangladesh";

cout<<"first element is = "<<*(str.begin())<<endl;
cout<<"first element is = "<<*(str.rbegin())<<endl;


cout<<"first element is = "<<str[0]<<endl;
cout<<"first element is = "<<str[9]<<endl;

//it is an iterator or pointer storing address
for (auto it = str.begin();it !=str.end();it++){
  cout<<*it<<" ";
}
cout<<endl;

str =str + " beats india";
cout<<str<<endl;


str.push_back('1');//for a charcter
cout<<str<<endl;
str.pop_back();//for a charcter
cout<<str<<endl;
str.insert(str.begin()+3,'x');//for a charcter
cout<<str<<endl;

str.erase(str.begin()+3);//for a charcter
cout<<str<<endl;

if(str.find("desh")!= string::npos){
  cout<<"present"<<endl;
}
else{
    cout<<"not present"<<endl;
}

cout<<"substring from 3-3 is "<<str.substr(3,3)<<endl;
cout<<"size is = "<<str.size()<<endl;
if(!str.empty()){
  cout<<"not empty"<<endl;
}
else
 cout<<"empty"<<endl;


 str.clear();
  cout<<"string : "<<str<<endl;
 return 0;
 }

