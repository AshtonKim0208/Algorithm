#include <stdio.h>
int total, rest = 0;
int main() {
    scanf("%d", &total);
    while (1)
    {
        if (total % 5 == 0)
        {
            printf("%d", total / 5 + rest);
            return 0;
        }
        rest++;
        total -= 3;
        if (total < 0)
        {
            printf("%d", -1);
            return 0;
        }
    }
}