#include <stdio.h>

int main(void)
{
    char array[105];

    while (scanf("%[^\n]\n", array) == 1)
    {
        printf("%s", array);
    }
    return 0;
}