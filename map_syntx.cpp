#include <bits/stdc++.h>
using namespace std;

int main() {
map<string, double> cgpa;
cgpa["abrar"] = 3.84; 
cgpa["babul"] = 3.15; 
cgpa["rahim"] = 3.30; 
cgpa["korim"] = 2.96; 
cgpa["akib"] = 3.97; 
//sorts key alphabretically
auto var1 = cgpa.begin();//
auto var2= cgpa.rbegin();//both of this returns a pointer so we need to use ->


cout<<"name : "<<var1->first<<" cgpa : "<<var1->second<<endl;

cout<<"name : "<<var2->first<<" cgpa : "<<var2->second<<endl;
cout<<"cgpa of babul : "<<cgpa["babul"]<<endl;

if(cgpa.empty()){
cout<<"empty!"<<endl;
}
else{
cout<<"not empty!"<<endl;
}
cout<<"size : "<<cgpa.size()<<endl;
//cgpa.clear();
cout<<"size : "<<cgpa.size()<<endl;


for(auto i:cgpa){
  //this are structure value so we need to use .
 cout<<"name : "<<i.first<<" cgpa : "<<i.second<<endl;
}

if(cgpa.find("mushfiq")!= cgpa.end())
{
cout<<"present "<<endl;
}
else{
cout<<"not present"<<endl;
}

return 0;
} 
