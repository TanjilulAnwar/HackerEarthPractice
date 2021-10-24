#include <stdio.h>

int main(void) {
  int reverse();
  printf("\nEnter a Line of Text : ");
  reverse(); 
  return 0;
}

int reverse(){
  char c;
if((c=getchar()) != '\n'){
  reverse();
  if(c>= 'a' && c<='z' && c!= ' ')
  c=c-32;
  else if(c>='A' && c<= 'Z' && c!= ' ')
  c=c+32;
  putchar(c);

}
  return c;
}
