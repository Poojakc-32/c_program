#include <stdio.h>
int binaryToDecimal(int n);

int binaryToDecimal(int num)
{
    int dec = 0;
    int base = 1;    
    int rem;
    while (num>0)
		{
			rem = num % 10;
			num = num / 10;
			dec = dec + rem * base;
			base = base * 2;
        } 
    return dec;
}
 
int main()
{
    int num = 1111; 
    printf("%d", binaryToDecimal(num));
}