#include <iostream>
using namespace std;

bool isPrime(int n){
  if(n<=1)//corner case
      return false;


  for(int i = 2;i<n;i++)
  {
    if(n%i == 0)
    return false;
  }

  return true;

}
int main() {
//  std::cout << "Hello World!\n";
cout << (isPrime(2)?"true":"false");
return 0;
}