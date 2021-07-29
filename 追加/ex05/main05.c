#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);int main()
{
    
    char a[10] = "abcd";
    char b[10] = "efgh";
    char c[10] = "abcd";
    char d[10] = "efgh";    

    printf("%lu\n",strlen(a));
    strlcat(a,b,8);
    printf("%s\n",a);
    printf("%lu\n",strlcat(a,b,8));

    printf("%lu\n",strlen(c));
    ft_strlcat(c,d,8);
    printf("%s\n",c);
    printf("%u\n",ft_strlcat(c,d,8));
    return 0;
}