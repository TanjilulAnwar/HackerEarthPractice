#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main() {
int d,p,base,quot,rem;
stack<int> solution;
cout<<"Enter a Decimal Number : ";
cin >>d;
cout<<"Enter Conversion parameter"<<endl;
cout<<"1 for Binary"<<endl;
cout<<"2 for Octal"<<endl;
cout<<"3 for Hexadecimal"<<endl;
cin>>p;

switch(p){
 case 1:base=2;
             break;
  case 2:base=8;
             break;
  case 3:base=16;
            break;
  default: cout<<"Parameter not valid!"<<endl;
            break;
}

quot=d;
while(quot!=0){
rem = quot%base;
quot = quot/base;
solution.push(rem);
}




while(!solution.empty()){

int v = solution.top();
 switch(v){
 case 10:cout<<"A";
             break;
  case 11:cout<<"B";
             break;
  case 12:cout<<"C";
             break;
   case 13:cout<<"D";
             break;
   case 14:cout<<"E";
           break;
    case 15:cout<<"F";
           break;
  default: cout<<v;
            break;
}
solution.pop();

}



return 0;
} 
