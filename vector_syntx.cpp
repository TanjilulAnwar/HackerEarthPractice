#include <bits/stdc++.h>

using namespace std;

int main() {

vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.push_back(6);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
vec.push_back(6);


vec.pop_back();
vec.pop_back();
vec.pop_back();


int len = vec.size();

cout<<"Size of Vector = "<<len<<endl;

vec.insert(vec.begin()+ 4,7);



len = vec.size();
for(int i=0;i<len;i++){

cout<<"index "<<i<<" value "<<vec[i]<<endl;

}

vec.erase(vec.begin()+4);

len = vec.size();
for(int i=0;i<len;i++){

cout<<"index "<<i<<" value "<<vec[i]<<endl;

}


for(auto i:vec){
  cout<< i<< " ";
}

 return 0;

} 
