#include<stdio.h>
  
int main()
{
  char *ptr;
	printf("%lu\n", sizeof(*ptr));//size of pointer  value
  printf("%lu\n",sizeof(ptr));//size of pointer allocated to hold the address

 int *ptr1;
	printf("%lu\n", sizeof(*ptr1));//size of pointer  value
  printf("%lu\n",sizeof(ptr1));//size of pointer allocated to hold the address

  double *ptr2;
	printf("%lu\n", sizeof(*ptr2));//size of pointer  value
  printf("%lu\n",sizeof(ptr2));//size of pointer allocated to hold the address

  float *ptr3;
	printf("%lu\n", sizeof(*ptr3));//size of pointer  value
  printf("%lu\n",sizeof(ptr3));//size of pointer allocated to hold the address



	return 0;
} 
