//Check if the given no. is –ve (if MSF is 1 then given no is -ve no)
#include <stdio.h>

int main()
{
  int n=-56;
  if(((n>>31)&1)==1)
  {
   printf("-ve");
  }
  else
  {
   printf("+ve");
  }
return 0;
}