#include <stdio.h>
#include<string.h>

int main(void) {
  int t,i,x,c=0;
  scanf("%d",&t);
  char a[100];
  int len_a;
  while(t>0)
  {
    c=0;
    scanf("%s",a);
    len_a=strlen(a);
    for(i = 0 ;i< len_a;i++)
    {
      x= a[i]-'0';
      if(x==1)
      {
        c+=2;

      }
      else if(x==2||x==3||x==5)
      {
        c+=5;
      }
      else if (x==4)
     {
       c+=4;
     } 
     else if(x==6||x==9||x==0)
     {
       c+=6;
     }
      else if (x==7)
     {
       c+=3;
     } 
      else if (x==8)
     {
       c+=7;
     } 
     else {
      ///
     }

    }

    if(c%2==1)
    {
      printf("%d",7);
      c-=3;
    }
    c/=2;
    while(c>0)
    {
      printf("%d",1);
      c--;

    }


    printf("\n");


    t--;

  }
  
  return 0;
}