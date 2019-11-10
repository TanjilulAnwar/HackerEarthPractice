
//1st way
#include <stdio.h>

int main(void) {
  
  int a[100];
  int N;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<N;i++)
  {
    printf("%d ",a[i]);
  }


}
//2nd way
#include <stdio.h>

int main(void) {
  
  int a[100];
  int N;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
    printf("%d ",a[i]);
  }
 

return 0;
}