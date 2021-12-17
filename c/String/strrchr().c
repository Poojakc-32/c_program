// Implement strrchr() function in C

#include <stdio.h>
char *my_strrchr(const char *s, int c);

int main()
{
   char a[50] = "Hello world";

   printf("Search w result is %s\n", my_strrchr(a, 'w'));
   printf("Search o result is %s\n", my_strrchr(a, 'o'));

   return 0;
}
char *my_strrchr(const char *s,  int c)
{
  if(*s == NULL)
	{
	  return NULL;
	}
  char *p=NULL;
  while (*s)
	{
		if(*s == (char) c)
		{
			p=(char* )s;
		}
		s++;
	}
	return p;
}