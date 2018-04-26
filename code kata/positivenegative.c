#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  if((n>=1)&&(n<=100000))
  {
  if(n>0)
  printf("positive\n");
 } 
     else if(n<0)
{
  printf("negative");
}
else if(n==0)
  {
    printf("zero");
  }
  else
  printf("beyond limit");
  return 0;
}
