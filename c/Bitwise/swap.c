//Swap 2 no. using bit-wise:  x = x^y; y = x^y; x = x^y;
#include <stdio.h>

int main()
{
  int m=10,n=20;
  printf("Before swapping:%d %d\n",m,n);
  m=m^n;
  n=m^n;
  m=m^n;
  printf("Afetr swapping:%d %d\n",m,n);
return 0;
}