#include <iostream>
using namespace std;
int f[100],expo[100],len=0;
int count =0;

void PrimeFactorization(int n){
  if(n==1){
    len++;
    f[len] = 2;
    expo[len] = 0;
  }
  int d=2;                   //2,3,4,5,6,7,8,9..........
  while(1LL*d*d <= n && n>1){
    int k=0;
    while(n%d == 0){
      k++;
      n/=d;
    }
    if(k>0){
      len++;
      f[len] = d;
      expo[len] = k;
    }
    d++;
    count+=k;
  }

  if(n>1){ //if 2 or 3
    len++;
    f[len] = n;
    expo[len] = 1;
  }

}
int main() {
//  std::cout << "Hello World!\n";
int n =245020;
PrimeFactorization(n);

for(int i = 1 ; i<=len;i++)
      cout << f[i] <<" "<< expo[i]<<"\n";




cout << n <<" = ";
for(int i = 1 ; i<=len;i++)
  for(int j = 1 ; j<=expo[i];j++)
{         cout << f[i];
          if(count-1!=0){
              cout<<" X " ;
              count--;
          }
        
       }


return 0;
}