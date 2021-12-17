// Implement strchr() function in C

#include <stdio.h>
char* my_strchr(const char *s, const char c);

int main()
{
   char str[50] = "Hello world";

   printf("Search w result is %s\n", my_strchr(str, 'w'));
   printf("Search z result is %s\n", my_strchr(str, 'z'));

   return 0;
}
char* my_strchr(const char *s, const char c)
{
   while(*s != c && *s != '\0') 
	   {
         s++;
       }
   if(*s == c) 
        return (char*)s;
   else 
        return NULL;
}