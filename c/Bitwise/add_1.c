//Add 1 to the given no. :  
#include <stdio.h>
int addOne( int x);

int addOne( int x)
{
	int m=1;

	while( x & m )
	{
		x = x ^ m;
		m = m << 1;
	}
	x = x ^ m;
	return x;
}

int main()
{
  int *n=0x01;
  int res=0;
  res=addOne(&n);
  printf("%X",res);
return 0;
}