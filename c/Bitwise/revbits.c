#include <stdio.h>
int reverseBits(int n);

int reverseBits(int n)
{
   int rev=0;
   while(n > 0)
	{
	  rev = rev << 1;
	   if(n&1 == 1)
	     rev = rev ^ 1;
      n = n >> 1;
    }
	return rev;
}
   
 int main()
{
    int x = 11; 
    printf("%d", reverseBits(x));
    return 0;
}