// Implement strlen() function in C

#include <stdio.h>
#include <string.h>

int main()
{
  char str[]="HELLO";
  int count=0;
  while(str[count]!='\0') 
      count++;
  printf("%d\n", count);
  return 0;
}