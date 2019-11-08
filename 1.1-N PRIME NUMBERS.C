// Sample code to perform I/O:
#include <stdio.h>
#include <stdbool.h> 

int main(){
	int n;
	int i=0;
	int j=0;
	int f = 0;
	scanf("%d", &n);              			// Reading input from STDIN
	if(n<=1)
	{
	    return 1;
	}
	else
	{
	    
	for(i=2;i<=n;i++)
	{
	    f=0;
	    for(j=2; j<i;j++)
	    {
	        if(i%j==0)
	        {
	             f++; 
	        }
	        else{
	           
	        }
	        
	    }
	    
	    if(f==0){
	    printf("%d ",i);
	        
	    }
	    
	}
	
	    
	}
	
	return 0;     // Writing output to STDOUT
}