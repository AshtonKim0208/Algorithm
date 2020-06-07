#include <stdio.h>

int main(void)
{
    int result = 0;
    char str[15];
    int idx;

    scanf("%s", str);
    idx = 0;
    while (str[idx])
    {
        if (str[idx] >= 'A' && str[idx] <= 'C')
            result += 3;
        if (str[idx] >= 'D' && str[idx] <= 'F')
            result += 4;
        if (str[idx] >= 'G' && str[idx] <= 'I')
            result += 5;
        if (str[idx] >= 'J' && str[idx] <= 'L')
            result += 6;
        if (str[idx] >= 'M' && str[idx] <= 'O')
            result += 7;
        if (str[idx] >= 'P' && str[idx] <= 'S')
            result += 8;
        if (str[idx] >= 'T' && str[idx] <= 'V')
            result += 9;
        if (str[idx] >= 'W' && str[idx] <= 'Z')
            result += 10;
        idx++;
    }
    printf("%d", result);
}