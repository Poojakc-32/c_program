// Implement strstr() function in C
#include<stdio.h>
#include <string.h>
int Im_StrStr(char* str, char* strSub);

int Im_StrStr(char* str, char* strSub)
{
    int i=0, j=0;
    int temp ;
    int l1 = strlen(str);
    int l2 = strlen(strSub);
    for(i=0; i<=l1-l2; i++)
    {
        temp = i;
        for(j=0; j<=l2; j++)
        {         
            if(str[temp] == strSub[j])
            {
                if(j == l2-1)
                    return 1;
                temp++;
            }
            else
                break;
        }
    }
    return 0;
}
  
int main()
{
    char str[] = "Hello";
    char str_sub[] = "llo";

    if(Im_StrStr(str, strSub))
        printf("Sub-string found.");
    else
        printf("Sub-string not found.");
}