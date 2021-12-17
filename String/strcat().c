// Implement strcat() function in C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* Im_strcat(char* dest, const char* source);

char* Im_strcat(char* dest, const char* source)
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);   
    for (j = 0; source[j] != '\0'; j++) 
		{
          dest[i + j] = source[j];
        }
    dest[i + j] = '\0';
    return dest;
}
 
int main()
{
    char* str = (char*)calloc(100,1);
    Im_strcat(str, "Hello\n");
    Im_strcat(str, "World");
    printf("%s",str);
	return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="HELLO";
    char str1[]="WORLD";
    int l1, l2, i, j=5;
    l1=strlen(str);
    l2=strlen(str1);
  for(i=0;i<=l2;i++)
  {
    str[j+i]=str1[i]; 
  }
    printf("%s", str);

    return 0;
}*/