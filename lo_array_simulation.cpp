#include <bits/stdc++.h>

using namespace std;


int main() {

 int t;
 cin>>t;
 int n, m;

for(int k=1; k<=t; k++){

cin>>n>>m;



int arr[n];
for(int i=0; i<n;i++){
cin>>arr[i];
}





char op;
int temp;

for(int j=0; j<m;j++){

cin>>op;

if(op=='S'){

cin>>temp;
for(int i=0; i<n;i++){
arr[i]=arr[i]+temp;
}

}

else if(op== 'M'){

cin>>temp;
for(int i=0; i<n;i++){
arr[i]=arr[i]*temp;

}

}

else if(op== 'D'){
  cin>>temp;
  for(int i=0; i<n;i++){
arr[i]=arr[i]/temp;
}

}
else if(op== 'P'){
  int x,y;
  cin>>x>>y;
  swap(arr[x],arr[y]);
}

else if(op== 'R'){
  int x=0, y = n-1;
  while(x<=y){
    swap(arr[x],arr[y]);
    x++;y--;
  }
}
}


//output
cout<<"Case "<<k<<":\n";
for(int i=0; i<n;i++){
cout<<arr[i]<<" ";
}


cout<<"\n";


}
 
 
 
 return 0;

} 
