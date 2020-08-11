#include <stdio.h>
#include <string.h>

int ft_atoi(char *str)
{
    int result = 0;
    int len = strlen(str) - 1;
    while (str[len]){
        result= result*10 + str[len] - '0';
        len--;
    }
    return result;
}

int main(void)
{
    char a[4], b[4];
    int i, j = 0;
    scanf("%s %s", a, b);
    i = ft_atoi(a);
    j = ft_atoi(b);
    if (i < j)
        printf("%d", j);
    else
        printf("%d", i);
    return 0;
}