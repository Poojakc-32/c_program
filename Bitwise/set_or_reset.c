//Check if kth bit is set or reset
#include <stdio.h>
int main()
{
int n=15;
int k;
if(n&(1<<k)!=0)
{
printf("set");
else
printf("Reset")
return 0;
}