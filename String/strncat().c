// Implement strncat() function in C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* Im_strncat(char* dest, const char* source,int n);

char* Im_strncat(char* dest, const char* source, int n)
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);     
    for (j = 0; source[j] != '\0' && j < n; j++) 
		{
          dest[i + j] = source[j];
        }
    dest[i + j] = '\0';
    return dest;
}
 
int main()
{
    char* str = (char*)malloc(sizeof(char));

    Im_strncat(str, "Hello",5);
    Im_strncat(str, "World",3);
 
    printf("%s",str);
	return 0;
}