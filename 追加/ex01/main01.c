#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char *a = "33533";
    char *b = "3343";
    printf("%d\n",ft_strncmp(a,b,3));
    printf("%d\n",strncmp(a,b,3));
}
