#include <bits/stdc++.h>
using namespace std;


int arr[5]= {2,5,4,7,6};

int sum_array(int n){

if (n==0) return arr[0]; //base case

return sum_array(n-1)+arr[n];

}


int main() {

int i;
cin>>i;
cout<<"sum of ith index is n: "<<sum_array(i)<<endl;

return 0;
}

