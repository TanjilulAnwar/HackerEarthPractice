
// Sample code to perform I/O:
#include <stdio.h>

int main()
{
int t,n,input,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&input);

switch(t=input%12) //TO DECIDE
{
case 1:
{
printf("%d WS",(input+11));
break;
}
case 2:
{
printf("%d MS",(input+9));
break;
}
case 3:
{
printf("%d AS",(input+7));
break;
}
case 4:
{
printf("%d AS",(input+5));
break;
}
case 5:
{
printf("%d MS",(input+3));
break;
}
case 6:
{
printf("%d WS",(input+1));
break;
}
case 7:
{
printf("%d WS",(input-1));
break;
}
case 8:
{
printf("%d MS",(input-3));
break;
}
case 9:
{
printf("%d AS",(input-5));
break;
}
case 10:
{
printf("%d AS",(input-7));
break;
}
case 11:
{
printf("%d MS",(input-9));
break;
}
case 0:
{
printf("%d WS",(input-11));
break;
}
}
printf("\n");
}
return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here