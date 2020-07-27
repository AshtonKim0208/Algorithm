#include <stdio.h>
#include <unistd.h>
#define MAX 100001

int is_space(char c)
{
    if (c == ' ' || (c >= 9 && c <= 13))
        return (1);
    else
        return (0);
}

int main(void)
{
    char buf[MAX];
    int i = 0;
    int count = 1;
    gets(buf);
    while (buf[i] != '\0')
    {
        if (is_space(buf[i]))
            count++;
        i++;
    }
    if (is_space(buf[0]))
        count--;
    if (is_space(buf[i - 1]))
       count--;
    printf("%d", count);
    return 0;
}