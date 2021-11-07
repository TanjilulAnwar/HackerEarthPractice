#include <bits/stdc++.h>
using namespace std;

#define pril(a) printf("%d\n",a)
#define pri(a) printf("%d",a)
#define line printf("\n")
#define space printf(" ")
#define fi first
#define se second
#define see(a, b){cout<<a<<":"<<b<<andl};
const double pi = acos(-1.0);
typedef long int int32;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int,int> PII;
const double eps = 1e-9;
int MOD = 1e9+7;

int Set(int N,int pos){return N=N|(1<<pos);}
int Reset(int N,int pos){return N=N & ~(1<<pos);}
bool Check(int N, int pos){return (bool)(N & (1<<pos));}

/***************TEMPLATE******************/

const  int mxn = 1000009;

 int dp[mxn];


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

dp[1]=dp[2]=dp[3]=dp[4]=dp[5]=dp[6]=1;
//C50=C49+C48+C47+C46+C45+C44
//Top Down DP
for(int i = 2 ;i<mxn; i++){
  

  
  dp[i]+=dp[i-1]%MOD;
  if(i>2)
  dp[i] = (dp[i]+dp[i-2])%MOD;
   if(i>3)
  dp[i] = (dp[i]+dp[i-3])%MOD;
   if(i>4)
  dp[i] = (dp[i]+dp[i-4])%MOD;
   if(i>5)
  dp[i] = (dp[i]+dp[i-5])%MOD;
   if(i>6)
  dp[i] = (dp[i]+dp[i-6])%MOD;


}

int n;
cin>>n;
cout<<dp[n]<<endl;

return 0;
}
