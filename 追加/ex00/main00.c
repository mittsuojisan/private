#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int main()
{
    char *a = "333333";
    char *b = "333333";
    printf("%d\n",ft_strcmp(a,b));
    printf("%d\n",strcmp(a,b));
}