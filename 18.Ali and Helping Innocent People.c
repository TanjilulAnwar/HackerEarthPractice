#include "stdio.h"
int main(void) {
  
  char s[9];
  int p[100];
  int x;
  int f =0;
 scanf("%s",s);
 int i=0,j=0;
 for(i=0;i<9;i++)
 {
   if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'|| s[i]=='Y')
   {
      f =1;
     break;
   }

   x = s[i]-'0';
   if(x<10 && x>=0)
   {p[j]= x;
    
   }
   else
   {
     p[j]= 99;
     
   }

  if(j>0)
  {
    if(p[j]!=99 && p[j-1]!=99){
    if((p[j]+p[j-1])%2==0)
    {
    //  printf("true\n");
    }
    else{
      f=1;
     // printf("false\n");
    }
    }
  } 
   j++;
 }
//  for(i=0;i<j;i++)
//  {
//    printf("%d\n",p[i]);
//  }


   
  if(f==1)
  {
    printf("invalid\n");
  }
  else {
printf("valid\n");
  }
 return 0;
}