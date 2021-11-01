#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main() {
int p,base,quot,rem;
double d_d,product;
stack<int> solution;
queue<double> decimal_solution;
cout<<"Enter a 10 Base Number : ";
cin >>d_d;
cout<<"Enter Conversion parameter"<<endl;
cout<<"1 for Binary"<<endl;
cout<<"2 for Octal"<<endl;
cout<<"3 for Hexadecimal"<<endl;
cin>>p;

clock_t begin = clock();
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

quot=(int)d_d;

while(quot!=0){
rem = quot%base;
quot = quot/base;
solution.push(rem);
}



if(d_d != floor(d_d))
{
double after_decimal = d_d - floor(d_d);
//&& decimal_solution.size()!=5
while(after_decimal !=0 ){
after_decimal = after_decimal*base;
rem = (int)after_decimal;
after_decimal = after_decimal-rem;
decimal_solution.push(rem);
}

}

while(!solution.empty()){

int v = solution.top();
 switch(v){
 case 10:cout<<'A';
             break;
  case 11:cout<<'B';
             break;
  case 12:cout<<'C';
             break;
   case 13:cout<<'D';
             break;
   case 14:cout<<'E';
           break;
    case 15:cout<<'F';
           break;
  default: cout<<v;
            break;
}
solution.pop();

}

if(!decimal_solution.empty()){
  cout<<'.';
}
while(!decimal_solution.empty()){
int v = decimal_solution.front();
 switch(v){
 case 10:cout<<'A';
             break;
  case 11:cout<<'B';
             break;
  case 12:cout<<'C';
             break;
   case 13:cout<<'D';
             break;
   case 14:cout<<'E';
           break;
    case 15:cout<<'F';
           break;
  default: cout<<v;
            break;
}
decimal_solution.pop();

}
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
cout<< endl;
cout<< time_spent;

return 0;
} 
