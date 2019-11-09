#include <stdio.h>

void main()
{
int num, flag=1;
scanf("%d", &num);
char ch[20];

scanf("%s", &ch);

for(int i=0; i<= num; i++ )
{
if(ch[i]=='.')
ch[i]= 'B';

if(ch[i]=='H')
{
if(ch[i+1]=='H')
flag=0;
}
}

if(flag==1)
printf("YES\n%s",ch);

else
printf("NO");

}
//WILL GET PARTIALLY ACCEPTED BEACUSE OF SOME GLICH IN THE JUDGE