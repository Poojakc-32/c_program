//Check Given no. is power of 2 or not : 
#include <stdio.h>
int main()
{
  int n=8;
  if ((n&(n-1))==0)
  {
   printf("No is power of 2");
  }
  else
  {
   printf("No is not power of 2");
  }
return 0;
}