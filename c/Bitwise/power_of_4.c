//Check Given no. is power of 2 or not : 
#include <stdio.h>
#include <stdbool.h>
bool is_power_of_4(int x);

bool is_power_of_4(int x)
{
	int chkbit = 3;
	if((x & (x-1)) != 0)
	{
		return false;
	}
	while((chkbit & x) == 0)
		x >>= 2;
  return ((x & chkbit) == 1);
}

int main()
{
	int n=5;
    is_power_of_4(n)? printf("Yes"):printf("No");
	return 0;
}