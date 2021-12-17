//swap Nibble in a byte 
#include <stdio.h>
int main()
{
int n=1111;
n = ((n & 0xF0) >> 4) | ((n & 0x0F) << 4);
printf("%d",n);
return 0;
}