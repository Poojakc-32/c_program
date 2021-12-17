// Implement strncpy() function in C

#include <stdio.h>
char* strncpy(char* dest, const char* source,int n);

char* strncpy(char* dest, const char* source , int n)
{      
    while (*source !='\0' &&  n--)
		{
			*dest = *source;
			dest++;
			source++;
		}
    *dest = '\0';
    return dest;
}
 
int main(void)
{
    char source[50] = "Hello World";
    char dest[50];
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
    strncpy(dest, source, n);
    printf("%s\n", dest);
 
    return 0;
}