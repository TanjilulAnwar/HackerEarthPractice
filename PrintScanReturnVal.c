#include <stdio.h>

int main(void) {
 
 int x, y, z,cx;

   printf("The value returned by the scanf() function is : %d",
   scanf("%d%d%d", &x, &y, &z));

   printf("\nx = %d", x);
   printf("\ny = %d", y);
   printf("\nz = %d", z);

  printf("\n");


   char str[] = "THE SKY IS BLUE";

   cx= printf("\nThe value returned by printf() for the above string is : %d", printf("%s", str));



   printf("\n%d",cx);
   return 0;




}
