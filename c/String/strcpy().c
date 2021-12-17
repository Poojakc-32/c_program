// Implement strcpy() function in C
#include <stdio.h>
char* strcpy(char *dest, const char *source);

char* strcpy(char *dest, const char *source)
{        
   while (*source != '\0')
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
    printf("%s\n", source);
    strcpy(dest, source);
    printf("%s\n", dest);
 
    return 0;
}