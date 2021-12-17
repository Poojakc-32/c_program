// Implement strcmp() function in C
#include<stdio.h>
int Im_strcmp(const char *str1, const char *str2);

int Im_strcmp(const char *str1, const char *str2)
{
  while(*str1 == *str2)
  {
    if(*str1 == '\0')
      return 0;
    str1++;
    str2++;
  }
  return (*str1 - *str2);
}

int main()
{
  char str1[25];
  char str2[25];
  int value = 0;
  printf("Enter first string to compare " );
  scanf("%s",str1);
  printf("Enter second string to compare ");
  scanf("%s",str2);
  value= Im_strcmp(str1,str2);
  printf("Comparison of first and second string is  = %d\n",value);
  if (value == 0)
       {
          printf("Both strings are identical\n");
       }
  else
       {
          printf("Both strings are  not identical\n");
       }
return 0;
}