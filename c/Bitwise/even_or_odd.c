#include <stdio.h>
//Given no. is even or odd:  
int main()
{
  int n=3;
  if ((n&1)==0)
  {
      printf("Even");
  }
  else
  {
      printf("odd");
  }
return 0;
}