#include <bits/stdc++.h>
using namespace std;



int main() {
int t , l , len;
cin>>t;
string s;
while(t--){
int count[30] = {0};//count[0] - count[25] is a-z
bool present [30] = {false};//present[0] - present[25] is a-z
cin>>s;
l=s.size();
for(int i=0;i<l;i++){

len =1;
present[s[i]-'a'] =true;//present['t'-'a']=present[116-97]=present[19]

if(i<l && s[i]==s[i+1])
{

  while(i<l && s[i] == s[i+1])
  {
    len++;
    i++;
  }
  if(len%2==0)
  count[s[i] -'a'] += 0;
  else
  count[s[i] -'a'] +=1;

}
else
  count[s[i]-'a'] += 1;


}

for(int i = 0; i<26 ; i++){
if(present[i]){
  if(count[i]>0)
    cout<<(char)('a'+i);
  
}
  
}

cout<<endl;

}



 return 0;
 }

