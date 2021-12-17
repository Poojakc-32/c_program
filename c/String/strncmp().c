// Implement strncmp() function in C
#include <stdio.h>
int Im_strncmp(const char * str1, const char * str2, int n);

int Im_strncmp(const char * str1, const char * str2, int n)
{
  while(n && *str1 && (*str1 == *str2))
  {  
    str1++;
    str2++;
	--n;
  }
  if(*str1 == '\0')
	{
      return 0;
	}
  else
	{
      return (*str1 - *str2);
	}
}

int main()
{
  char str1[25];
  char str2[25];
  int value ,n;
  printf("Enter first string to compare " );
  scanf("%s",str1);
  printf("Enter second string to compare ");
  scanf("%s",str2);
  scanf("%d", &n);
  value= Im_strncmp(str1,str2,n);
  printf("Comparison of first and second string is  = %d\n",value);
  
  if(value>0)
       {
          printf("str1 is greater than str2\n");
       }
  else if(value<0)
	   {     
          printf("str1 is less than str2\n");
	   }
  else
       {
          printf("Both strings are identical\n");
       }
return 0;
}