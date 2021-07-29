#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char    s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
    char    s2[] = "defgh";                 /* 一致する場合 */
    char    s3[] = "xyz";                   /* 一致しない場合 */
    char    s4[] = "   asdasdasdasdsada";    /* 検索対象文字列より長い場合 */
    char    s5[] = "";                      /* \0 */
    char    *sp;

        sp = ft_strstr(s1,s2);
        printf("一致する場合 : %s\n",sp);
        sp = ft_strstr(s1,s3);
        printf("一致しない場合 : %s\n",sp);
        sp = ft_strstr(s1,s4);
        printf("検索対象文字列より長い場合 : %s\n",sp);
        sp = ft_strstr(s1,s5);
        printf("\\0 : %s\n",sp);

    char    s6[] = "abcdefghijklmn";        /* 検索対象文字列 */
    char    s7[] = "defgh";                 /* 一致する場合 */
    char    s8[] = "xyz";                   /* 一致しない場合 */
    char    s9[] = "   asdasdasdasdsada";    /* 検索対象文字列より長い場合 */
    char    s10[] = "";                      /* \0 */
    char    *p;

        p = ft_strstr(s6,s7);
        printf("一致する場合 : %s\n",p);
        p = ft_strstr(s6,s8);
        printf("一致しない場合 : %s\n",p);
        p = ft_strstr(s6,s9);
        printf("検索対象文字列より長い場合 : %s\n",p);
        p = ft_strstr(s6,s10);
        printf("\\0 : %s\n",p);
        
        return 0;

        return 0;
}
