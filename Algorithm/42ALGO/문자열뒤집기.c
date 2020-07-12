#include <stdio.h>
#include <string.h>

int is_space(char *str, int i)
{
    while (str[i] != ' ')
        i++;
    return (i);
}

int main(void)
{
    int a, i, j;
    char str[21];
    scanf("%d", &a);
    i = 1;
    while (i <= a)
    {
        scanf(" %[^\n]", str);
        j = 0;
        while (str[j] != '\n' || str[j] != '\0')
        {
            while (j <= is_space(str, j))
            {
                printf("%c", str[is_space(str, j) - 1 - j]);
                j++;
            }
            j++;
        }
        i++;
    }
}