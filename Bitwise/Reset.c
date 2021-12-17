//Reset or clear nth bit
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=15;
int bit=1,res;
res=n & ~(1<<bit);
printf("%d",res);
return 0;
}