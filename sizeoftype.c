#include<stdio.h>
  
int main()
{
  char *ptr;
	printf("%lu\n", sizeof(*ptr));//size of pointer  value
  printf("%lu\n",sizeof(ptr));//size of pointer


 int *ptr1;
	printf("%lu\n", sizeof(*ptr1));//size of pointer  value
  printf("%lu\n",sizeof(ptr1));//size of pointer

  double *ptr2;
	printf("%lu\n", sizeof(*ptr2));//size of pointer  value
  printf("%lu\n",sizeof(ptr2));//size of pointer

  float *ptr3;
	printf("%lu\n", sizeof(*ptr3));//size of pointer  value
  printf("%lu\n",sizeof(ptr3));//size of pointer



	return 0;
} 
