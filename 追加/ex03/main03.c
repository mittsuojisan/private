#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char a[8] = "Ssss";
    char b[5] = "soko";
    char c[8] = "Ssss";
    char d[5] = "soko";    
    printf("%s\n",ft_strncat(a,b,3));
    printf("%s\n",ft_strncat(c,d,3));
}
