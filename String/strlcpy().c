// Implement strlcpy() function in C
#include <stdio.h>
char* strlcpy(char* dest, const char* source,int len);

char* strlcpy(char* dest, const char* source , int len)
{
    for(int i=0;i<len-1;i++)
	  {
        if (*source !='\0')
         {
			*dest = *source;
			dest++;
			source++;
		 }
	  }
     *dest = '\0';
    return dest;
}
 
int main(void)
{
    char source[50] = "Hello World";
    char dest[50];
	int len;
	printf("Enter length");
	scanf("%d", &len);
    strlcpy(dest, source, len);
    printf("%s\n", dest);
 
    return 0;
}