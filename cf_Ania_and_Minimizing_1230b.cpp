#include <iostream>
using namespace std;
int main() {
  int  n,k;
  string num;
  cin>>n>>k>>num;
  if(num.size() == 1 && k == 1){
    cout << '0' << endl;
    return 0;
  }
if(k == 0){
  cout<< num<<endl;
  return 0;
}
if(num[0] != '1'){
  num[0] = '1';
  k--;
}
int i =1,len = num.size();
while (k>0 && i<len){
  if(num[i] != '0'){
    num[i] = '0';
    k--;
  }
  i++;
}
cout<<num<<endl;
return  0;
} 
