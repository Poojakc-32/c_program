// Implement strlcat() function in C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* Im_strlcat(char* dest, const char* source,int len);

char* Im_strlcat(char* dest, const char* source, int len)
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);    
    for (j = 0; source[j] != '\0' && j < len-1; j++) 
		{
          dest[i + j] = source[j];
        }
    dest[i + j] = '\0';
    return dest;
}
 
int main()
{
    char* str = (char*)malloc(sizeof(char));

    Im_strlcat(str, "Hello",5);
    Im_strlcat(str, "World",3);
    printf("%s",str);
	return 0;
}