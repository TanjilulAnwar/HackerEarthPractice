
// Sample code to perform I/O:
#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <strings.h>

int main(){
	int t;
	char a[10000];
  char b[10000];
  int i=0;
  int j =0;
  
	scanf("%d", &t);   
	
	while(t>0)
	{
	    /************/
	    int count =0;
	   
  scanf("%s",a);
  scanf("%s",b);
 int len_a=strlen(a);
  int len_b= strlen(b);
  
for(i=0;i<len_a;i++)
{
  for(j=0; j<len_b;j++)
  {
    
    if(a[i]==b[j])
    {
      
      b[j]='!';
      count++;
      break;


    }
    
  }
}
  
  int res = (len_a+len_b)-count*2;
  printf("\n");
  printf("%d",res);
  
	    

	    /*************/
   
	    t--;
	}
    
    return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
