#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);
int main()
{
    char a[20] = "Ssss";
    char b[5] = "soko";
    char c[20] = "Ssss";
    char d[5] = "soko";    
    printf("%s\n",ft_strcat(a,b));
    printf("%s\n",strcat(c,d));
}

